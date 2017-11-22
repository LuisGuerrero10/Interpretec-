#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

using std::string;

namespace Ui {
class MainWindow;
}

//Definicion de la clase MainWindow
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_actionDeshacer_triggered();
    void on_actionRehacer_triggered();
    void on_actionCopiar_triggered();
    void on_actionPegar_triggered();
    void on_actionCortar_triggered();
    bool on_actionGuardar_como_triggered();
    void on_actionAbrir_triggered();
    void on_actionNuevo_triggered();
    void on_editorDeTexto_blockCountChanged(int newBlockCount);
    bool on_actionGuardar_triggered();
    void on_actionSalir_triggered();
    void on_actionCompilar_triggered();


private:
    Ui::MainWindow *ventanaPrincipal;  //Interfaz Grafica de usuario
    QString nombreDelArchivo;
};

#endif // MAINWINDOW_H
