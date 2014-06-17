#include <iostream>
#include <cmath>  //Ne pas oublier !
using namespace std;

int main()
{
   int choix(0), operation(0);
   double resultat, a(0), b(0); //Déclaration des variables utiles
   string calc, z("Addition"), y("Soustraction"), x("Multiplication"), w("Division");

   cout << "Bienvenue dans le programme de calcul !" << endl;

   cout << "Quel type d\'operation voulez vous effectuer ?" << endl;
   cout << "1 - " << z << endl << "2 - " << y << endl << "3 - " << x << endl << "4 - " << w << endl;

        do
        {
            cin >> choix;
            if (choix < 1 || choix >= 5)
            {
                cout << "Veuillez saisir une valeur entre 1 et 4" << endl;
            }
        }while (choix <= 1 || choix >= 5);

        switch (choix)
        {
        case 1:
            cout << "Une " << z << " tres bien !" << endl;
            calc = z;
            operation = operation + 1;
            break;
        case 2:
            cout << "Une " << y << " tres bien" << endl;
            calc = y;
            operation = operation + 2;
            break;
        case 3:
            cout << "Une " << x << " tres bien" << endl;
            calc = x;
            operation = operation + 3;
            break;
        case 4:
            cout << "Une " << w << " tres bien" << endl;
            calc = w;
            operation = operation + 4;
            break;
        default:
            cout << "Saisissez les valeurs a & b";
            break;
        }

   cout << "Vouz avez choisi une " << calc << endl;
   cout << "Donnez une valeur pour a : "; //On demande le premier nombre
   cin >> a;

   cout << "Donnez une valeur pour b : "; //On demande le deuxième nombre
   cin >> b;

switch (operation)
    {
    case 1:
        resultat = a + b; //On effectue l'opération
        cout << "Le resultat de l\'operation " << z << "est " << resultat << endl;
        break;
    case 2:
        resultat = a - b; //On effectue l'opération
        cout << "Le resultat de l\'operation " << y << "est " << resultat << endl;
        break;
    case 3:
        resultat = a * b; //On effectue l'opération
        cout << "Le resultat de l\'operation " << x << "est " << resultat << endl;
        break;
    case 4:
        resultat = a / b; //On effectue l'opération
        cout << "Le resultat de l\'operation " << w << " est " << resultat << endl;
        break;
    default:
        cout << "Saisissez les valeurs a & b";
        break;
    }

   return 0;
}
