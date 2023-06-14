#include "Task36.h"

Task36::Task36(QWidget *parent) 
{
    setParent(parent);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    greenPix = QPixmap("green.png");
    redPix = QPixmap("red.png");
    yelowPix = QPixmap("yelow.png");
}

void Task36::paintEvent(QPaintEvent* e)
{
    QPainter p(this);
    p.drawPixmap(e->rect(), nowPix);
}

void Task36::red()
{
    nowPix = redPix;
    update();
}
void Task36::green()
{
    nowPix = greenPix;
    update();
}
void Task36::yelow()
{
    nowPix = yelowPix;
    update();
}
Task36::~Task36()
{}

//auto* slider = new QSlider(Qt::Horizontal);

//slider->setMinimum(0);
//slider->setMaximum(100);

//QObject::connect(slider, &QSlider::valueChanged, spinbox, &QSpinBox::setValue);
//slider->resize(100, 30);
//spinbox->resize(20, 20);
//spinbox->move(1000, 800);
//slider->move(800, 500);
//QVBoxLayout layout;
//layout.addWidget(slider);
//layout.addWidget(spinbox);
//QWidget window;
//window.setLayout(&layout);
//window.show();