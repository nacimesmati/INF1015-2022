/*
* Programme qui trouve la limite d'une suite
* \file   td1_exo2.cpp
* \author Nacime Smati et
* \date   14 septembre 2022
*/

#include <iostream>
using namespace std;

struct Entier {
    int valeur1 = 37;
    int valeur2 = 129;
};


int main() {

    Entier Entier; 
    int valeurRusse, valeurTotal; 
    valeurTotal = 0;

    while (Entier.valeur1 > 0) {

        if (Entier.valeur1 % 2 == 1) { 
            
            valeurRusse = Entier.valeur2;
            Entier.valeur2 *= 2;
            valeurTotal += valeurRusse; 
            
        }
        else Entier.valeur2 *= 2;
        
        Entier.valeur1 /= 2;  
   
    }
    cout << valeurTotal << endl;
}
