#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , createTaskForm(new CreateTaskForm(nullptr))
{
    ui->setupUi(this);
    connect(ui->btnCreateTask, &QPushButton::clicked, this, &MainWindow::on_btnCreateTask_clicked);
}

MainWindow::~MainWindow()
{
    delete createTaskForm;
    delete ui;
}

void MainWindow::on_btnCreateTask_clicked()
{
    createTaskForm->show();
}
