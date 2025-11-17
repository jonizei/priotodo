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

Task* CreateTaskForm::createTask()
{
    Task* task = new Task(
        ui->lnTitle->text(),
        ui->pteContent->toPlainText(),
        false,
        ui->hsImpact->value(),
        ui->hsUrgency->value(),
        ui->hsRelevance->value(),
        ui->hsEffort->value()
    );

    return task;
}

void CreateTaskForm::on_btnCreate_clicked()
{
    emit sendTask(*createTask());
    this->close();
}
