// STLEX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <deque>
#include <list>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;
template<class T>
list<T> convertDeuque(deque<T> Deu) {
    
    list<T> maliste;
    //reverse(Deu.begin(), Deu.end());
    for (auto it : Deu) {
        maliste.push_back(it);
    }
    maliste.sort();
    return maliste;
}
template<class con> 
bool estPalindrom(con beta) {
   if (beta.size() % 2 != 0)return false;
   // auto itb = beta.begin();
    auto ite = --beta.end();
  for (auto itb = beta.begin(); itb != beta.end()&& ite!=beta.begin(); itb++, ite--) {
        if (*itb != *ite)return false;
    }
    return true;
}

bool estPalindrom2(string s) {
    string rev;
    //enlever les espaces
    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());

    int i = s.size() - 1;
    while (i >= 0) {
        rev.push_back(s[i]);
        i--;
    }
       
    return rev==s;
}




int main()
{
    /*deque<string> deq1;
    list<string> lst1;
    int nb;
    string alpha;
    cout << "Veillez enrtez le nombre de mots a manipuler \n";
    cin >> nb;
    for (int i = 0; i < nb; i++) {
        cout << "entrer la un mot\n";
        cin >> alpha;
        deq1.push_back(alpha);
    }
    lst1 = convertDeuque(deq1);
    //affichage de la liste
    for (auto it1 : lst1)
        cout << it1 << endl<< endl;
    /***********************************************/
   /* string str;
    stack<char> mapile;
    char car;
    cout << "entrer la phrase\n";
    getchar();
    do {
        car = getchar();
        if (car != '\n')
        {
            str.push_back(car);
            mapile.push(car);
        }
    } while (car != '\n');
    cout << " la phrase entree\n";
    while (mapile.size() > 0) {
        cout << mapile.top();
        mapile.pop();
    }
    cout <<endl;
   // cout << endl<<"["<<str << "]" << estPalindrom2(str) << endl;
   if (estPalindrom2(str)) {
        cout << str << " est palindrom\n";
    }
    else {
        cout << str << " n'est pas palindrom\n";
    }*/
   /*****************qst3"**********************/
   priority_queue<string> Pqu;
   Pqu.push("aaaa");
   Pqu.push("zzzz");
   Pqu.push("cccc");
   Pqu.push("eeee");
   Pqu.push("dddd");
   Pqu.push("bbbb");
   while (!Pqu.empty()) {
       cout << '\t' << Pqu.top();
       Pqu.pop();
   }
   cout << '\n';
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
