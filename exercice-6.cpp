/*

Créer une classe Point permettant de manipuler un point d’un plan caractérisé par deux coordonnées x et y.

Définir les fonctions membres suivantes:

Une fonction membre saisir() : permet de saisir les coordonnées cartésiennes du point.
Une fonction membre deplacer (float, float) effectuant une translation définie par ses deux arguments.
Une fonction membre afficher() permet d’afficher les coordonnées cartésiennes du point.
Les coordonnées du point seront des membres privés.
Écrire un programme de test (main) déclarant un point, l’affichant, le déplaçant et l’affichant à nouveau.

Exemple d’exécution :
Entrer l'abscisse x : 4
Entrer l'ordonnÚe y : 6.3
Les coordonnes: P(4,6.3)
Les coordonnes du point apres deplacement :
Les coordonnes: P(7.5,8.3)

*/


#include<iostream>
using namespace std;
 
class point{
    float x;
    float y;
    
	public:
        void saisir(){
        	cout << "Entrer l'abscisse x : ";
            cin >> x;
            cout << "Entrer l'ordonnée  y : ";
            cin >> y;
        }
        
      	/* VOTRE CODE ICI */
};
 
int main(){ 
	point p;
	p.saisir();
	p.afficher();
	
	p.deplacer(3.5, 2);
	cout<<"Les coordonnes du point apres deplacement :"<<endl;
	p.afficher();
}
