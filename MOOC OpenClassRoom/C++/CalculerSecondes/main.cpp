#include <iostream>

using namespace std;

// Prototype avec les valeurs par d�faut
int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);

// Main
int main()
{
    cout << nombreDeSecondes(1) << endl;

    return 0;
}

// D�finition de la fonction, SANS les valeurs par d�faut
int nombreDeSecondes(int heures, int minutes, int secondes)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

    return total;
}
