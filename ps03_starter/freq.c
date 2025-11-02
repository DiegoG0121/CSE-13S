/* Getting the frequency of leading digits */

#include <stdio.h>

int getMSDigit(int x) {
   /* TODO: extract the leading digit of integer x and return it */
   if(x == 0) return 0;

   if (x < 0) x = -x;

   while(x >= 10) x = x/10;

   return x;
}

int main() {
   /* TODO: 
    * Read input from the stdin till EOF
    * For each integer, obtain the leading digit
    * Calculate the frequencies of the leading digits
    * Print the frequencies on stdout */

   // creating list of frequency
   int freq[10] = {};

   // user intput variable
   int user_num;

   // loops till EOF
   while(scanf("%d", &user_num) != EOF){
      if(user_num > 0){
         int freqd = getMSDigit(user_num);
         freq[freqd]++; // adds frequncy onto the array
      }
   }

   // prints the information/ frequncies stored in the array freq
   for(int x = 0; x < 10; x++){
      printf("%d:%d", x, freq[x]);
      if(x != 9) printf(" ");
   }

   printf("\n");


    return 0;
}
