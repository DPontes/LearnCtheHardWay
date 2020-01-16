#include <stdio.h>

char capitalize(char letter);

int main(int argc, char *argv[]) {

    if(argc != 2) {
        printf("ERROR! You must input exactly one argument.\n");
        // this is how you abort a program
        return 1;
    }

    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];
        letter = capitalize(letter);

        switch (letter) {
            case 'A':
                printf("%d: 'A'\n", i);
                break;
            case 'E':
                printf("%d: 'E'\n", i);
                break;
            case 'I':
                printf("%d: 'I'\n", i);
                break;
            case 'O':
                printf("%d: 'O'\n", i);
                break;
            case 'U':
                printf("%d: 'U'\n", i);
                break;
            case 'Y':
                // why i > 2? is this a bug?
                if(i > 2) {
                    //it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                }
                break;
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }
    return 0;
}

// Extra credit, make a math based function that capitalizes the input
// so that the extra 'case' in the switch are removed
char capitalize(char letter) {
    if (letter >= 'a' && letter <= 'z') {
        letter -= 32;
    }
    return letter;
}
