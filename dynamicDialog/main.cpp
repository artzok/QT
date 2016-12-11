#include <QApplication>
#include <QtUiTools>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // create ui loader instance
    QUiLoader uiLoader;

    // define ui file and load widget
    QFile file("sortdialog.ui");
    QWidget *sortDialog = uiLoader.load(&file);

    // set size constraint of dialog
    sortDialog->layout()->setSizeConstraint(QLayout::SetFixedSize);

    // find all combo box widget
    QComboBox *primary = sortDialog->findChild<QComboBox *>("primaryColumnCombo");
    QComboBox *second = sortDialog->findChild<QComboBox *>("secondaryColumnCombo");
    QComboBox *teriary = sortDialog->findChild<QComboBox *>("tertiaryColumnCombo");

    // hide second and third group box on start
    sortDialog->findChild<QWidget*>("secondaryGroupBox")->hide();
    sortDialog->findChild<QWidget*>("tertiaryGroupBox")->hide();

    // set first combo box min size, beacuse other widget contain "None" string item, that is too larget relate to single char
    primary->setMinimumSize(second->sizeHint());

    // add item for all combo box widget
    primary->clear();
    second->clear();
    teriary->clear();

    second->addItem("None");
    teriary->addItem("None");

    QChar ch = 'C';
    while(ch <= 'H') {
        primary->addItem(ch);
        second->addItem(ch);
        teriary->addItem(ch);
        ch = ch.unicode() + 1;
    }

    sortDialog->show();

    return app.exec();
}
