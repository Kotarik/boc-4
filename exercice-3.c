/*

Ecrire un programme qui lit la taille N d'un tableau T du type entier, remplit le tableau par des valeurs entrées au clavier et affiche le tableau.

Créer ensuite un tableau T1 contenant les entiers pairs de T et un tableau T2 contenant les entiers impaires de T, et afficher les deux tableaux T1 et T2.

*/


#include<stdio.h>
main()
{
	int n, i, T[50], T1[50], T2[50];
	
	printf("Entrer la taille du tableau : ");
	scanf("%d",&n);
	
    for(i=0; i<n; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&T[i]);
	}  
	
	/* VOTRE CODE ICI */
	
	printf("\nAffichage du tableau saisi (T) : \n");
	
  /* VOTRE CODE ICI */
	
	printf("\n\nAffichage du tableau des nombres pairs (T1) : \n");
	
  /* VOTRE CODE ICI */
  
	printf("\nAffichage du tableau des nombres impairs (T2) : \n");
	
  /* VOTRE CODE ICI */
  
}
