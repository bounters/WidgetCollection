#ifndef SAMPLEWIDGET_H
#define SAMPLEWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPushButton>

class SampleWidget : public QWidget
{
  Q_OBJECT
public:
  explicit SampleWidget(QWidget *parent = 0);
  void paintEvent(QPaintEvent *);

protected://Interaction:

    void mousePressEvent(QMouseEvent *event); //Finger touches surface
    void mouseReleaseEvent(QMouseEvent *event); //Finger leaves surface
    void mouseMoveEvent(QMouseEvent *event); //Finger moves slowly on surface
    void mouseDoubleClickEvent(QMouseEvent *event); //Finger holds for defindet time on one position

signals:

public slots:

};

#endif // SAMPLEWIDGET_H
