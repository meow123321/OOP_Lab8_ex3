#include"CaineCuPete.h"

CaineCuPete::CaineCuPete(int pete, string nume, string culoare, int inaltime, int greutate, int varsta) :
	Caine(nume, culoare, inaltime, greutate, varsta) {
	this->NrPete = pete;
}

void CaineCuPete::Afisare() {
	cout << "\nAcest caine are pete!" << endl;
	Caine::Afisare();
	cout << "Numarul de pete: " << this->NrPete << endl;

}