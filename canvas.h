#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPainter>
#include <QTime>
#include <QTimer>

namespace Ui {
class Canvas;
}

class Canvas : public QWidget
{
    Q_OBJECT

public:
    explicit Canvas(QWidget *parent = 0);
    ~Canvas();


private:
    Ui::Canvas *ui;
    void paintEvent(QPaintEvent *);
    QPainter *paint;
    QTimer *animationTimer;
    int width;
    int height;
};

#endif // CANVAS_H