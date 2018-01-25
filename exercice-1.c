/*
  Ecrire un programme C permettant de Comparer deux tableaux T1 et T2 de N entiers (remplis par l’utilisateur).

  Deux tableaux sont égaux si tous les éléments se trouvant dans le même indice sont égaux.
  
  */


#include<stdio.h>
main()
{
	int n, i, c, T1[30], T2[30];
	
	printf("Entrer la taille des deux tableaux: ");
	scanf("%d",&n);
	
	printf("\nRemplissage du tableau 1: \n");	
    for(i=0; i<n; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&T1[i]);
	}  
	printf("\nRemplissage du tableau 2: \n");	
	for(i=0; i<n; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&T2[i]);
	} 
	
	/* VOTRE CODE ICI */

}
