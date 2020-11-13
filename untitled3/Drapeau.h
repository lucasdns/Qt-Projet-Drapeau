#ifndef DRAPEAU_H
#define DRAPEAU_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>

class Drapeau : public QWidget              // class color qui herite de la classe qwidget
{
Q_OBJECT

public:

Drapeau(QWidget *parent = nullptr);         // nullprt = pointeur null.     constructeur de l'objet drapeau.      un widjet qui point vers null.
Drapeau(QString C1, QString C2, QString C3, QString type,QString title);  //contsucteur objet drapeau, attributs : chaine de caractere 1, 2, 3, type et un titre).

~Drapeau();                             // destructeur drapeau

QHBoxLayout *Horiz_layout = new QHBoxLayout;        // construire des objets de disposition de boîte horizontale
QVBoxLayout *Vertic_layout = new QVBoxLayout;       // construire des objets de disposition de boîte verticale

private:
//Ui::Widget *ui;
};
#endif // DRAPEAU_H
