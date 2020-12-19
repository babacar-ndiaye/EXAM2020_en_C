#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nombre, som = 0, tp;
    printf("entrez un nombre:");
    scanf("%d", &nombre);
    tp = nombre;
    do
    {
        som += (nombre % 10)*(nombre % 10)*(nombre % 10) ;
        nombre /= 10;
    } while (nombre != 0);
    
    if (tp == som)
    {
        printf("%d est un nombre Armstrong", tp);
    }
    else
    {
        printf("%d n'est pas un nombre Armstrong", tp);
    }

    return 0;
}