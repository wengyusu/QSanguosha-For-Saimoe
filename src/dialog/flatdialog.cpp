#include "flatdialog.h"
#include "stylehelper.h"

#include <QLabel>
#include <QPainter>
#include <QVBoxLayout>
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <QPushButton>

FlatDialog::FlatDialog(QWidget *parent, bool initialLayoutWithTitle)
    : QDialog(parent)
{
#ifdef Q_OS_WIN
    setWindowFlags(windowFlags() | Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    mousePressed = false;

    if (initialLayoutWithTitle) {
        layout = new QVBoxLayout;
        title = new QLabel;
        title->setAlignment(Qt::AlignTop | Qt::AlignLeft);
        title->setObjectName("window_title");
        connect(this, &FlatDialog::windowTitleChanged, title, &QLabel::setText);
        layout->addWidget(title);
        setLayout(layout);
    }

    if (StyleHelper::backgroundColorOfFlatDialog().alpha() <= 100) {
        QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect(this);
        effect->setBlurRadius(18);
        QColor color = StyleHelper::backgroundColorOfFlatDialog();
        color.setAlpha(255);
        effect->setColor(color);
        effect->setOffset(0);
        setGraphicsEffect(effect);
    }
#else
    if (initialLayoutWithTitle) {
        layout = new QVBoxLayout;
        setLayout(layout);
    }
#endif
}

bool FlatDialog::addCloseButton(QString name)
{
    if (layout == NULL)
        return false;

    if (name.isEmpty())
        name = tr("Close");

    QPushButton *closeButton = new QPushButton(name);
    connect(closeButton, &QPushButton::clicked, this, &FlatDialog::reject);
    layout->addWidget(closeButton);
    return true;
}

#ifdef Q_OS_WIN
void FlatDialog::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(Qt::NoPen);
    painter.setBrush(StyleHelper::backgroundColorOfFlatDialog());
    painter.drawRoundedRect(rect(), 5, 5);
}

void FlatDialog::mousePressEvent(QMouseEvent *event)
{
    if (event->button() & Qt::LeftButton) {
        mousePressedPoint = event->globalPos() - frameGeometry().topLeft();
        mousePressed = true;
    }
}

void FlatDialog::mouseMoveEvent(QMouseEvent *event)
{
    if (mousePressed)
        move(event->globalPos() - mousePressedPoint);
}

void FlatDialog::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() & Qt::LeftButton)
        mousePressed = false;
}
#endif
