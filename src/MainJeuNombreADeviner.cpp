/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 25/01/2021
// Rôle du fichier: Contient le code jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;

#include "../include/JeuNombreADeviner.h"

int main()
{
   TJoueur joueur1;

    InitJoueur(joueur1,"Lucas");

    TirerNombreMystere();

    cout << "Vous allez jouer pour deviner un nombre secret" << endl;
    JouerPartie(joueur1,TirerNombreMystere());

    int nbessais = 0;
    int nbechec = 0;
    int nbsucces = 0;


    ResultatsJoueur(joueur1,nbsucces,nbechec,nbessais);


    return 0;
}

