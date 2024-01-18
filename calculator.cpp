#include "calculator.h"
#include "ui_calculator.h"
int_fast64_t tetrate(int base, int p);
int_fast64_t pentate(int base, int p);
int_fast64_t hexate(int base, int p);

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
    //QObject::connect(ui->pushButton_1,"clicked","")
    connect(ui->pushButton_1,SIGNAL(clicked(bool)),this,SLOT(add_1_l1()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(add_2_l1()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(add_3_l1()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(add_4_l1()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(add_5_l1()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(add_6_l1()));
    connect(ui->pushButton_7,SIGNAL(clicked(bool)),this,SLOT(add_7_l1()));
    connect(ui->pushButton_8,SIGNAL(clicked(bool)),this,SLOT(add_8_l1()));
    connect(ui->pushButton_9,SIGNAL(clicked(bool)),this,SLOT(add_9_l1()));
    connect(ui->pushButton_0,SIGNAL(clicked(bool)),this,SLOT(add_0_l1()));
    connect(ui->pushButton_plus,SIGNAL(clicked(bool)),this,SLOT(add_plus_l1()));
    connect(ui->pushButton_minus,SIGNAL(clicked(bool)),this,SLOT(add_minus_l1()));
    connect(ui->pushButton_mul,SIGNAL(clicked(bool)),this,SLOT(add_mul_l1()));
    connect(ui->pushButton_div,SIGNAL(clicked(bool)),this,SLOT(add_div_l1()));
    connect(ui->pushButton_eq,SIGNAL(clicked(bool)),this,SLOT(equal()));
    connect(ui->pushButton_sqrt,SIGNAL(clicked(bool)),this,SLOT(app_sqrt()));
    connect(ui->pushButton_cbrt,SIGNAL(clicked(bool)),this,SLOT(app_cbrt()));
    connect(ui->pushButton_pow,SIGNAL(clicked(bool)),this,SLOT(app_pow()));
    connect(ui->pushButton_mod,SIGNAL(clicked(bool)),this,SLOT(add_mod_l1()));
    connect(ui->pushButton_clear,SIGNAL(clicked(bool)),this,SLOT(clear()));
    connect(ui->pushButton_back,SIGNAL(clicked(bool)),this,SLOT(back()));


    //connect(ui->pushButton_hxtt,SIGNAL(clicked(bool)),this,SLOT(app_hxat()));
}

calculator::~calculator()
{
    delete ui;
}
void calculator::add_0_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"0");
}
void calculator::add_1_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"1");
}
void calculator::add_2_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
}
void calculator::add_3_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
}
void calculator::add_4_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
}
void calculator::add_5_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
}
void calculator::add_6_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
}
void calculator::add_7_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
}
void calculator::add_8_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
}
void calculator::add_9_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
}
void calculator::add_plus_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"+");
}
void calculator::add_minus_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"-");
}
void calculator::add_mul_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
}
void calculator::add_div_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"/");
}
void calculator::add_mod_l1(){
    ui->lineEdit->setText(ui->lineEdit->text()+"%");
}
void calculator::clear(){
    ui->lineEdit->setText("");
}
void calculator::back(){
    ui->lineEdit->setText(ui->lineEdit->text().removeLast());
}
void calculator::equal(){
    QString exprs= ui->lineEdit->text();
    QJSEngine calc;
    ui->lineEdit_opt->setText(calc.evaluate(exprs).toString());

}
void calculator::app_sqrt(){
    QString num= ui->lineEdit_r_ipt->text();
    //QJSEngine calc;
    ui->lineEdit_r_opt->setText(QString::fromStdString(std::to_string(sqrt(num.toDouble()))));

}

void calculator::app_cbrt(){
    QString num= ui->lineEdit_r_ipt->text();
    //QJSEngine calc;
    ui->lineEdit_r_opt->setText(QString::fromStdString(std::to_string(cbrt(num.toDouble()))));

}
void calculator::app_pow(){
    QString num1= ui->lineEdit_exp_i1->text();
    QString num2= ui->lineEdit_exp_i2->text();
    //QJSEngine calc;
    ui->lineEdit_exp_opt->setText(QString::fromStdString(std::to_string(pow(num1.toDouble(),num2.toDouble()))));

}




