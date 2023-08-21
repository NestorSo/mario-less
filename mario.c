#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int Altura = 0;

    do
    {
        Altura = round(get_int("Digite la altura de la piramide "));
    }
    while (Altura < 1 || Altura > 8);

    for (int i = 1; i <= Altura; i++)
    {
        for (int j = 1; j <= Altura - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {

            printf("#");
        }

        printf("\n");
    }
    return 0;
}
