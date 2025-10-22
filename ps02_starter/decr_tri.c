/* Implement a decreasing triangle of asterisks. An example of the triangle consisting of n=5 rows is shown below. 

* * * * *
* * * *
* * *
* *
*

*/

#include<stdio.h>

int main() {
    int n;
    printf("Enter n (number of rows): ");

    /* TODO: read the value for n and print the first n rows of the above pattern */

    scanf("%d", &n);
    // created temporary variable
    int temp = n;

    // loops through using temp an uncahing variable
    for(int x = 0; x < temp; x++ ){
        // loops while dreremenitng c & n
        for(int c = n--; c > 0; c-- ){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}