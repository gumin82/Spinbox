/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFormLayout *formLayout;
    QLCDNumber *lcdNumber;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(846, 69);
        formLayout = new QFormLayout(Widget);
        formLayout->setObjectName("formLayout");
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lcdNumber);

        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(-100);
        spinBox->setMaximum(100);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, spinBox);

        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMinimum(-100);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        formLayout->setWidget(0, QFormLayout::ItemRole::SpanningRole, horizontalSlider);


        retranslateUi(Widget);
        QObject::connect(spinBox, &QSpinBox::valueChanged, horizontalSlider, &QSlider::setValue);
        QObject::connect(horizontalSlider, &QSlider::valueChanged, spinBox, &QSpinBox::setValue);
        QObject::connect(horizontalSlider, &QSlider::valueChanged, lcdNumber, qOverload<int>(&QLCDNumber::display));
        QObject::connect(spinBox, &QSpinBox::valueChanged, lcdNumber, qOverload<int>(&QLCDNumber::display));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
