#include "Task36.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Task36 vidget(nullptr);
    vidget.setFixedSize(200, 200);
    vidget.move(1000, 400);
    auto* slider = new QSlider(Qt::Horizontal);
    slider->setMinimum(0);
    slider->setMaximum(100);
    slider->resize(100, 30);
    QWidget* window = new QWidget;
    auto* layout = new QVBoxLayout(window);
    layout->addWidget(&vidget);
    layout->addWidget(slider);
    QObject::connect(slider, &QSlider::valueChanged, [&slider,&vidget](int newValue){
        
        if (newValue < 33) {
            vidget.green();
        }
        else if (newValue > 33&&newValue<66)
        {
            vidget.yelow();
        }
        else if (newValue > 66)
        {
            vidget.red();
        }
        });
    window->show();
    return a.exec();
}
