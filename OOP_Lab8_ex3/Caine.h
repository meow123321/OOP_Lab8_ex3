#pragma once
#include<iostream>
#include<string>

using namespace std;

class Caine {
public:
	string name;
	string culoare;
	int inaltime;
	int greutate;
	int varsta;

	Caine(string nume, string culoare, int inaltime, int greutate, int varsta);
	virtual void Afisare();

};