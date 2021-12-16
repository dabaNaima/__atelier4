#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
list<string> Personne; //déclaration de la liste personne
Personne.push_back("hmdawi ,ahmed, 54ans "); //inserer dans la liste personne
Personne.push_back("adawi,basma , 12ans" );
Personne.push_back("did ,jamal, 18ans");
Personne.push_back("boudi,doha , 21ans" );
cout<<"voilà notre liste des personnes:";
std::list<string>::iterator it; //décaration d'un iterateur
for (it = Personne.begin(); it != Personne.end(); ++it){ // afficher la liste par parcourir l'eterateur 
std::cout << "\n" <<*it; 
}
Personne.sort(); //fonction tri la liste selon l'alphabie
cout<<"\nvoilà la liste  des personnnes trié:\n";
for (it = Personne.begin(); it != Personne.end(); ++it){ //affichi la liste personne après triage 
std::cout  <<*it<< "\n";
}
return 0;
}