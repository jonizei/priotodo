#ifndef CREATETASKFORM_H
#define CREATETASKFORM_H

#include <QWidget>
#include "task.h"

namespace Ui {
class CreateTaskForm;
}

class CreateTaskForm : public QWidget
{
    Q_OBJECT

public:
    explicit CreateTaskForm(QWidget *parent = nullptr);
    ~CreateTaskForm();

private:
    Ui::CreateTaskForm *ui;
    Task* createTask();

private slots:
    void on_btnCreate_clicked();

signals:
    void sendTask(Task &task);

};

#endif // CREATETASKFORM_H
