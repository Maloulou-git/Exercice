#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Nom du fichier constante de type string:
string const nomFichier = "exo_4a10.txt";

int main()
{
    //ouvrir le fichier existant en lecture:
    ifstream monFlux (nomFichier.c_str());
    //verifier si l'ouverture du fichier a reussi :

    if (monFlux)
    {
       cout <<"Le fichier a ete ouvert en lecture avec succes !"<<endl;
    }
    else
    {
        cout<<"Erreur lors de l'ouverture du fichier."<<endl;
    }

    return 0;

}