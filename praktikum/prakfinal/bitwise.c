#include <stdio.h>
#include <string.h>

int counter = 0;

void checkpal (char x[]) {
    int lg = strlen(x);
    for (int i = 0; i < lg; i++) {
        int j = i - 1, k = i;
        while (k < lg - 1 && x[k] == x[k+1]) k++;
        counter += (k - j) * (k - j + 1) / 2;
        i = k++;
        while (j >= 0 && k < lg && x[k++] == x[j--]) counter++;
    }
}

int main () {
    char input [100001];
    scanf("%s", input);
    checkpal(input);
    printf("%d\n", counter);
    return 0;
}