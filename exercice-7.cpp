/*

Écrire une fonction nommée incrementer() permettant d’incrémenter la valeur d’une variable passée en paramètre 
et une fonction nommée permuter() permettant d’échanger les contenus de 2 variables de type int fournies en argument :

- en transmettant l’adresse des variables concernées (seule méthode utilisable en C)
- en utilisant la transmission par référence

Dans les deux cas, écrire un programme  (main) qui teste les deux fonctions.

Exemple d’exécution :

Donner la valeur de A : 6
Donner la valeur de B : 29
- Appel par Adresse
la valeur de A apres incrementation : 7
la valeur de A apres permutation : 29
la valeur de B apres permutation : 7
- Appel par Reference
la valeur de A est: 29
la valeur de B est: 7
la valeur de A apres incrementation : 30
la valeur de A apres permutation : 7
la valeur de B apres permutation : 30

*/

// EXEMPLE DE MANIPULATION DE DONNEES

#include<iostream>
using namespace std;
int main()
{ 
	int i;
	int *p_i; //pointeur
 
	cout<<"Donner un entier : ";
	cin>>i;
	
	int &ref_i=i; //Reference
	
	p_i=&i;
	
	cout<<"Le contenu des variables:"<<endl;
	cout<<"- variable i : "<<i<<endl;
	cout<<"- variable ref_i : "<<ref_i<<endl;
	cout<<"- variable p_i : "<<p_i<<endl;
		
	cout<<"Leur adresse: "<<endl;
	cout<<"- adresse de i : "<<&i<<endl;
	cout<<"- adresse de ref_i : "<<&ref_i<<endl;
	cout<<"- adresse de p_i : "<<&p_i<<endl;	
				 	
	cout<<"La valeur pointee : "<<*p_i<<endl;
 
	return 0;
}
