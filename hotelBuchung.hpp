#pragma once
#include "buchung.hpp"

class HotelBuchung : public Buchung {
    public:
        HotelBuchung();
        HotelBuchung(int buchung_nummer, std::string nachname, std::string vorname, std::string hotel_name, char zimmer_typ);
        HotelBuchung(const HotelBuchung& hotelbuchung);
        ~HotelBuchung();

        void zeige_Details();
        void generate_Buchung(std::string buchung_ID);

        std::string get_Buchung_Nummer();
        std::string get_Buchung_Type();

    protected:

    private:
        std::string m_hotel_Name;
        Datum* m_ankunft;
        Datum* m_abreise;
        char m_zimmer_Typ;

        Datum* parse_Datum(std::string datum);
};
