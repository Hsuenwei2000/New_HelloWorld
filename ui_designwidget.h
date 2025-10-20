/********************************************************************************
** Form generated from reading UI file 'designwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGNWIDGET_H
#define UI_DESIGNWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DesignWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *DesignWidget)
    {
        if (DesignWidget->objectName().isEmpty())
            DesignWidget->setObjectName("DesignWidget");
        DesignWidget->resize(800, 600);
        verticalLayoutWidget = new QWidget(DesignWidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 10, 791, 581));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(DesignWidget);

        QMetaObject::connectSlotsByName(DesignWidget);
    } // setupUi

    void retranslateUi(QWidget *DesignWidget)
    {
        DesignWidget->setWindowTitle(QCoreApplication::translate("DesignWidget", "DesignWidget", nullptr));
        pushButton->setText(QCoreApplication::translate("DesignWidget", "hello", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DesignWidget", "hello2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DesignWidget: public Ui_DesignWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGNWIDGET_H
