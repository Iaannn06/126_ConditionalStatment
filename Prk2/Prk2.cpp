// Prk2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float nMat, nFisika, rerata;
		string status;

		cout << "Masukan nilai matematika";
		cin >> nMat;

		cout << "Masukan nilai Fisika";
		cin >> nFisika;

		rerata = (nFisika + nMat) / 2;
		if (rerata >= 60) {
			status = "Lulus jalur rerata";
		}

		else if (nMat >= 70) {
			status = "lulus jalur matematika";
		}
		else
		{
			status = " Tidak Lulus";
		}

		cout << "Statusnya adalah" << status << endl;
		}


