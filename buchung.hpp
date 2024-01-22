#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include "Datum.h"

class Buchung {
    public:
        virtual void zeige_Details() = 0;
        virtual void generate_Buchung(std::string buchung_ID) = 0;

        virtual std::string get_Buchung_Nummer() = 0;
        virtual std::string get_Buchung_Type() = 0;

    protected:
        std::string m_buchungs_Nummer;
        std::string m_nachname;
        std::string m_vorname;

    private:
};
