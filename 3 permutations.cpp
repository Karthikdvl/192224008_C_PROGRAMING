#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r) {
    if (l == r) {
        static int count = 0;
        printf("%d: %s\n", ++count, str);
    } else {
        int i;
        for (i = l; i <= r; i++) {
            int j, flag = 0;
            for (j = l; j < i; j++) {
                if (str[j] == str[i]) {
                    flag = 1;
                    break;
                }
            }
            if (!flag) {
                swap((str + l), (str + i));
                permute(str, l+1, r);
                swap((str + l), (str + i));
            }
        }
    }
}

int main() {
    char str[10];
    printf("Enter a number: ");
    scanf("%s", str);
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}

