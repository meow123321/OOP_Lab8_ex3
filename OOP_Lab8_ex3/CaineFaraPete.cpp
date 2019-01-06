#include"CaineFaraPete.h"

CaineFaraPete::CaineFaraPete(string rasa, string nume, string culoare, int inaltime, int greutate, int varsta) :
	Caine(nume, culoare, inaltime, greutate, varsta) {
	this->rasa = rasa;
}

void CaineFaraPete::Afisare() {
	cout << "\nAcest caine nu are pete!" << endl;
	Caine::Afisare();
	cout << "Rasa cainelui este:" << this->rasa << endl;


}
