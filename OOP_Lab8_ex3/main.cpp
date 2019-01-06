#include"CaineCuPete.h"
#include"CaineFaraPete.h"
#include<vector>



int main() {

	vector<CaineCuPete> CainiiCuPete;
	vector<CaineFaraPete> CainiiFaraPete;

	CainiiCuPete.push_back(CaineCuPete(30, " Rex", "alb", 120, 30, 10));
	CainiiCuPete.push_back(CaineCuPete(34, " Daisy", "negru", 97, 20, 7));
	CainiiCuPete.push_back(CaineCuPete(14, " Dexter", "rosu", 68, 25, 5));

	CainiiFaraPete.push_back(CaineFaraPete(" St. Bernard", "Beethoven", "alb", 87, 80, 15));
	CainiiFaraPete.push_back(CaineFaraPete(" Corgi", "Mister Cuddles", "rosu", 50, 9, 7));
	CainiiFaraPete.push_back(CaineFaraPete(" Husky", "Shiba", "gri", 55, 20, 12));

	cout << "Cainii cu pete:" << endl;
	for (int i = 0; i < 3; i++) {
		CainiiCuPete[i].Afisare();
		cout << endl;
	}

	cout << "\nCainii fara pete:" << endl;
	for (int i = 0; i < 3; i++) {
		CainiiFaraPete[i].Afisare();
		cout << endl;
	}


	system("Pause");
	return 0;
}