#pragma once
#include <vector>
#include <iostream>
#include "buchung.hpp"
#include "flugBuchung.hpp"
#include "hotelBuchung.hpp"

class ReiseBuero {
    public:
        ReiseBuero();
        ~ReiseBuero();

        void benutzer_Dialog();
        void add_Buchung();
        std::string get_Buchung_Capacity();

    protected:

    private:
        std::vector<Buchung*> m_buchungen;

        bool check_Input(int input, int min, int max);
        void show_Alle_Buchung();
        void show_Buchung_Details();
        void get_Buchung_By_BuchungID(std::string buchung_ID);
};