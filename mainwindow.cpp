#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , createTaskForm(new CreateTaskForm(nullptr))
{
    ui->setupUi(this);
    connect(ui->listTasks, &QListWidget::itemClicked, this, &MainWindow::onTaskItemClicked);
    connect(createTaskForm, &CreateTaskForm::sendTask, this, [&](Task &task){
        vecTasks.push_back(task);
        updateTaskView();
    });
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

void MainWindow::updateTaskView()
{
    ui->listTasks->clear();

    for (int i = 0; i < vecTasks.count(); i++)
    {
        Task task = vecTasks.at(i);
        QListWidgetItem *item = new QListWidgetItem(task.title());
        item->setData(Qt::UserRole, task.uuid());
        ui->listTasks->addItem(item);
    }
}

void MainWindow::onTaskItemClicked(QListWidgetItem *item)
{
    for (int i = 0; i < vecTasks.count(); i++)
    {
        Task task = vecTasks.at(i);
        if (task.uuid() == item->data(Qt::UserRole))
        {
            ui->lnTitle->setText(task.title());
            ui->pteContent->setPlainText(task.content());
            return;
        }
    }
}
