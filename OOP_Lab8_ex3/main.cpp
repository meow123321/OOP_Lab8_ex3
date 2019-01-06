#include"CaineCuPete.h"
#include"CaineFaraPete.h"
#include<vector>



int main() {

	Caine ** Cainii;

	Cainii = new Caine*[6];
	Cainii[0] = new CaineCuPete(30, " Rex", "alb", 120, 30, 10);
	Cainii[1] = new CaineCuPete(34, " Daisy", "negru", 97, 20, 7);
	Cainii[2] = new CaineCuPete(14, " Dexter", "rosu", 68, 25, 5);
	Cainii[3] = new CaineFaraPete(" St. Bernard", "Beethoven", "alb", 87, 80, 15);
	Cainii[4] = new CaineFaraPete(" Corgi", "Mister Cuddles", "rosu", 50, 9, 7);
	Cainii[5] = new CaineFaraPete(" Husky", "Shiba", "gri", 55, 20, 12);


	for (int i = 0; i < 6; i++) {
		Cainii[i]->Afisare();
		cout << endl;
	}

	delete[]Cainii;


	system("Pause");
	return 0;
}