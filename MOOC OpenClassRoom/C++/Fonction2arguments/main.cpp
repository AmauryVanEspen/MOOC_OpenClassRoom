#include <iostream>
using namespace std;

void dessineRectangle(int l, int h)
{
    for(int ligne(0); ligne < h; ligne++)
    {
        for(int colonne(0); colonne < l; colonne++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int largeur, hauteur;
    do
    {
    cout << "Largeur du rectangle : ";
    cin >> largeur;
    cout << "Hauteur du rectangle : ";
    cin >> hauteur;

    if ((largeur && hauteur) > 0)
    {
        dessineRectangle(largeur, hauteur);
    }else{
        cout << "veuillez saisir des valeurs positives" << endl;
    }
    }while ((largeur && hauteur) == 0);


    return 0;
}
