#include "hotelBuchung.hpp"

HotelBuchung::HotelBuchung() {}

HotelBuchung::HotelBuchung(HotelBuchung& hotelbuchung) {
    m_abreise = new QDate(*hotelbuchung.m_abreise);
    m_ankunft = new QDate(*hotelbuchung.m_ankunft);
    m_buchungs_Nummer = hotelbuchung.m_buchungs_Nummer;
    m_hotel_Name = hotelbuchung.m_hotel_Name;
    m_nachname = hotelbuchung.m_nachname;
    m_vorname = hotelbuchung.m_vorname;
    m_zimmer_Typ = hotelbuchung.m_zimmer_Typ;
}

HotelBuchung::~HotelBuchung() {}

void HotelBuchung::zeige_Details() {}