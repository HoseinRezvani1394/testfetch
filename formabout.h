#ifndef FORMABOUT_H
#define FORMABOUT_H

#include <QDialog>

namespace Ui {
class FormAbout;
}

class FormAbout : public QDialog
{
    Q_OBJECT

public:
    explicit FormAbout(QWidget *parent = nullptr);
    ~FormAbout();

private:
    Ui::FormAbout *ui;
};

#endif // FORMABOUT_H
