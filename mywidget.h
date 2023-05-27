#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QtWidgets>
#include <QString>

class MyWidget : public QMainWindow{
    Q_OBJECT
private:
    QLineEdit* line1;
    QLineEdit* line2;
    QPushButton* bsqua;

    QPushButton* bclear;
    QLabel* labsign;
    QLabel* labis;

private slots:
    void slotClear();
    void slotSqua();

public:
    MyWidget();
    ~MyWidget();
};

#endif // MYWIDGET_H
