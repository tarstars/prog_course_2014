#include "imageview.h"
#include "ui_imageview.h"

#include <QPainter>

#include <iostream>

using namespace std;

ImageView::ImageView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImageView)
{
    ui->setupUi(this);

    connect(ui->pbLoadImage, SIGNAL(clicked()), this, SLOT(loadImage()));
}

ImageView::~ImageView()
{
    delete ui;
}

void
ImageView::loadImage() {
    img.load("/home/tass/2014/text/4096.png");
    cerr << "size of loaded image " << img.height() << " " << img.width() << endl;
    update();
}

void
ImageView::paintEvent(QPaintEvent *) {
    QPainter dc(this);
    dc.drawEllipse(200, 200, 100, 100);
    dc.drawImage(150, 150, img);
}
