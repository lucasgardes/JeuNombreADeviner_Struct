/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 05/02/2021
// R�le du fichier: Contient le code jeu
// Nom des composants utilises: CPartie
//                              CJoueur
//                              iostream
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;

#include "../include/Partie.h"

int main()
{

    //Cr�ation d'un joueur
    cout << "Vous allez jouer pour deviner un nombre secret" << endl;
    cout << "----------------------------------------------"<< endl;
    cout << "Veuillez entrer votre nom" << endl;
    string un_nom;
    cin >> un_nom;

    // Cr�ation du joueur
    CJoueur joueur (un_nom);

    cout << "----------------------------------------------"<< endl;
    cout << "Combien de parties voulez-vous jouer ?" << endl;
    int nbParties;
    cin >> nbParties;


    for (int i = 0; i <nbParties; i++)
    {
        cout << "----------------------------------------------"<< endl;
        cout <<"Partie Numero : " << i+1 << endl;
        cout << "----------------------------------------------"<< endl;

        CPartie partie (0,10,4); // nombre � deviner entre 0 et 10, nombre de tentatives maximum 4

        partie.Jouer(joueur); // ex�cution d'une partie pour le joueur
    }


    cout << "----------------------------------------------"<< endl;
    cout << "Affichage des resultats du joueur "<< joueur.Nom() << endl;
    cout << "----------------------------------------------"<< endl;

    // R�cup�ration des r�sultats du joueur
    int nbsucces, nbechecs, nbessais;
    joueur.Resultats(nbsucces, nbechecs, nbessais);  // les param�tres sont pass�s par r�f�rence

    // Affichage des r�sultats
    cout << "Nombre de parties gagnees : " << nbsucces << endl;
    cout << "Nombre de parties perdues : " << nbechecs << endl;
    cout << "Nombre de tentatives totales : " << nbessais << endl;

    cout << "----------------------------------------------"<< endl;


    return 0;
}

