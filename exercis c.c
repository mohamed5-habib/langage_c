#include<stdio.h>
#include<stdlib.h>
typedef struct element{
int valeur;
struct element*suivant;
}element;
typedef struct element*liste;

void affichage(liste l)
{
element *p=l;
while(p!= NULL){
    printf("%d", p->valeur);
    p=p->suivant;
    }
}
liste ajout_tete( liste l, int x){
element*nouv =malloc(sizeof(element));
nouv->valeur=x;
nouv->suivant=l;
return (nouv);
}
int longeur(liste l){
int x;
liste aux;
x=0;
element *p=l;
while (p!=NULL){
    x=x+1;
    aux=aux->suivant;


}
return x;
}
void main(){
element*l=NULL;
l=ajout_tete(l,50);
affichage(l);
printf("%d",longeur(l));
}
