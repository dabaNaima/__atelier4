#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;

void afficherDate(const string& s) //fonction affiche selon note besion faire
{
    if ( s.length() != 12 ) // on fait le condition que la longeur de string ne dépasse pas 12 
        cerr << "errur" << endl; //on affiche le message d'errur
    else
    {
        cout<<" "<< s.substr(4,4)<<" "; //après la position 4 on affiche 4 elements de string 
        cout <<"à"<< s.substr(8,2) << "h" << s.substr(10,2) << endl;
    }
}
int main(int argc, char** argv)
{   map<int, string> map1; // déclaration d'une map le clé de type entier et l'element de type string
map1.insert(pair<int, string>(01, "1er")); //insértion dans map
map1.insert(pair<int, string>(02, "2eme"));
map1.insert(pair<int, string>(03, "3eme"));
map1.insert(pair<int, string>(04, "4eme"));
map1.insert(pair<int, string>(05, "5eme"));
map1.insert(pair<int, string>(06, "6eme"));
map1.insert(pair<int, string>(07, "7eme"));
map1.insert(pair<int, string>(8, "8eme"));
map1.insert(pair<int, string>(9, "9eme"));
map1.insert(pair<int, string>(10,"10eme"));
 map<int, string> map2;
map2.insert(pair<int, string>(01, "janvier"));
map2.insert(pair<int, string>(02, "février"));
map2.insert(pair<int, string>(03, "mars"));
map2.insert(pair<int, string>(04, "avril"));
map2.insert(pair<int, string>(05, "mai"));
map2.insert(pair<int, string>(06, "juin"));
map2.insert(pair<int, string>(07, "juillet"));
map2.insert(pair<int, string>(8, "aout"));
map2.insert(pair<int, string>(9, "septembre"));
map2.insert(pair<int, string>(10,"octobre"));
map2.insert(pair<int, string>(11, "novembre"));
map2.insert(pair<int, string>(12,"décembre"));
    string date("010920091123"); // déclaration de string date 
    cout<<"010920091123 représente la date du"<<endl;
     cout << map1.lower_bound(01)->second<<" "<< map2.lower_bound(9)->second; 
    afficherDate(date); 
}