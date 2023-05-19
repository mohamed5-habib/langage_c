#include <stdio.h>
#include <stdlib.h>
typedef struct
{
int matricule;
char nom [20];
char prenom [20];
char adresse [50];
int tel;
}etudiant;
void main()
{
etudiant E;
printf("saisie la matricule ");
scanf("%d",&E.matricule);
printf("saisie le nom ");
scanf("%s",&E.nom);
printf("saisie le prenom ");
scanf("%s",&E.prenom);
printf("saisie l'adresse ");
scanf("%s",&E.adresse);
printf("saisie le numero de tel ");
scanf("%d",&E.tel);
printf("%d %s %s %s %d ",E.matricule,E.nom,E.prenom,E.adresse,E.tel);
}
