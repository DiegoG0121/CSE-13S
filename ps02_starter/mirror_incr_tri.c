/* Implement a mirrored increasing triangle of asterisks. An example of the triangle consisting of n=5 rows is shown below. 

        *
      * *
    * * *
  * * * *
* * * * *

*/

#include<stdio.h>

int main() {
  int n;
  printf("Enter n (number of rows): ");

  /* TODO: read the value for n and print the first n rows of the above pattern */

  scanf("%d", &n);

  for(int x = 0; x < n; x++){
    for(int j = 0; j < n - x -1; j++) {
      printf("  ");
    }

    printf("*");

    for(int a = 0; a < x; a++) {
      printf(" *");
    }

    printf("\n");
  }

  
  return 0;
}