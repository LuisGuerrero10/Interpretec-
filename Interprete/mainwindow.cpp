#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <QFont>
#include <QDebug>
#include <QDateTime>


extern void setTextEditError(QPlainTextEdit* edit1);
extern int parse_string(const char* in);
extern int errorLineNumber();


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ventanaPrincipal(new Ui::MainWindow)
{
    ventanaPrincipal->setupUi(this);
    nombreDelArchivo.clear();
    ventanaPrincipal->contadorDeLineas->setPlainText("1");
    QFont fuente;
    fuente.setFamily("Drucifer");
    fuente.setPixelSize(13);
    QPalette paleta = ventanaPrincipal->editorDeTexto->palette();
    paleta.setColor(QPalette::Base , QColor(230,255,255,255));
    paleta.setColor(QPalette::Text , QColor(50,50,50));
    ventanaPrincipal->editorDeTexto->setFont(fuente);
    ventanaPrincipal->contadorDeLineas->setFont(fuente);
    ventanaPrincipal->resultadosDeCompilacion->setFont(fuente);
    ventanaPrincipal->editorDeTexto->setPalette(paleta);
    ventanaPrincipal->contadorDeLineas->setPalette(paleta);
    ventanaPrincipal->resultadosDeCompilacion->setPalette(paleta);
}

MainWindow::~MainWindow()
{
    delete ventanaPrincipal;
}


void MainWindow::on_actionDeshacer_triggered()
{
    ventanaPrincipal->editorDeTexto->undo();
}

void MainWindow::on_actionRehacer_triggered()
{
    ventanaPrincipal->editorDeTexto->redo();
}

void MainWindow::on_actionCopiar_triggered()
{
    ventanaPrincipal->editorDeTexto->copy();
}

void MainWindow::on_actionPegar_triggered()
{
    ventanaPrincipal->editorDeTexto->paste();
}

void MainWindow::on_actionCortar_triggered()
{
    ventanaPrincipal->editorDeTexto->cut();
}

bool MainWindow::on_actionGuardar_como_triggered()
{
    QString nombre;
    nombre.clear();
    nombre = QFileDialog::getSaveFileName(this,"Guardar");
    if(nombre.isEmpty())
        return false;
    else{
        QFile archivo;
        QTextStream escritor;
        archivo.setFileName(nombre);
        archivo.open(QIODevice::WriteOnly | QIODevice::Text);
        escritor.setDevice(&archivo);
        if(archivo.isOpen()){
            escritor << ventanaPrincipal->editorDeTexto->toPlainText();
            nombreDelArchivo = nombre;
            return true;
        }
        return false;
    }
}

void MainWindow::on_actionAbrir_triggered()
{
    QFile archivo;
    QTextStream lector;
    QString nombre;
    nombre = QFileDialog::getOpenFileName(this,"Abrir");
    if(nombre.isEmpty()){
        return;
    }else{
        archivo.setFileName(nombre);
        archivo.open(QIODevice::ReadOnly | QIODevice::Text);
        lector.setDevice(&archivo);
        if(archivo.isOpen()){
            ventanaPrincipal->editorDeTexto->setPlainText(lector.readAll());
            this->nombreDelArchivo = nombre;
        }
    }
}

void MainWindow::on_actionNuevo_triggered()
{
    if(nombreDelArchivo.isEmpty() && ventanaPrincipal->editorDeTexto->document()->isEmpty()){
        this->nombreDelArchivo.clear();
        ventanaPrincipal->editorDeTexto->setPlainText("");
    }else{
        bool guardar=false;
        bool no_guardar=false;
        switch( QMessageBox::information( this, "Interprete",
              "¿Quiere guardar los cambios?",
              "Si", "No", "Cancelar",
              0, 1 ) ) {
            case 0:
                guardar = true;
                break;
            case 1:
                no_guardar = true;
                break;
            }
        if(no_guardar){
            this->nombreDelArchivo.clear();
            ventanaPrincipal->editorDeTexto->setPlainText("");
        }else if(guardar){
            if(on_actionGuardar_triggered()){
                this->nombreDelArchivo.clear();
                ventanaPrincipal->editorDeTexto->setPlainText("");
            }
        }
    }

}

void MainWindow::on_editorDeTexto_blockCountChanged(int newBlockCount)
{
    QString lineas = "";
    for(int i=1;i<=newBlockCount;i++){
        lineas += QString::number(i)+"\n";
    }
    ventanaPrincipal->contadorDeLineas->setPlainText(lineas);
}

bool MainWindow::on_actionGuardar_triggered()
{
    if(nombreDelArchivo.isEmpty()){
        return on_actionGuardar_como_triggered();
    }else{
        QFile archivo;
        QTextStream escritor;
        archivo.setFileName(nombreDelArchivo);
        archivo.open(QIODevice::WriteOnly | QIODevice::Text);
        escritor.setDevice(&archivo);
        if(archivo.isOpen()){
            escritor << ventanaPrincipal->editorDeTexto->toPlainText();
            return true;
        }
        return false;
    }
}

void MainWindow::on_actionSalir_triggered()
{
    close();
}

void MainWindow::on_actionCompilar_triggered()
{
    if(on_actionGuardar_triggered()){
        ventanaPrincipal->resultadosDeCompilacion->clear();
        setTextEditError(ventanaPrincipal->resultadosDeCompilacion);
        parse_string(ventanaPrincipal->editorDeTexto->toPlainText().toLocal8Bit().constData());
        if(ventanaPrincipal->resultadosDeCompilacion->document()->isEmpty()){
            ventanaPrincipal->editorDeTexto->QMessageBox::information(this," resultado","compilado");

        }
    }

}
