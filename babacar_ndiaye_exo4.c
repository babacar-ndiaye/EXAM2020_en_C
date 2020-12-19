#include <stdio.h>
#include <stdlib.h>
// calcul la trace d un matrice

int main(int argc, char const *argv[])
{
  int taille = 0;
  int result = 0;
  do
  {
    printf("quel est la taille de votre matrice: ");
    scanf("%d", &taille);
  } while (taille <= 0);
  int **tab = malloc(sizeof(int*) * taille );
     for (int j = 0; j < taille; j++)
     {
       tab[j]= malloc(sizeof(int)*taille);
     }
     for (int i = 0; i < taille; i++)
     {
       for (int j = 0; j < taille; j++)
       {
            printf("donne une valeur: ");
            scanf("%d",&tab[i][j]);
       }
       
     }
     
  for (int i = 0; i < taille; i++)
  {
    for (int j = 0; j < taille; j++)
    {
      if (i == j)
      {
        result += tab[i][j];
      }
    }
  }
     printf("%d",result);
  free(tab);
  return 0;
}
