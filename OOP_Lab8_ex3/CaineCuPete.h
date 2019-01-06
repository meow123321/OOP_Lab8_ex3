#pragma once
#include"Caine.h"

class CaineCuPete : public Caine {
public:
	int NrPete;

	CaineCuPete(int pete, string nume, string culoare, int inaltime, int greutate, int varsta);
	void Afisare();
};