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
// Historique du fichier: 08/03/2021 Gardes Lucas : ajout du pr�nom d'un joueur et de la moyenne d'essais par partie
//                        14/03/2021 Gardes Lucas : ajout du destructeur
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
    cout << "Veuillez entrer votre prenom" << endl;
    string un_prenom;
    cin >> un_prenom;


    // Cr�ation du joueur
    CJoueur joueur (un_nom, un_prenom);

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
    cout << "Affichage des resultats du joueur "<< joueur.Nom() << " " << joueur.Prenom() << endl;
    cout << "----------------------------------------------"<< endl;

    // R�cup�ration des r�sultats du joueur
    int nbsucces, nbechecs, nbessais;
    float moyenne;
    joueur.Resultats(nbsucces, nbechecs, nbessais);  // les param�tres sont pass�s par r�f�rence
    moyenne = joueur.MoyenneEssais();
    // Affichage des r�sultats
    cout << "Nombre de parties gagnees : " << nbsucces << endl;
    cout << "Nombre de parties perdues : " << nbechecs << endl;
    cout << "Nombre de tentatives totales : " << nbessais << endl;
    cout << "moyenne d'essais par partie :  " << moyenne << endl;

    cout << "----------------------------------------------"<< endl;


    return 0;
}

