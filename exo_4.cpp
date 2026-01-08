#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Nom du fichier constante de type string:
string const nomFichier = "exo_4a10.txt";

int main4()
{
    //créer et ouvrir un fichier en mode écriture
    ofstream monFlux(nomFichier.c_str());

    //verifier si l'ouverture du fichier a reussi :

    if (monFlux)
    {
       monFlux<<"Je peux ecrire une phrase dans le fichier. "<<endl;
       monFlux<<48.9845<<endl;
       int age=19;
       monFlux<<"J'ai"<< age << " ans. Je suis majeur! "<<endl;
    
    }
    else
    {
        cout<<"Erreur lors de l'ouverture du fichier."<<endl;
    }

    return 0;

}