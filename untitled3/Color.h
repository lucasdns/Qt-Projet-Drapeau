#ifndef COLOR_H
#define COLOR_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE

namespace Ui { class Widget; }
QT_END_NAMESPACE

class Color : public QWidget               // class color qui herite de la classe qwidget
{
    Q_OBJECT

public:
    Color(QWidget *parent = nullptr);   // nullprt = pointeur null.     constructeur de l'objet color.      un widjet qui point vers null.
    Color(QString couleur);             // qstring stock une chaine de caractère (16)
    ~Color();                           // destructeur

private:
    //Ui::Widget *ui;
};

#endif // COLOR_H
