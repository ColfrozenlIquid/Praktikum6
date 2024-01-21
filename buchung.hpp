#pragma once
#include <string>
#include <iostream>

class Buchung {
    public:
        virtual void zeige_Details() = 0;

    protected:
        std::string m_buchungs_Nummer;
        std::string m_nachname;
        std::string m_vorname;

    private:
};
