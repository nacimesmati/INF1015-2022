/*
* Programme qui affiche un message selon la grille Tic-Tac-Toe de l'utilisateur
* \file   td1_exo6.cpp
* \author Nacime Smati et
* \date   14 septembre 2022
*/

#include <iostream>
#include <fstream> 
using namespace std;

bool verifierGagnant(char grille[], char signe) {
    bool TicTacToe = false;

    if (grille[2] == signe && grille[4] == signe && grille[6] == signe) {
        TicTacToe = true;
    }
    if (grille[6] == signe && grille[7] == signe && grille[8] == signe) {
        TicTacToe = true;
    }
    if (grille[3] == signe && grille[4] == signe && grille[5] == signe) {
        TicTacToe = true;
    }
    if (grille[0] == signe && grille[4] == signe && grille[8] == signe) {
        TicTacToe = true;
    }
    if (grille[0] == signe && grille[3] == signe && grille[6] == signe) {
        TicTacToe = true;
    }
    if (grille[1] == signe && grille[4] == signe && grille[7] == signe) {
        TicTacToe = true;
    }
    if (grille[2] == signe && grille[5] == signe && grille[8] == signe) {
        TicTacToe = true;
    }
    if (grille[0] == signe && grille[1] == signe && grille[2] == signe) {
        TicTacToe = true;
    }

    return TicTacToe;
}

int main() {

    string Fichier = "";
    cout << "Fichier:" << endl;
    cin >> Fichier;

    ifstream lireFichier;
    lireFichier.open(Fichier);

    char grille[9] = {};

    if (lireFichier.is_open())
    {

        while (!lireFichier.eof()) {
            for (int i = 0; i < 9; i++) {
                lireFichier >> grille[i];
            }
        }
    }
    else cout << "Ne peut pas ouvrir le fichier" << endl;
    
    lireFichier.close();


    bool Joueur1 = verifierGagnant(grille, 'x');
    bool Joueur2 = verifierGagnant(grille, 'o');

    if (Joueur1) {
        if (!Joueur2) {
            cout << "Le joueur 1 gagne." << endl;
        }
     
    }
    else if (Joueur2) {
            cout << "Le joueur 2 gagne." << endl;
    }
    else {
       
            cout << "Egalite" << endl;
    }
    

    return 0;
}