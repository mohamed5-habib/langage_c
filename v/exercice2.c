#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
int matricule;
char nom [20];
char prenom [20];
char adresse [50];
int tel;
}etudiant;

 void saisie(etudiant T[10],int n)
{
int i;

for(i=0;i<n;i++)
{
printf("saisie la matricule d'etudiant ");
scanf("%d",&T[i].matricule);
printf("saisie le nom ");
scanf("%s",&T[i].nom);
printf("saisie le prenom ");
scanf("%s",&T[i].prenom);
printf("saisie l'adresse ");
scanf("%s",&T[i].adresse);
printf("saisie le numero de tel ");
scanf("%d",&T[i].tel);
}
}
void affichage(etudiant T[10],int n,char ch[20])
{
    int i,j,res;
for(i=0;i<n;i++)
{
printf("%d %s %s %s %d \n",T[i].matricule,T[i].nom,T[i].prenom,T[i].adresse,T[i].tel);
}

for(j=0;j<n;j++)
{

    if(strcmp(T[j].nom,ch)==0)
    {
     printf("%d %s %s %s %d \n",T[j].matricule,T[j].nom,T[j].prenom,T[j].adresse,T[j].tel);
     break;
    }
}
}
void main()
{
    etudiant T[10];
    int n;
    char ch[20];
    printf("donner le nombre des etudiants ");
    scanf("%d",&n);
    printf("donner le nom d'etudiant a cherchee ");
    scanf("%s",&ch);
    saisie(T,n);
    affichage(T,n,ch);
}

