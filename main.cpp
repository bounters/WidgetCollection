#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QDebug>

#include <widget/widgetloader.h>
#include <widget/analogclock.h>
#include <widget/samplewidget.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene scene;
    QGraphicsView view(&scene);

    // Add a Widget
    WidgetLoader *loader = new WidgetLoader;
    scene.addWidget(loader);

    //Add a second one and move to right side
    AnalogClock *clock = new AnalogClock;
    clock->move(QPoint(300,0));
    scene.addWidget(clock);

    //Finally the sampleWidget
    SampleWidget *widget = new SampleWidget;
    widget->move(0,300);
    scene.addWidget(widget);

     view.showMaximized();
     //Fullscreen:
//     view.showFullScreen();

    return a.exec();
}
