#include <stdio.h>

int main() {
    FILE *f = fopen("matn.txt", "w");

    if (f == NULL) {
        printf("Fayl ochilmadi!");
        return 0;
    }

    fprintf(f, "Salom, C dasturlash! \n");
    printf("Matn faylga yozildi.\n");

    
    fclose(f);

    
}