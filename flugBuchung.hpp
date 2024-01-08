#pragma once
#include <string>
#include <QDate>
#include "buchung.hpp"

class FlugBuchung : public Buchung {
    public:
        FlugBuchung();
        FlugBuchung(FlugBuchung& FlugBuchung);
        ~FlugBuchung();
        void zeige_Details();
    
    protected:

    private:
        std::string m_fluglinie;
        std::string m_sitz_Platz;
        std::string m_von;
        std::string m_nach;
        QDate* m_datum;
};