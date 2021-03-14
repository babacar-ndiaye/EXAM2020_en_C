#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int taille = 0;
  int a = 0;
  do
  {
    printf("Donnez le nombre de valeurs: ");
    scanf("%d", &taille);
  } while (taille <= 0);
  double *tab = (double *)malloc(sizeof(double) * taille);
  for (int i = 0; i < taille; i++)
  {
    printf("donner une valeur: ");
    scanf("%lf", &tab[i]);
  }

  if (tab == NULL)
  {
   printf("allocation problen");
   exit(-1);
  }
  else
  {
    double min = fabs(tab[0]);
    for (int i = 1; i < taille; i++)
    {
      if (min >= fabs(tab[i]))
      {
        if (min == fabs(tab[i]))
        {
          if (tab[i] > 0)
          {
            a = i;
          }
        }
        else
        {
          min = fabs(tab[i]);
          a = i;
        }
      }
    }
  }

  printf("%lf", tab[a]);
  return 0;
}
