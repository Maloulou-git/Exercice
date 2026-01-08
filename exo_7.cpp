#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Nom du fichier constante de type string:
string const nomFichier = "exo_4a10.txt";

int main7()
{
    //ouvrir le fichier existant en lecture:
    ifstream monFlux (nomFichier.c_str());
    //verifier si l'ouverture du fichier a reussi :

    if (monFlux)
    {
       string ligne;
         //lire le fichier ligne par ligne:
         getline(monFlux, ligne);
         cout << "1ere ligne" << endl;
        
    }
    else
    {
        cout<<"Erreur lors de l'ouverture du fichier."<<endl;
    }

    return 0;

}