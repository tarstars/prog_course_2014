#ifndef IMAGEVIEW_H
#define IMAGEVIEW_H

#include <QDialog>
#include <QImage>

namespace Ui {
class ImageView;
}

class ImageView : public QDialog
{
    Q_OBJECT

    QImage img;

public slots:
    void loadImage();

public:
    explicit ImageView(QWidget *parent = 0);
    ~ImageView();

private:
    Ui::ImageView *ui;

protected:
    void paintEvent(QPaintEvent *);
};

#endif // IMAGEVIEW_H
