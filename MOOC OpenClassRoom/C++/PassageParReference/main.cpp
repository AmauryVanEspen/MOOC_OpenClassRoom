#include <iostream>

using namespace std;

void echange(double& a, double& b)
{
    double temporaire(a); //On sauvegarde la valeur de 'a'
    a = b;                //On remplace la valeur de 'a' par celle de 'b'
    b = temporaire;       //Et on utilise la valeur sauvegardée pour mettre l'ancienne valeur de 'a' dans 'b'
}

int main()
{
    double a, b;
    cout << "Veuillez saisir une valeur pour" << endl << "a" << endl;
    cin >> a;
    cout << "b" << endl;
    cin >> b;

    cout << "a vaut " << a << " et b vaut " << b << endl;

    echange(a,b);   //On utilise la fonction

    cout << "a vaut " << a << " et b vaut " << b << endl;
    return 0;
}

