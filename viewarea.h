#ifndef VIEWAREA_H
#define VIEWAREA_H

#include <QGraphicsView>

class QGraphicsScene;

class ViewArea : public QGraphicsView
{
    Q_OBJECT
public:
    explicit ViewArea(QGraphicsScene *scene, QWidget *parent = 0);

signals:

public slots:

};

#endif // VIEWAREA_H
