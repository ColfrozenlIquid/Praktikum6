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
    // m_abreise = new QDate(*hotelbuchung.m_abreise);
    // m_ankunft = new QDate(*hotelbuchung.m_ankunft);
    m_buchungs_Nummer = hotelbuchung.m_buchungs_Nummer;
    m_hotel_Name = hotelbuchung.m_hotel_Name;
    m_nachname = hotelbuchung.m_nachname;
    m_vorname = hotelbuchung.m_vorname;
    m_zimmer_Typ = hotelbuchung.m_zimmer_Typ;
}

HotelBuchung::~HotelBuchung() {}

void HotelBuchung::zeige_Details() {
    std::cout << "\nHotel Buchungs Nummer: \t"      << m_buchungs_Nummer << std::endl;
    std::cout << "Nachname: \t"                     << m_nachname << std::endl;
    std::cout << "Vorname: \t"                      << m_vorname << std::endl;
    std::cout << "Hotel name: \t"                   << m_hotel_Name << std::endl;
    // std::cout << "Ankunft: \t"                   << m_ankunft << std::endl;
    // std::cout << "Abreise: \t"                   << m_abreise << std::endl;
    std::cout << "Zimmer Typ: \t"                   << m_zimmer_Typ << std::endl;

}

void HotelBuchung::set_Buchung_Nummer(int buchung_nummer) {
    m_buchungs_Nummer = buchung_nummer;
}

void HotelBuchung::set_Nachname(std::string nachname) {
    m_nachname = nachname;
}

void HotelBuchung::set_Vorname(std::string vorname) {
    m_vorname = vorname;
}

void HotelBuchung::set_Hotel_Name(std::string hotel_name) {
    m_hotel_Name = hotel_name;
}

void HotelBuchung::set_Zimmer_Typ(char zimmer_typ) {
    m_zimmer_Typ = zimmer_typ;
}