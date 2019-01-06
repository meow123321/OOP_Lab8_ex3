#include"CaineCuPete.h"

CaineCuPete::CaineCuPete(int pete, string nume, string culoare, int inaltime, int greutate, int varsta) :
	Caine(nume, culoare, inaltime, greutate, varsta) {
	this->NrPete = pete;
}

void CaineCuPete::Afisare() {
	
	cout << "Numele cainelui este: " << this->name << endl;
	cout << "Inaltimea cainelui: " << this->inaltime << " cm" << endl;
	cout << "Greutatea cainelui: " << this->greutate << " Kg" << endl;
	cout << "Varsta cainelui: " << this->varsta << " ani" << endl;
	cout << "Culoarea cainelui: " << this->culoare << endl;
	cout << "Numarul de pete: " << this->NrPete << endl;

}