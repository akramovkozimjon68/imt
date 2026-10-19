#include <stdio.h>
#include <string.h>

int main()
{
    char soz[100];

    if (scanf("%s", soz) != 1)
    {
        return 1;
    }

    size_t uzunlik = strlen(soz);
    printf("Uzunligi: %d\n", uzunlik);

    return 0;
}