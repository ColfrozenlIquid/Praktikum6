#include "reisebuero.hpp"

ReiseBuero::ReiseBuero() {}

ReiseBuero::~ReiseBuero() {}

void ReiseBuero::benutzer_Dialog() {
    int input;

    std::cout << "1: Buchung anlegen" << std::endl;
    std::cout << "2: Buchungsdetails ausgeben" << std::endl;
    std::cout << "3: Alle Buchungen anzeigen" << std::endl;
    std::cout << "0: Programm beenden" << std::endl;

    while ()
    std::cout << "Auswahl: ";
    std::cin >> input;

    if ()


}

bool check_Input(int input) {
    if (input < 0 || input > 3) {
        std::cout << "Ungueltige Eingabe." << std::endl;
        return false;
    }
    return true;
}