#include <stdio.h>




int main(){
    int a[3][3] = {{5, 2, 6},
                {3, 4, 5},
                {9, 8, 2}};

    int b [3][3] = {{9, 2, 3},
                {7, 5, 1},
                {4, 6, 7}};


    for(int x = 0; x < a; x++) {
        for(int c = 0; c < a[x]; c++)
            printf("%d", a[x][c]* b[x][c]);
        printf("\n");
    }

}