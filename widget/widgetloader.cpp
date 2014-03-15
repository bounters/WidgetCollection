#include "widgetloader.h"
WidgetLoader::WidgetLoader(QWidget *parent) :
    QWidget(parent)
{

  widgets.append("Clock");
  widgets.append("Image Frame");
  widgets.append("Bus timetable");


  QFont sansFont("Helvetica [Cronyx]", 30);
  QListWidget *listWidget = new QListWidget(this);
  QListWidgetItem *newItem;

  for(int i=0; i<widgets.size(); i++){
    newItem = new QListWidgetItem;
    newItem->setText(widgets.at(i));
    newItem->setFont(sansFont);
    QIcon icon;// = new QIcon;
    //ToDo: load correct image
    //icon.addPixmap(QPixmap("/usr/..../.jpg"));
    newItem->setIcon(icon);
    listWidget->insertItem(i, newItem);
  }
  listWidget->show();
  QObject::connect(listWidget,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(itemClicked(QListWidgetItem*)));
}

void WidgetLoader::paintEvent(QPaintEvent *)
{
}

void WidgetLoader::mousePressEvent(QMouseEvent *event)
{
}

void WidgetLoader::mouseReleaseEvent(QMouseEvent *event)
{
}

void WidgetLoader::mouseDoubleClickEvent(QMouseEvent *event)
{
}

void WidgetLoader::itemClicked(QListWidgetItem *item)
{
  qDebug()<< "View " << item->text() << " here";
  emit deleteLater();
}
