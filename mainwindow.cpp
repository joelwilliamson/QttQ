#include "mainwindow.h"
#include "viewarea.h"
#include "scene.h"
#include "room.h"
#include "stdio.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{

    scene = new Scene(this);
    printf("Creating room 1,1...\n");fflush(stdout);
    rooms.append(new Room(1,1,scene));
    printf("Room Created. Setting Type...\n"); fflush(stdout);
    rooms.setRoomType(rooms.size()-1,ag);
    printf("Type set. Updating image...\n");fflush(stdout);
    scene->updateRoom(rooms.last());
    printf("Image updated. Creating room 1,2...\n");fflush(stdout);
    rooms.append(new Room(1,2,scene));
    rooms.setRoomType(rooms.size()-1,ind);
    scene->updateRoom(rooms.last());
    rooms.append(new Room(2,1,scene));
    rooms.setRoomType(rooms.size()-1,housing);
    scene->updateRoom(rooms.last());
    rooms.append(new Room(2,2,scene));
    rooms.setRoomType(rooms.size()-1,ag);
    scene->updateRoom(rooms.last());
    view = new ViewArea(scene);
    //view->rotate(45);
    setCentralWidget(view);
    show();
}

MainWindow::~MainWindow()
{
}
