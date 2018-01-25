/*
Créer un programme qui reproduit cette sortie :

Donner le nombre des articles :
4
Donner le nom:
Article 1
Donner le prix
100
Donner le nom:
Article 2
Donner le prix
300
Donner le nom:
Article 3
Donner le prix
120
Donner le nom:
Article 4
Donner le prix
200
La liste des articles :
   Article 1 : 100.000000
   Article 2 : 300.000000
   Article 3 : 120.000000
   Article 4 : 200.000000
Donnez le nom de fichier :
article.out
La liste des articles stockés dans le fichier : article.out
  Article 1 : 100.000000
  Article 2 : 300.000000
  Article 3 : 120.000000
  Article 4 : 200.000000

*/



#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
	char nom [25];
	float prix;
} Article;


void add(Article * a, int n){
	int i;
	for(i = 0; i < n; i++){
		getchar();
		puts("Donner le nom: ");
		gets((a + i)->nom);
		puts("Donner le prix");
		scanf("%f", & (a + i)->prix);
	}
} 


void affiche(Article * a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("\t%s : %f\n", (a + i)->nom, (a + i)->prix);
	}
}


void save (Article * a, int n, char * fichier){
	FILE * out;
	out = fopen(fichier, "wb");
	fwrite(a, sizeof(Article), n, out);
	fclose(out);
}


void read (char * fichier){
	FILE * out;
	Article *aa = (Article *) malloc(sizeof(Article));
	out = fopen(fichier, "rb");
	while (fread(aa, sizeof(Article), 1, out) == 1){
		printf("\t%s : %f\n", aa->nom, aa->prix);
	}
	free(aa);
	fclose(out);
}

main(){
	int n;
	char * fichier = (char  * )calloc(sizeof(char), 25);
	Article * a = (Article *)malloc(n * sizeof(Article));
	puts("Donner le nombre des articles : ");
	scanf("%d", &n);
	
  /* VOTRE CODE ICI */
  
  printf("La liste des articles stockés dans le fichier : %s\n", fichier);
	
  /* VOTRE CODE ICI */
  
  free(a);	
}






