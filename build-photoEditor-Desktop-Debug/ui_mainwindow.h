/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout;
    QWidget *topbarWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *logoLbl;
    QSpacerItem *horizontalSpacer_2;
    QLabel *titleLbl;
    QSpacerItem *horizontalSpacer_3;
    QWidget *editWidget;
    QWidget *buttonsWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancelPb;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *savePb;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1440, 900);
        MainWindow->setMinimumSize(QSize(1440, 900));
        MainWindow->setMaximumSize(QSize(1440, 900));
        mainWidget = new QWidget(MainWindow);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->setMinimumSize(QSize(1440, 900));
        mainWidget->setMaximumSize(QSize(1440, 900));
        verticalLayout = new QVBoxLayout(mainWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topbarWidget = new QWidget(mainWidget);
        topbarWidget->setObjectName(QString::fromUtf8("topbarWidget"));
        topbarWidget->setMinimumSize(QSize(1440, 55));
        topbarWidget->setMaximumSize(QSize(1440, 55));
        horizontalLayout = new QHBoxLayout(topbarWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        logoLbl = new QLabel(topbarWidget);
        logoLbl->setObjectName(QString::fromUtf8("logoLbl"));

        horizontalLayout->addWidget(logoLbl);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        titleLbl = new QLabel(topbarWidget);
        titleLbl->setObjectName(QString::fromUtf8("titleLbl"));
        QFont font;
        font.setPointSize(15);
        titleLbl->setFont(font);

        horizontalLayout->addWidget(titleLbl);

        horizontalSpacer_3 = new QSpacerItem(1219, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(topbarWidget);

        editWidget = new QWidget(mainWidget);
        editWidget->setObjectName(QString::fromUtf8("editWidget"));
        editWidget->setMinimumSize(QSize(1440, 0));
        editWidget->setMaximumSize(QSize(1440, 16777215));

        verticalLayout->addWidget(editWidget);

        buttonsWidget = new QWidget(mainWidget);
        buttonsWidget->setObjectName(QString::fromUtf8("buttonsWidget"));
        buttonsWidget->setMinimumSize(QSize(1440, 80));
        buttonsWidget->setMaximumSize(QSize(1440, 80));
        horizontalLayout_2 = new QHBoxLayout(buttonsWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(1011, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        cancelPb = new QPushButton(buttonsWidget);
        cancelPb->setObjectName(QString::fromUtf8("cancelPb"));

        horizontalLayout_2->addWidget(cancelPb);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        savePb = new QPushButton(buttonsWidget);
        savePb->setObjectName(QString::fromUtf8("savePb"));

        horizontalLayout_2->addWidget(savePb);

        horizontalSpacer_6 = new QSpacerItem(180, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(buttonsWidget);

        MainWindow->setCentralWidget(mainWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logoLbl->setText(QCoreApplication::translate("MainWindow", "Logo", nullptr));
        titleLbl->setText(QCoreApplication::translate("MainWindow", "PhotoEditor", nullptr));
        cancelPb->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        savePb->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
