/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionGuardar_como;
    QAction *actionNuevo;
    QAction *actionSalir;
    QAction *actionDeshacer;
    QAction *actionRehacer;
    QAction *actionCopiar;
    QAction *actionPegar;
    QAction *actionCortar;
    QAction *actionCompilar;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *contadorDeLineas;
    QPlainTextEdit *editorDeTexto;
    QPlainTextEdit *resultadosDeCompilacion;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuEdicion;
    QMenu *menuEjecutar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 500);
        QPalette palette;
        QBrush brush(QColor(177, 162, 208, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(164, 166, 168, 96));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/appIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon1);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/guardar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon2);
        actionGuardar_como = new QAction(MainWindow);
        actionGuardar_como->setObjectName(QString::fromUtf8("actionGuardar_como"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/guardar_como.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar_como->setIcon(icon3);
        actionNuevo = new QAction(MainWindow);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/nuevo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon4);
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/cerrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon5);
        actionDeshacer = new QAction(MainWindow);
        actionDeshacer->setObjectName(QString::fromUtf8("actionDeshacer"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/deshacer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeshacer->setIcon(icon6);
        actionRehacer = new QAction(MainWindow);
        actionRehacer->setObjectName(QString::fromUtf8("actionRehacer"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/rehacer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRehacer->setIcon(icon7);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/copiar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon8);
        actionPegar = new QAction(MainWindow);
        actionPegar->setObjectName(QString::fromUtf8("actionPegar"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/pegar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPegar->setIcon(icon9);
        actionCortar = new QAction(MainWindow);
        actionCortar->setObjectName(QString::fromUtf8("actionCortar"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/cortar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCortar->setIcon(icon10);
        actionCompilar = new QAction(MainWindow);
        actionCompilar->setObjectName(QString::fromUtf8("actionCompilar"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/compilar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCompilar->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        contadorDeLineas = new QPlainTextEdit(centralWidget);
        contadorDeLineas->setObjectName(QString::fromUtf8("contadorDeLineas"));
        contadorDeLineas->setMinimumSize(QSize(45, 0));
        contadorDeLineas->setMaximumSize(QSize(45, 16777215));
        contadorDeLineas->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        contadorDeLineas->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        contadorDeLineas->setReadOnly(true);

        gridLayout->addWidget(contadorDeLineas, 0, 0, 1, 1);

        editorDeTexto = new QPlainTextEdit(centralWidget);
        editorDeTexto->setObjectName(QString::fromUtf8("editorDeTexto"));
        editorDeTexto->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(editorDeTexto, 0, 1, 1, 1);

        resultadosDeCompilacion = new QPlainTextEdit(centralWidget);
        resultadosDeCompilacion->setObjectName(QString::fromUtf8("resultadosDeCompilacion"));
        resultadosDeCompilacion->setMinimumSize(QSize(0, 70));
        resultadosDeCompilacion->setMaximumSize(QSize(16777215, 70));
        resultadosDeCompilacion->setReadOnly(true);

        gridLayout->addWidget(resultadosDeCompilacion, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 20));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuEdicion = new QMenu(menuBar);
        menuEdicion->setObjectName(QString::fromUtf8("menuEdicion"));
        menuEjecutar = new QMenu(menuBar);
        menuEjecutar->setObjectName(QString::fromUtf8("menuEjecutar"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(30, 30));
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuEdicion->menuAction());
        menuBar->addAction(menuEjecutar->menuAction());
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionGuardar_como);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuEdicion->addAction(actionDeshacer);
        menuEdicion->addAction(actionRehacer);
        menuEdicion->addAction(actionCopiar);
        menuEdicion->addAction(actionPegar);
        menuEdicion->addAction(actionCortar);
        menuEjecutar->addAction(actionCompilar);
        mainToolBar->addAction(actionNuevo);
        mainToolBar->addAction(actionAbrir);
        mainToolBar->addAction(actionGuardar);
        mainToolBar->addAction(actionGuardar_como);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCopiar);
        mainToolBar->addAction(actionPegar);
        mainToolBar->addAction(actionCortar);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCompilar);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSalir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Interprete", 0, QApplication::UnicodeUTF8));
        actionAbrir->setText(QApplication::translate("MainWindow", "Abrir", 0, QApplication::UnicodeUTF8));
        actionAbrir->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionGuardar->setText(QApplication::translate("MainWindow", "Guardar", 0, QApplication::UnicodeUTF8));
        actionGuardar->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        actionGuardar_como->setText(QApplication::translate("MainWindow", "Guardar como...", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("MainWindow", "Nuevo", 0, QApplication::UnicodeUTF8));
        actionNuevo->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionSalir->setText(QApplication::translate("MainWindow", "Salir", 0, QApplication::UnicodeUTF8));
        actionDeshacer->setText(QApplication::translate("MainWindow", "Deshacer", 0, QApplication::UnicodeUTF8));
        actionDeshacer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionRehacer->setText(QApplication::translate("MainWindow", "Rehacer", 0, QApplication::UnicodeUTF8));
        actionRehacer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0, QApplication::UnicodeUTF8));
        actionCopiar->setText(QApplication::translate("MainWindow", "Copiar", 0, QApplication::UnicodeUTF8));
        actionCopiar->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionPegar->setText(QApplication::translate("MainWindow", "Pegar", 0, QApplication::UnicodeUTF8));
        actionPegar->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionCortar->setText(QApplication::translate("MainWindow", "Cortar", 0, QApplication::UnicodeUTF8));
        actionCortar->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCompilar->setText(QApplication::translate("MainWindow", "Compilar", 0, QApplication::UnicodeUTF8));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", 0, QApplication::UnicodeUTF8));
        menuEdicion->setTitle(QApplication::translate("MainWindow", "Edicion", 0, QApplication::UnicodeUTF8));
        menuEjecutar->setTitle(QApplication::translate("MainWindow", "Ejecutar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
