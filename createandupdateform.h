#ifndef CREATEANDUPDATEFORM_H
#define CREATEANDUPDATEFORM_H

#include <QWidget>

namespace Ui {
class CreateAndUpdateForm;
}

class CreateAndUpdateForm : public QWidget
{
    Q_OBJECT

public:
    explicit CreateAndUpdateForm(QWidget *parent = nullptr);
    ~CreateAndUpdateForm();

private:
    Ui::CreateAndUpdateForm *ui;
};

#endif // CREATEANDUPDATEFORM_H
