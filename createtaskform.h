#ifndef CREATETASKFORM_H
#define CREATETASKFORM_H

#include <QWidget>

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
};

#endif // CREATETASKFORM_H
