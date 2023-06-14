#pragma once
#include<iostream>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QApplication>
#include <QVBoxLayout>
#include<QSlider>
#include<QSpinBox>
#include<QPixmap>
#include<QPainter>
#include<QPaintEvent>
#include<QSlider>
#include<QObject>
class Task36 : public QMainWindow
{
    Q_OBJECT

public:
    Task36(QWidget *parent);
    void paintEvent(QPaintEvent* e) override;
    ~Task36();
public slots:
    void red();
    void green();
    void yelow();

private:
    QPixmap redPix;
    QPixmap greenPix;
    QPixmap yelowPix;
    QPixmap nowPix;
};
