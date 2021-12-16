#include <iostream>
#include <list>
#include <iterator>
using namespace std;
//function pour affichir les éléments de la liste 
void showlist(list <int> g) 
{
list <int> :: iterator it;
for(it = g.begin(); it != g.end(); ++it)
cout << '\t' << *it;
cout << '\n';
}
int main()
{
    int n ; // variable à inséré représente le nombre des élements de la liste 
    int p ;
    list <int> liste; //déclaration d'une liste 
cout<<" combien des elements de liste vous voulez insirer n ? "<<endl;
cin>>n; // affichi le nombre des éléments de la liste demandé à utilisateur 

for (int i = 0; i < n; ++i) // la boucle for pour insérer les élémentd de la liste par utilisateur 
{
    cout<<"saise  la valeur a inséré "<<endl; // ce message va affichi chaque fois avant de saisé l'utilisateur un élément 
    cin>>p; 
liste.push_back(p); //fonction de conteneur List de la STL permet de insére les élements à la liste 

}
cout << "\nvotre liste est  : ";
showlist(liste); // fonction affiche le contenue de la liste
cout << "\n votre liste trié est  : ";
liste.sort(); // fonction permet de trié la liste 

showlist(liste); //affiché la liste final après le triage 
return 0;
}