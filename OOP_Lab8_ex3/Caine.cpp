#include"Caine.h"

Caine::Caine(string nume, string culoare, int inaltime, int greutate, int varsta) {
	this->name = nume;
	this->culoare = culoare;
	this->inaltime = inaltime;
	this->greutate = greutate;
	this->varsta = varsta;
}

void Caine::Afisare() {
	cout << "Numele cainelui este: " << this->name << endl;
	cout << "Inaltimea cainelui: " << this->inaltime << " cm" << endl;
	cout << "Greutatea cainelui: " << this->greutate << " Kg" << endl;
	cout << "Varsta cainelui: " << this->varsta << " ani" << endl;
	cout << "Culoarea cainelui: " << this->culoare << endl;
}