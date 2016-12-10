/********************************************************************************
** Form generated from reading UI file 'gotocelldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOCELLDIALOG_H
#define UI_GOTOCELLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoToCellDialog
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *topLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *bottomLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *GoToCellDialog)
    {
        if (GoToCellDialog->objectName().isEmpty())
            GoToCellDialog->setObjectName(QStringLiteral("GoToCellDialog"));
        GoToCellDialog->resize(232, 80);
        mainLayout = new QVBoxLayout(GoToCellDialog);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        topLayout = new QHBoxLayout();
        topLayout->setObjectName(QStringLiteral("topLayout"));
        label = new QLabel(GoToCellDialog);
        label->setObjectName(QStringLiteral("label"));

        topLayout->addWidget(label);

        lineEdit = new QLineEdit(GoToCellDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        topLayout->addWidget(lineEdit);


        mainLayout->addLayout(topLayout);

        bottomLayout = new QHBoxLayout();
        bottomLayout->setObjectName(QStringLiteral("bottomLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        bottomLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(GoToCellDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setEnabled(false);

        bottomLayout->addWidget(okButton);

        cancelButton = new QPushButton(GoToCellDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        bottomLayout->addWidget(cancelButton);


        mainLayout->addLayout(bottomLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(GoToCellDialog);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(GoToCellDialog);
    } // setupUi

    void retranslateUi(QWidget *GoToCellDialog)
    {
        GoToCellDialog->setWindowTitle(QApplication::translate("GoToCellDialog", "Go To Cell", 0));
        label->setText(QApplication::translate("GoToCellDialog", "&Cell Location:", 0));
        okButton->setText(QApplication::translate("GoToCellDialog", "OK", 0));
        cancelButton->setText(QApplication::translate("GoToCellDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class GoToCellDialog: public Ui_GoToCellDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOCELLDIALOG_H
