#pragma once
#include <vector>
#include <iostream>
#include "buchung.hpp"

class ReiseBuero {
    public:
        ReiseBuero();
        ~ReiseBuero();
        void benutzer_Dialog();

    protected:

    private:
        std::vector<Buchung*> m_buchungen;
};