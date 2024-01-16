#include "calculator.h"


#include <QApplication>
#include <QWidget>
#include <cmath>
#include <QLineEdit>
#include <QPushButton>
//void addnum(QLineEdit *l,QPushButton *b);
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QWidget m;
    calculator *w=new calculator(/*&m*/);
    w->show();

    //m.show();
    return a.exec();
}
//void addnum(QLineEdit *l, QPushButton *b){
//    l->setText(l->text()+b->text());
//}
