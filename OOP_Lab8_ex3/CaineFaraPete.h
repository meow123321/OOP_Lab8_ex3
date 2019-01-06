#pragma once
#include"Caine.h"

class CaineFaraPete : public Caine {
public:
	string rasa;

	CaineFaraPete(string rasa, string nume, string culoare, int inaltime, int greutate, int varsta);
	void Afisare();
};