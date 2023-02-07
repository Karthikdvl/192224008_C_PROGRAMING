#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *names = fopen("names.txt", "r");
    FILE *greet = fopen("greet.txt", "w");

    
    if (!names || !greet) {
        fprintf(stderr, "File opening failed!\n");
        return EXIT_FAILURE;
    }

    
    char name[20];

    while (fscanf(names, "%s\n", name) > 0) {
        fprintf(greet, "Hello, %s!\n", name);
    }

    if (feof(names)) {
        printf("Greetings are done!\n");
    }

    return EXIT_SUCCESS;
}
