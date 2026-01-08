#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Nom du fichier constante de type string:
string const nomFichier = "exo_3.txt";

int main()
{
    //créer et ouvrir un fichier en mode écriture
    ofstream monFlux(nomFichier.c_str());

    //verifier si l'ouverture du fichier a reussi :

    if (monFlux)
    {
        cout<<"Le fichier a ete ouvert avec succes !"<<endl;
        //les instructions seraient situées ici pour ecrire dans le fichier
    
    }
    else
    {
        cout<<"Erreur lors de l'ouverture du fichier."<<endl;
    }

    return 0;

}