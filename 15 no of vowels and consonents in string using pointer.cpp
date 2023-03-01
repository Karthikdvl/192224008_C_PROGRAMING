#include <stdio.h>
#include <string.h>

void count_vowels_consonants(char *str, int *vowels, int *consonants) {
    int i;
    *vowels = 0;
    *consonants = 0;

    for (i = 0; i < strlen(str); i++) {
        if (*(str+i) == 'a' || *(str+i) == 'e' || *(str+i) == 'i' || *(str+i) == 'o' || *(str+i) == 'u' ||
            *(str+i) == 'A' || *(str+i) == 'E' || *(str+i) == 'I' || *(str+i) == 'O' || *(str+i) == 'U') {
            (*vowels)++;
        } else if ((*(str+i) >= 'a' && *(str+i) <= 'z') || (*(str+i) >= 'A' && *(str+i) <= 'Z')) {
            (*consonants)++;
        }
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    gets(str);

    count_vowels_consonants(str, &vowels, &consonants);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

