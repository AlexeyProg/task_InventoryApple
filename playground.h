#ifndef PLAYGROUND_H
#define PLAYGROUND_H

#include <QDialog>

namespace Ui {
class Playground;
}

class Playground : public QDialog
{
    Q_OBJECT

public:
    explicit Playground(QWidget *parent = nullptr);
    ~Playground();

private:
    Ui::Playground *ui;
};

#endif // PLAYGROUND_H
