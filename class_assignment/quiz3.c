#include <stdio.h>

int main(){
    int n;

    printf("Input a #: ");
    scanf("%d", &n);

    for(int x = 0; x < n; x++){
        for(int c = n; c-n < n; c++){
            int temp = n;
            printf("%d ", temp--);
        }
        printf("\n");
    }
    return 0;
}