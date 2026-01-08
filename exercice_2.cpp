#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Nom du fichier constante de type string:
string const nomFichier = "exo_2.txt";

int main()
{
    //créer et ouvrir un fichier en mode écriture
    ofstream monFlux(nomFichier.c_str());

    return 0;

}