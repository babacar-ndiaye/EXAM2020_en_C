#include<stdio.h>
#include<stdlib.h>
   enum Sex{ M=1, F=2};
   enum nationalite{ Senegalaise = 0, Autre = 1};
typedef struct Etudiant
{
  char identifiant[20] ;
  char nom[20];
  char prenom[20];
   enum Sex sex ; 
   int age;
   enum nationalite nation;
  
}Etudiant;
int main(int argc, char const *argv[])
{
  Etudiant classe[10];
  for (int i = 0; i < 2; i++)
  {
       printf("donnez votre identifiant: ");
       scanf("%s",&classe[i].identifiant);
       printf("donnez votre nom: ");
       scanf("%s",&classe[i].nom);
       printf("donnez votre prenom: ");
       scanf("%s",&classe[i].prenom);
       printf("donnez votre sexe: ");
       scanf("%d",&classe[i].sex);
       printf("donnez votre age: ");
       scanf("%d",&classe[i].age);
       printf("donnez votre nationalite: ");
       scanf("%d",&classe[i].nation);
  }
  for (int i = 0; i < 2; i++)
  {
    if (classe[i].nation == Autre)
    {
         printf("%s  son nom est %s %s",classe[i].identifiant,classe[i].prenom,classe[i].nom);
    }
    
  }
  int permut = 1;

  while (permut)
  {
    permut = 0;
    for (int i = 0; i < 9; i++)
    {
      if (classe[i].age > classe[i+1].age)
      {
        permut = 1;
        Etudiant temp = classe[i];
        classe[i] = classe[i+1];
        classe[i+1] = temp;
      }
      
    }
  }
     printf("%d",classe[1].age);
  return 0;
}
