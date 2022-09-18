/*
* Programme qui trouve la limite d'une suite
* \file   td1_exo2.cpp
* \author Nacime Smati et 
* \date   14 septembre 2022
*/

#include <iostream>
using namespace std;


double trouverLimite(int chiffreApresVirgule) {
	
	double uCourant = 1.0;
	double uProchain = sqrt(2 + uCourant);

	while ((uProchain - uCourant) > pow(10, -chiffreApresVirgule)) {

			uCourant = uProchain;
			double uProchain = sqrt(2 + uCourant);
	
	}
	return uProchain;
}

int main() {

	int chiffreApresVirgule = 5;

	cout << trouverLimite(chiffreApresVirgule) << endl;

}
