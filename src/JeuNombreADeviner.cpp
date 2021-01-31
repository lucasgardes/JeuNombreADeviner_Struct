/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 25/01/2021
// Rôle du fichier: Contient le code des fonctions du jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
//                              ctime
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;
#include "../include/JeuNombreAdeviner.h"
#include <cstdlib>
#include <ctime>

// Nom :InitJoueur
// Rôle : Crée un joueur. Initialise toutes les informations du joueur.
//        Le nombre de tentatives, de parties gagnées et de parties jouées seront à 0.
// Paramètres d'entrée : un_nom
// Paramètres de sortie : joeurAcreer
// Paramètres d'entrée/sortie :

void InitJoueur(TJoueur& joueurAcreer, string un_nom)
{
        joueurAcreer.nbPartiesJouees = 0;
        joueurAcreer.nbPartiesGagnees = 0;
        joueurAcreer.nbTentatives = 0;
        joueurAcreer.nom = un_nom;
}


// Nom :TirerNombreMystere
// Rôle : Tire aléatoirement un nombre à deviner entre 0 et 10
// Valeur de retour : nombre à deviner

int TirerNombreMystere()
{
        int nombreADeviner = 0;
        srand (time(NULL));
        nombreADeviner = rand() % 10 + 1;
        return nombreADeviner;
}


// Nom :JouerPartie
// Rôle : Fait jouer une partie au joueur passé en paramètre
//        A la fin, met à jour les informations du joueur
// Paramètres d'entrée: nombreADeviner
// Paramètres de sortie:
// Paramètres d'entrée/sortie : un_joueur

void JouerPartie(TJoueur& un_joueur, int nombreADeviner)
{
    int a = 0;
    int number; // nombre saisie par l'utilisateur

    cout << "Trouve le nombre mystere" << endl;

    cout << "entrer un nombre" << endl;

    cin >> number;

    do
    {

        a = a + 1;
        if(number > nombreADeviner)
            {
                cout << "c'est moins" << endl;
            }
        else
            {
                cout << "c'est plus" << endl;
            }
        cin >> number;

        if(number = nombreADeviner)
        {
            cout << "congratulations !" << endl;
            a = 3;
        }

    }
    while (a < 3);
}


// Nom : MajResultatsJoueur
// Rôle : met à jour les informations du joueur passé en paramètre
// Paramètres d'entrée: nbEssais, gagne
// Paramètres de sortie:
// Paramètres d'entrée/sortie : joueur,

void MajResultatsJoueur(TJoueur &joueur, int nbEssais, bool gagne)
{
   // A COMPLETER
}

// Nom : ResultatsJoueur
// Rôle : indique les résultats du joueur passé en paramètre
//        le nombre de parties gagnées, le nombre de parties perdues, le nombre d'essais total
//        La fonction N'affiche PAS les informations à l'écran
// Paramètres d'entrée: joueur
// Paramètres de sortie: nbsucces, nbechec, nbessais
// Paramètres d'entrée/sortie :

void ResultatsJoueur(TJoueur joueur, int& nbsucces, int& nbechec, int& nbessais)
{
    // A COMPLETER
}

// Nom :Nom
// Rôle : retourne le nom du joueur
// Paramètres d'entrée: le joueur dont on veut le nom
// Valeur de retour : nom du joueur

string Nom(TJoueur joueur){

    return joueur.nom;
}

