#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Nom du fichier constante de type string:
string const nomFichier = "exo_11.txt";

int main()
{
    //ouvrir le fichier existant en lecture:
    ofstream monFlux (nomFichier.c_str() );
    //verifier si l'ouverture du fichier a reussi :

    if (monFlux)
    {
        monFlux << "J'ecris une phrase avant de fermer le fichier."<<endl;
        //fermer le fichier
        monFlux.close();
        cout<<"fichier"<<nomFichier<<" creer avec succes."<<endl;
    }
    else
    {
        cout<<"Erreur lors de l'ouverture du fichier."<<endl;
    }

    //lecture du fichier cree:
    ifstream monFluxLecture (nomFichier.c_str() );
    //verifier si l'ouverture du fichier a reussi :
    if (monFluxLecture)
    {
        cout<<"Contenu du fichier "<<nomFichier<<":"<<endl;
        string ligne;
        //lire le fichier ligne par ligne:
        while (getline(monFluxLecture, ligne))
        {
            cout<<ligne<<endl;
        }
        //pas besoin de fermer le fichier, le bloc le fera automatiquement 
    }
    else
    {
        cout<<"Erreur lors de l'ouverture du fichier en lecture."<<endl;
    }

    return 0;

}