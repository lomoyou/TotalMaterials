#include "createandupdateform.h"
#include "ui_createandupdateform.h"

CreateAndUpdateForm::CreateAndUpdateForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateAndUpdateForm)
{
    ui->setupUi(this);
}

CreateAndUpdateForm::~CreateAndUpdateForm()
{
    delete ui;
}
