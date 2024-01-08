#include "flugBuchung.hpp"

FlugBuchung::FlugBuchung() {}

FlugBuchung::FlugBuchung(FlugBuchung& flugbuchung) {
    m_buchungs_Nummer = flugbuchung.m_buchungs_Nummer;
    m_datum = new QDate(*flugbuchung.m_datum);
    m_fluglinie = flugbuchung.m_fluglinie;
    m_nach = flugbuchung.m_nachname;
    m_sitz_Platz = flugbuchung.m_sitz_Platz;
    m_von = flugbuchung.m_von;
    m_vorname = flugbuchung.m_vorname;
}

FlugBuchung::~FlugBuchung() {}

void FlugBuchung::zeige_Details() {}