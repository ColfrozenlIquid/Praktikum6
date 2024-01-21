#pragma once
#include <string>
//#include <QtCore/QDate>
#include "buchung.hpp"

class HotelBuchung : public Buchung {
    public:
        HotelBuchung();
        HotelBuchung(int buchung_nummer, std::string nachname, std::string vorname, std::string hotel_name, char zimmer_typ);
        HotelBuchung(const HotelBuchung& hotelbuchung);
        ~HotelBuchung();
        void zeige_Details();
        void generate_Buchung(std::string buchung_ID);

        void set_Buchung_Nummer(int buchung_nummer);
        void set_Nachname(std::string nachname);
        void set_Vorname(std::string vorname);
        void set_Hotel_Name(std::string hotel_name);
        void set_Zimmer_Typ(char zimmer_typ);

    protected:

    private:
        std::string m_hotel_Name;
        // QDate* m_ankunft;
        // QDate* m_abreise;
        char m_zimmer_Typ;
};
