#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QRectF>
#include <QTime>
#include <QTimer>
#include <QPoint>
#include <QColor>
#include <QFont>
#include <QPainter>
#include <QtMath>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    QRectF textRectF(double radius, int pointSize, double angle);
    void paintEvent(QPaintEvent *event);
};

#endif // MAINWINDOW_H
