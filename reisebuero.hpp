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
        bool check_Input(int input, int min, int max);
        std::vector<Buchung*> m_buchungen; 

        void show_Buchung_Details();
        void generate_Hotel_Buchung();
        void generate_Flug_Buchung();
};