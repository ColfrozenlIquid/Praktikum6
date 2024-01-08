#pragma once
#include <string>

class Buchung {
    public:
        Buchung();
        Buchung(Buchung& buchung);
        ~Buchung();
        virtual void zeige_Details();

    protected:
        std::string m_buchungs_Nummer;
        std::string m_nachname;
        std::string m_vorname;

    private:
};