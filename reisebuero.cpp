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
        std::cout << "Entered correct input: " << input << std::endl;

        switch (input) {
        case 1:
            add_Buchung();
            break;
        case 2:
            //buchungdetails ausgeben
            break;
        case 3:
            //alle buchung anzeigen
            show_Buchung();
            break;
        case 0:
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

void ReiseBuero::show_Buchung() {
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
        std::cout << "Auswahl: ";
        std::cin >> input;

        if (!check_Input(input, 0, 2)) {
            return;
        }

        switch (input) {
        case 0:
            //abbrechen
            return;
            break;
        case 1:
            //hotelbuchung anlegen
            generate_Hotel_Buchung();
            return;
            break;
        case 2:
            //flugbuchung anlegen
            generate_Flug_Buchung();
            return;
            break;
        default:
            break;
        }

    }
}

void ReiseBuero::generate_Hotel_Buchung() {
    std::string nachname;
    std::string vorname;
    std::string hotel_name;
    char zimmer_typ;

    std::cout << "Hotelbuchung erstellen: " << std::endl;
    std::cout << "Nachname: " << std::endl;
    std::cin >> nachname;
    std::cout << "Vorname: " << std::endl;
    std::cin >> vorname;
    std::cout << "Hotel Name: " << std::endl;
    std::cin >> hotel_name;
    std::cout << "Zimmer typ: " << std::endl;
    std::cin >> zimmer_typ;

    Buchung* hotel_buchung = new HotelBuchung(
        get_Buchung_Capacity(), 
        nachname, 
        vorname, 
        hotel_name, 
        zimmer_typ
    );
    m_buchungen.push_back(hotel_buchung);
}

void ReiseBuero::generate_Flug_Buchung() {
    std::string nachname;
    std::string vorname;
    std::string fluglinie;
    std::string sitz_platz;
    std::string von;
    std::string nach;

    std::cout << "Flugbuchung erstellen: " << std::endl;
    std::cout << "Nachname: " << std::endl;
    std::cin >> nachname;
    std::cout << "Vorname: " << std::endl;
    std::cin >> vorname;
    std::cout << "Fluglinie: " << std::endl;
    std::cin >> fluglinie;
    std::cout << "Sitzplatz: " << std::endl;
    std::cin >> sitz_platz;
    std::cout << "Von: " << std::endl;
    std::cin >> von;
    std::cout << "Nach: " << std::endl;
    std::cin >> nach;

    Buchung* flug_buchung = new FlugBuchung(
        get_Buchung_Capacity() + 1,
        nachname,
        vorname,
        fluglinie,
        sitz_platz,
        von,
        nach
    );
    m_buchungen.push_back(flug_buchung);
}

int ReiseBuero::get_Buchung_Capacity() {
    return m_buchungen.size();
}