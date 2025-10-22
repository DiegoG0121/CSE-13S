/* Implement an inverted mirrored triangle of asterisks. An example of the triangle consisting of n=5 rows is shown below. 

* * * * *
  * * * *
    * * *
      * *
        *  

*/

#include <stdio.h>

int main() {
  int n;
  printf("Enter n (number of rows): ");

  /* TODO: read the value for n and print the first n rows of the above pattern */
  scanf("%d", &n);

  // loops based on n for # of rows
  for(int x = 0; x < n; x++){
    //prints out the number of spaces that are not meant to be asterix
    for(int a = 0; a < x; a++) {
      printf("  ");
    }
    // prints out the asterix for the mirrored latter
    for(int j = 0; j < n - x; j++) {
      printf("* ");
    }

    printf("\n");
  }


  return 0;
}