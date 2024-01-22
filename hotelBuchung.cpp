#include "hotelBuchung.hpp"

HotelBuchung::HotelBuchung() {}

HotelBuchung::HotelBuchung(int buchung_nummer, std::string nachname, std::string vorname, std::string hotel_name, char zimmer_typ){
    m_buchungs_Nummer = buchung_nummer;
    m_nachname = nachname;
    m_vorname = vorname;
    m_hotel_Name = hotel_name;
    m_zimmer_Typ = zimmer_typ;
}

HotelBuchung::HotelBuchung(const HotelBuchung& hotelbuchung) {
    m_abreise = hotelbuchung.m_abreise;
    m_ankunft = hotelbuchung.m_ankunft;
    m_buchungs_Nummer = hotelbuchung.m_buchungs_Nummer;
    m_hotel_Name = hotelbuchung.m_hotel_Name;
    m_nachname = hotelbuchung.m_nachname;
    m_vorname = hotelbuchung.m_vorname;
    m_zimmer_Typ = hotelbuchung.m_zimmer_Typ;
}

std::string HotelBuchung::get_Buchung_Type() {
    return "Hotel Buchung";
}

std::string HotelBuchung::get_Buchung_Nummer() {
    return this->m_buchungs_Nummer;
}

HotelBuchung::~HotelBuchung() {}

void HotelBuchung::zeige_Details() {

    std::cout << "\nHotel Buchungs Nummer: \t"      << m_buchungs_Nummer << std::endl;
    std::cout << "Nachname: \t"                     << m_nachname << std::endl;
    std::cout << "Vorname: \t"                      << m_vorname << std::endl;
    std::cout << "Hotel name: \t"                   << m_hotel_Name << std::endl;
    std::cout << "Ankunft: \t";
    m_ankunft->print();
    std::cout << std::endl;
    std::cout << "Abreise: \t";
    m_abreise->print();
    std::cout << std::endl;
    std::cout << "Zimmer Typ: \t"                   << m_zimmer_Typ << std::endl;

}

void HotelBuchung::generate_Buchung(std::string buchung_ID) {
    std::string nachname;
    std::string vorname;
    std::string hotel_name;
    std::string zimmer_typ;
    
    std::string ankunft;
    std::string abfahrt;

    std::cout << "Hotelbuchung erstellen: " << std::endl;
    std::cout << "Nachname: " << std::endl;
    std::cin >> nachname;
    std::cout << "Vorname: " << std::endl;
    std::cin >> vorname;
    std::cout << "Hotel Name: " << std::endl;
    std::cin >> hotel_name;
    std::cout << "Zimmer typ: " << std::endl;
    std::cin >> zimmer_typ;
    std::cout << "Ankunft (DD-MM-YYYY)" << std::endl;
    std::cin >> ankunft;
    std::cout << "Abfahrt (DD-MM-YYYY)" << std::endl;
    std::cin >> abfahrt;

    m_abreise = parse_Datum(abfahrt);
    m_ankunft = parse_Datum(ankunft);

    m_buchungs_Nummer = buchung_ID;
    m_nachname = nachname;
    m_vorname = vorname;
    m_hotel_Name = hotel_name;
    m_zimmer_Typ = zimmer_typ[0];
}

Datum* HotelBuchung::parse_Datum(std::string datum) {
    int year, month, day;
    std::istringstream dateStream(datum);
    std::getline(dateStream, datum, '-');
    day = std::stoi(datum);
    std::getline(dateStream, datum, '-');
    month = std::stoi(datum);
    std::getline(dateStream, datum);
    year = std::stoi(datum);
    return new Datum(year, month, day);
}