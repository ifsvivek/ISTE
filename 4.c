#include <stdio.h>

void num(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d\t", j);
        printf("\n");
    }
}

void alp(int n) {
    n += 65;
    for (int i = 65; i < n; i++) {
        for (int j = 65; j <= i; j++)
            printf("%c\t", (char)j);
        printf("\n");
    }
}

void star(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("*\t");
        printf("\n");
    }
}

void main() {
    int n, ch;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("1. Numbers\n2. Alphabets\n3. Stars\n");
    scanf("%d", &ch);

    switch (ch) {
        case 1: num(n);
                break;
        case 2: alp(n);
                break;
        case 3: star(n);
                break;
        default: printf("Invalid Input\n");
    }
}