
/*
Ecrire un programme C qui demande à l’utilisateur de saisir les notes d'une classe et qui calcule et affiche ensuite le pourcentage de notes supérieures à la moyenne de la classe. 
*/


#include<stdio.h>
main(){
	
	int i, n;
	float m, s = 0, p, T[30];
	
	printf("Entrer la taille du tableau : ");
	scanf("%d",&n);
	
  for(i=0; i<n; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%f",&T[i]);
   		s = s + T[i];
  }
  
  /* VOTRE CODE ICI */ 
   
	printf("Le pourcentage de notes superieurs a la moyenne %.2f est : %.2f%% ", m, p);
}
