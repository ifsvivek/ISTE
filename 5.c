#include <stdio.h>

void printFullPyramidNumbers(int rows) {
    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }
}

void printFullPyramidAlphabets(int rows) {
    for (int i = 1; i <= rows; i++) {
        char ch = 'a';
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c ", ch++);
        }

        printf("\n");
    }
}

void printFullPyramidStars(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }

        printf("\n");
    }
}

int main() {
    int n, ch;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("1. Numbers\n2. Alphabets\n3. Stars\n");
    scanf("%d", &ch);

    switch (ch) {
        case 1: printFullPyramidNumbers(n); break;
        case 2: printFullPyramidAlphabets(n); break;
        case 3: printFullPyramidStars(n); break;
        default: printf("Invalid Input\n");
    }

    return 0;
}