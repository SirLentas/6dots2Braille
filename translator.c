#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "");
    wchar_t br = 0x2800;
    char line[1200];
    int value;
    char *c1;
    while (1)
    {
        printf("Give 6dots numerical:\n");
        fgets(line, 120, stdin);
        printf("Braille:\n");
        c1 = strtok(line, "-\n\0");
        while (c1)
        {
            if (strcmp(c1, "line") == 0)
            {
                printf("\n");
            }
            else if (strcmp(c1, "0") == 0)
            {
                printf("%lc", 0x2800);
            }
            else if (atoi(c1) >= 1 && atoi(c1) <= 123456)
            {
                int number = atoi(c1);
                value = 0;
                while (number)
                {
                    int digit = number % 10;
                    value += pow(2, digit - 1);
                    number /= 10;
                }
                printf("%lc", br + value);
            }
            c1 = strtok(NULL, "-\n\0");
        }
    printf("\n");
    }
}