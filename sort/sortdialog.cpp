#include "sortdialog.h"

SortDialog::SortDialog(QWidget *parent)
        : QDialog(parent)
{
    setupUi(this);

    secondaryGroupBox->hide();
    tertiaryGroupBox->hide();
    layout()->setSizeConstraint(QLayout::SetFixedSize);

    setColumnRange('A', 'Z');
}

void SortDialog::setColumnRange(QChar first, QChar last)
{
    primaryColumnCombo->clear();
    secondaryColumnCombo->clear();
    teriaryColumnCombo->clear();

    secondaryColumnCombo->addItem(tr("None"));
    teriaryColumnCombo->addItem(tr("None"));
    primaryColumnCombo->setMinimumSize(secondaryColumnCombo->sizeHint());

    QChar ch = first;
    while(ch <= last) {
        primaryColumnCombo->addItem(QString(ch));
        secondaryColumnCombo->addItem(QString(ch));
        teriaryColumnCombo->addItem(QString(ch));
        ch = ch.unicode() + 1;
    }
}

void SortDialog::on_moreButton_toggled(bool selected)
{
    moreButton->toggle();setText(selected ? tr("&More<<<"):tr("&More>>>"));
}

