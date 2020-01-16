#include <stdio.h>

int main(int /*@unused@*/argc, char /*@unused@*/*argv[]) {
    int i = 0;
    while (i < 25) {
        printf("%d\n", i);
        i++;
    }
    printf("\n");
    return 0;
}
