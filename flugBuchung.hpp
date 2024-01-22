#pragma once
#include <string>
//#include <QtCore/QDate>
#include "buchung.hpp"

class FlugBuchung : public Buchung {
    public:
        FlugBuchung();
        FlugBuchung(int buchung_nummer, std::string nachname, std::string vorname, std::string fluglinie, std::string sitzplatz, std::string von, std::string nach);
        FlugBuchung(const FlugBuchung& FlugBuchung);
        ~FlugBuchung();

        void zeige_Details();
        void generate_Buchung(std::string buchung_ID);

        std::string get_Buchung_Nummer();
        std::string get_Buchung_Type();
    
    protected:

    private:
        std::string m_fluglinie;
        std::string m_sitz_platz;
        std::string m_von;
        std::string m_nach;
        Datum* m_datum;

        Datum* parse_Datum(std::string datum);
};