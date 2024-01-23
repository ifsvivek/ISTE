#include <stdio.h>
int main(){
    int a[10], i;
    int j, temp=0, num;
    printf("Enter the number to give\n");
    scanf("%d", &num);
    for (i = 0; i < num;i++){
        printf("a[%d]=\t", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < num - 1; i++){
        for (j = i + 1; j < num; j++){
            if (a[j] < a[i]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("Selection Sort in C\n");
    for (i = 0; i < num; i++){
        printf("a[%d]=\t%d\n", i, a[i]);
    }
    return 0;
}