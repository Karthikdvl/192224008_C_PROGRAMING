#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, len1, len2, flag = 1;
    
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    // Check if both strings have the same length
    if(len1 != len2) {
        flag = 0;
    }
    else {
        // Count the frequency of each character in both strings
        for(i = 0; i < len1; i++) {
            freq1[str1[i] - 'a']++;
            freq2[str2[i] - 'a']++;
        }
        // Check if both strings have the same characters in the same quantity
        for(i = 0; i < 26; i++) {
            if(freq1[i] != freq2[i]) {
                flag = 0;
                break;
            }
        }
    }
    if(flag) {
        printf("%s and %s are anagrams\n", str1, str2);
    }
    else {
        printf("%s and %s are not anagrams\n", str1, str2);
    }
    return 0;
}

