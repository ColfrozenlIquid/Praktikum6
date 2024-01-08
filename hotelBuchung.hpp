#pragma once
#include <string>
#include <QDate>
#include "buchung.hpp"

class HotelBuchung : public Buchung {
    public:
        HotelBuchung();
        HotelBuchung(HotelBuchung& hotelbuchung);
        ~HotelBuchung();
        void zeige_Details();

    protected:

    private:
        std::string m_hotel_Name;
        QDate* m_ankunft;
        QDate* m_abreise;
        char m_zimmer_Typ;
};
