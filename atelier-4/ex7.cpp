#include<iostream>
#include<list>
using namespace std;
class Repas {                //déclarer une classe mére 
private:
	string nom;
	string heure;
	string description;
	list<Elements> *lisb ;
	public :
Repas(){
// get in instance in the repas instance because its a composition relation
lisb = new list<Elements>();
}
void setNom_Heure_Decription(string nom,string heure,string description){
this->nom = nom ;
this->heure = heure ;
this->description= description;
}
string getNom(){
return this->nom ;
}
string getHeure(){
return this->heure ;
}
string getDescription(){
return this->description;
}
void setlistElements(list<Elements> *lisb ){
this->lisb = lisb ;
}
list<Elements>* getlistElements(){
return this->lisb ;
}
~Repas(){
// destroy the lisb in the same time as A boject "composition"
delete this->lisb ;
cout << "call dist of repas" << endl ;
}

};
class Elements {
private:
string nom;
string type;
// one repas accroding to the cardinality
Repas  a ;
public :
void setNom_Type(string nom,string type){
this->nom = nom;
this->type = type;
}
string getNom(){
return this->nom ;
}
string getType(){
return this->type ;
}
void setRepas(Repas a){
this->a = a ;
}
Repas getRepas(){
return this->a ;
}
};

int main() {                 
list<Elements> listb ;
Elements b1;
b1.setNom_Type("ananas","fruits");
listb.push_back(b1);
Elements b2;
b2.setNom_Type("fraise","fruits");
listb.push_back(b2);
Elements b3;
b3.setNom_Type("pomme","fruits");
listb.push_back(b3);
Repas a ;
a.setNom_Heure_Decription("petit-déj","10:30","aub");
a.setlistElements(listb);
cout << " le nom de repas est : "<< a.getNom()<< endl ;
cout << " l'heure de repas est : "<< a.getHeure()<< endl ;
cout << " le description  de repas est : "<< a.getDescription()<< endl ;
// show all the elements object from the list
list<Elements>::iterator it;
list<Elements> res = a.getlistElements() ;
for(it =res.begin(); it != res.end(); it++){
cout << it->getNom() << it-> getType() << endl;
}

	return 0;
}