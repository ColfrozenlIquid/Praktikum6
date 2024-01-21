#include "flugBuchung.hpp"

FlugBuchung::FlugBuchung() {}

FlugBuchung::FlugBuchung(int buchung_nummer, std::string nachname, std::string vorname, std::string fluglinie, std::string sitzplatz, std::string von, std::string nach) {
    m_buchungs_Nummer = buchung_nummer;
    m_nachname = nachname;
    m_vorname = vorname;
    m_fluglinie = fluglinie;
    m_sitz_platz = sitzplatz;
    m_von = von;
    m_nach = nach;
}

FlugBuchung::FlugBuchung(const FlugBuchung& flugbuchung) {
    m_buchungs_Nummer = flugbuchung.m_buchungs_Nummer;
    // m_datum = new QDate(*flugbuchung.m_datum);
    m_fluglinie = flugbuchung.m_fluglinie;
    m_nach = flugbuchung.m_nachname;
    m_sitz_platz = flugbuchung.m_sitz_platz;
    m_von = flugbuchung.m_von;
    m_vorname = flugbuchung.m_vorname;
}

FlugBuchung::~FlugBuchung() {}

void FlugBuchung::zeige_Details() {
    std::cout << "\nFlug Buchungs Nummer: \t"   << m_buchungs_Nummer << std::endl;
    std::cout << "Fluglinie: \t"                << m_fluglinie << std::endl;
    std::cout << "Sitzplatz: \t"                << m_sitz_platz << std::endl;
    std::cout << "Von: \t"                      << m_von << std::endl;
    std::cout << "Nach: \t"                     << m_nach << std::endl;
    // std::cout << "Datum: \t"        << m_datum << std::endl;
}