#include <iostream>
#include <QString>

class Ogrenci{
public:
    QString ad;
    QString soyad;
    int vize_notu;
    int final_notu;

    Ogrenci(QString ad, QString soyad, int vize_not, int final_not)
    {
        this->ad=ad;
        this->soyad=soyad;
        this->vize_notu=vize_not;
        this->final_notu=final_not;
    }
    double GecmeNotuHesapla(int vn, int fn)
    {
        double gecme_notu;
        gecme_notu=(vn*0.4)+(fn*0.6);
        return gecme_notu;
    }
};
