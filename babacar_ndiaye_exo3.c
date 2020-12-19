#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// void temperaturePlusProche(double tempe[], int size)
// {
//   if (tempe == NULL)
//   {
//     return 0;
//   }
//   else
//   {
//     for (int i = 0; i < size - 1; i++)
//     {
//       int posmin = i;
//       for (int j = i; j < size; j++)
//       {
//         if (fabs(tempe[j]) < fabs(tempe[posmin]))
//         {
//           posmin == j;
//         }
//       }
//         swapping(&tempe[i],&tempe[posmin]);
//     }

//   }
// }

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

    printf("problem");

  else
  {
    double min = fabs(tab[0]);
    for (int i = 1; i < taille; i++)
    {
      if (min > fabs(tab[i]))
      {
        if (min == fabs(tab[i]))
        {
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
