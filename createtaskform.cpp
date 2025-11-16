#include "createtaskform.h"
#include "ui_createtaskform.h"

CreateTaskForm::CreateTaskForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CreateTaskForm)
{
    ui->setupUi(this);
}

CreateTaskForm::~CreateTaskForm()
{
    delete ui;
}
