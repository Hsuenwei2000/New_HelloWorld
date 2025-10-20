#ifndef DESIGNWIDGET_H
#define DESIGNWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class DesignWidget;
}
QT_END_NAMESPACE

class DesignWidget : public QWidget
{
    Q_OBJECT

public:
    DesignWidget(QWidget *parent = nullptr);
    ~DesignWidget();

private:
    Ui::DesignWidget *ui;
};
#endif // DESIGNWIDGET_H
