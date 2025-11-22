#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QListWidgetItem>
#include <QUuid>
#include "createtaskform.h"
#include "task.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    CreateTaskForm *createTaskForm;
    QVector<Task> vecTasks;

    QUuid _selectedTask;

    void updateTaskView();
    void clearTaskPreview();

private slots:
    void on_btnCreateTask_clicked();
    void on_btnRemoveTask_clicked();
    void onTaskItemClicked(QListWidgetItem *item);
};
#endif // MAINWINDOW_H
