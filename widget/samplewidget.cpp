#include "samplewidget.h"

SampleWidget::SampleWidget(QWidget *parent) :
  QWidget(parent)
{
  //Add Buttons,List or Labes here
  // organized by a layoutManager
  // or load qml file

  //Sample Button
  QPushButton *button = new QPushButton(this);
  button->setText("Push Me");
  button->show();
  setFixedHeight(80);
}

void SampleWidget::paintEvent(QPaintEvent *)
{
  //Paint special Widgets

  //Sample:
  QPainter painter(this);
  painter.drawRect(30,30,25,20);
}

void SampleWidget::mousePressEvent(QMouseEvent *event)
{

}

void SampleWidget::mouseReleaseEvent(QMouseEvent *event)
{

}

void SampleWidget::mouseMoveEvent(QMouseEvent *event)
{

}

void SampleWidget::mouseDoubleClickEvent(QMouseEvent *event)
{

}
