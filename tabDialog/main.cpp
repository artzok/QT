#include <QApplication>
#include <QLabel>
#include <QTabWidget>
#include <QMessageBox>
#include <QIcon>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // first : create QTabWidget instance
    QTabWidget *tabWidget = new QTabWidget;

    // second : create QWidget for evey page
    QLabel *labelA = new QLabel("<center><font size=23>A</font></center>");
    QLabel *labelB = new QLabel("<center><font size=23>B</font></center>");
    QLabel *labelC = new QLabel("<center><font size=23>C</font></center>");
    QLabel *labelD = new QLabel("<center><font size=23>D</font></center>");

    // third : add page widget by call addTab or insertTab method of QTabWidget
    tabWidget->addTab(labelA, "&A");
    tabWidget->addTab(labelB, "&B");
    tabWidget->addTab(labelC, "&C");
    tabWidget->insertTab(1, labelD, "&D");

    // alternative method

    // 1 : set tabs postion : North West East South
    tabWidget->setTabPosition(QTabWidget::South);

    // 2 : set tabs shape : Rounded Triangular
    tabWidget->setTabShape(QTabWidget::Triangular);

    // 3 : currentChanged(int pos) signal

    // 4 : get current index
    int currentPageIndex = tabWidget->currentIndex();

    // 5 : get current page widget
    QWidget *currentPageWidget = tabWidget->currentWidget();

    // 6 : get page widget by page index
    QWidget *someWidget = tabWidget->widget(3);

    // 7 : change current page
    tabWidget->setCurrentWidget(someWidget);
    tabWidget->setCurrentIndex(2);

    // 7 : change icon or text of tab
    tabWidget->setTabText(2, "change");
    tabWidget->setTabIcon(2, QIcon("file.xpm"));

    // 8 : remove page widget and associated tab
    tabWidget->removeTab(3);

    // 9 : enable or disable tab (this method can't prevent display page widget)
    tabWidget->setTabEnabled(2, false);

    tabWidget->show();
    return app.exec();
}
