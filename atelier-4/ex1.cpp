#include<iostream>
using namespace std;
class complexe {                //déclarer une classe mére complexe
public:
	int real;
	int imag;
public:
	complexe() {};                
	complexe(int r, int i) {        //déclarer une constrecteur pour la classe mére
		real = r;
		imag = i;
	}
	complexe operator +(complexe z2) {   //surcharge d'operateur pour l'addition

		int re = real + z2.real;
		int im = imag+ z2.imag;
		complexe s4;
		s4.imag= im;
		s4.real = re;
		return s4;
	}
	complexe operator -(complexe z2) {     //surcharge d'operateur pour la soustraction

		int re = real - z2.real;
		int im = imag - z2.imag;
		complexe s4;
		s4.imag= im;
		s4.real = re;
		return s4;
	}
	complexe operator *(complexe z2) {   //surcharge d'operateur pour le produit

		int re = real * z2.real;
		int im = imag * z2.imag;
		complexe s4;
		s4.imag = im;
		s4.real = re;
		return s4;
	}   
};
int main() {                 
int operation ; 
  int i,r;
 int r1, i1;
  cout<< "Premier nombre \n";
  cout << "saisez la partie réelle de premiere nombre complexe : ";
  cin>> r1;
  cout<< "saisez la partie imaginaire de premiere nombre complexe : ";
  cin>> i1;
 // créer le premier complexe 
 complexe z1(r1,i1);
  cout <<  r1 <<"+"<< i1<<"i"<<endl;
  cout << "Deuxième nombre\n";
 int r2,i2;
  cout << "saisez la partie réelle de duxieme nombre complexe: ";
  cin >> r2;
  cout << "saisez la partie imaginaire de duxieme nombre complexe: ";
 cin >> i2;
  //créer le nombre complexe 2  
  complexe z2(r2,i2);
 cout <<  r2<< "+"<< i2<<"i" <<endl;
	complexe z3 = z1 + z2;   //faire les operations
	complexe z4 = z1 - z2;
	complexe z5 = z1 * z2;	
cout<<" voici un menu d'opération a respecté \n (+): addition =enter 0\n (-): substration=entrer 1\n (*): multiplication=entre 2\n choisi l'une de les opération ";
	cin>>operation;
	if(operation==0){                                      
	cout <<z3.real<< "+ i" << z3.imag << endl;
	}
	else if (operation==1){
	cout << z4.real << "+ i" << z4.imag << endl;
	}
	else if (operation==2){
	cout << z5.real << "+ i" << z5.imag << endl;
	}
	return 0;
}