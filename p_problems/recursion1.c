
#include <stdio.h>

int recursion(int n){
    if(n == 0){
        return 0;
    }
    
    return n + recursion(n-1);
    printf("%d", n);
}


int main(){
    int n;
    printf("Enter a whole number: ");
    scanf("%d", &n);

    printf("%d", recursion(n));
    return 0;
}