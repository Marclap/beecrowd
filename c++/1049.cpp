#include <bits/stdc++.h>

using namespace std;

int main() {
	string animal;
	getline(cin, animal);
	if(animal == "vertebrado"){
		getline(cin, animal);
		if(animal == "ave"){
			getline(cin, animal);
			if(animal == "carnivoro"){
				cout<<"aguia"<<endl;
			}else if(animal == "onivoro"){
				cout<<"pomba"<<endl;
			}
		}else if (animal == "mamifero"){
			getline(cin, animal);
			if(animal == "onivoro"){
				cout<<"homem"<<endl;
			}else if(animal == "herbivoro"){
				cout<<"vaca"<<endl;
			}
		}
	}else if(animal == "invertebrado"){
		getline(cin, animal);
		if(animal == "inseto"){
			getline(cin, animal);
			if(animal == "hematofago"){
				cout<<"pulga"<<endl;
			}else if(animal == "herbivoro"){
				cout<<"lagarta"<<endl;
			}
		}else if(animal == "anelideo"){
			getline(cin, animal);
			if(animal == "hematofago"){
				cout<<"sanguessuga"<<endl;
			}else if(animal == "onivoro"){
				cout<<"minhoca"<<endl;
			}
		}
	}
}