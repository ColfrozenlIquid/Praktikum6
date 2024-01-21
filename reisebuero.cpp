#include "reisebuero.hpp"

ReiseBuero::ReiseBuero() {}

ReiseBuero::~ReiseBuero() {}

void ReiseBuero::benutzer_Dialog() {
    int input;

    while (true) {
        std::cout << "\n1: Buchung anlegen" << std::endl;
        std::cout << "2: Buchungsdetails ausgeben" << std::endl;
        std::cout << "3: Alle Buchungen anzeigen" << std::endl;
        std::cout << "0: Programm beenden" << std::endl;

        std::cout << "Auswahl: ";
        std::cin >> input;

        if (!check_Input(input, 0, 3)) {
            continue;
        }

        switch (input) {
        case 1:
            add_Buchung();
            break;
        case 2:
            //buchungdetails ausgeben
            show_Buchung_Details();
            break;
        case 3:
            //alle buchung anzeigen
            break;
        case 0:
            exit(0);
            break;
        default:
            break;
        }
    }

}

bool ReiseBuero::check_Input(int input, int min, int max) {
    if (input < min || input > max) {
        std::cout << "Ungueltige Eingabe." << std::endl;
        return false;
    }
    return true;
}

void ReiseBuero::show_Buchung_Details() {
    for (Buchung* buchung : m_buchungen) {
        buchung->zeige_Details();
    }
}

void ReiseBuero::add_Buchung() {
    int input;

    std::cout << "Welche Buchung moechten Sie anlegen: " << std::endl;
    std::cout << "1) Hotelbuchung" << std::endl;
    std::cout << "2) Flugbuchung" << std::endl;
    std::cout << "0) Abbrechen" << std::endl;

    while (true) {
        std::string buchung_ID = get_Buchung_Capacity();
        std::cout << "Buchung capacity is: " << buchung_ID << std::endl;
        std::cout << "Auswahl: ";
        std::cin >> input;

        if (!check_Input(input, 0, 2)) {
            return;
        }

        if (input == 0) {
            //abbrechen
            return;
        }
        if (input == 1) {
            //hotelbuchung anlegen
            Buchung* hotel_buchung = new HotelBuchung();
            hotel_buchung->generate_Buchung(buchung_ID);
            m_buchungen.push_back(hotel_buchung);
            return;
        }
        if (input == 2) {
            //flugbuchung anlegen
            Buchung* flug_buchung = new FlugBuchung();
            flug_buchung->generate_Buchung(buchung_ID);
            m_buchungen.push_back(flug_buchung);
            return;
        }
    }
}

void ReiseBuero::generate_Hotel_Buchung() {

}

void ReiseBuero::generate_Flug_Buchung() {
    
}

std::string ReiseBuero::get_Buchung_Capacity() {
    return std::to_string(m_buchungen.size());
}