#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QWidget>
#include <cmath>
#include <QJSEngine>
#include <string>
#include <QMenu>
//#include <QObject>
//#include <QtMath>

QT_BEGIN_NAMESPACE
namespace Ui {
class calculator;

}
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();




private:
    Ui::calculator *ui;
public slots:
    void add_1_l1();
    void add_2_l1();
    void add_3_l1();
    void add_4_l1();
    void add_5_l1();
    void add_6_l1();
    void add_7_l1();
    void add_8_l1();
    void add_9_l1();
    void add_0_l1();
    void add_plus_l1();
    void add_minus_l1();
    void add_div_l1();
    void add_mul_l1();
    void equal();
    void app_sqrt();
    void app_cbrt();
    void app_pow();
    void add_mod_l1();
    void clear();
    void back();
    //void app_ttrt();
    //void app_pntt();
    //void app_hxat();


};



#endif // CALCULATOR_H
