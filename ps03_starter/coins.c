/* Making change */

#include <stdio.h>
#define OCTANOL 4
#define BUTANOL 3
#define ETHANOL 2
#define METHANOL 1

int value(int coin){
  if(coin == OCTANOL){
    return 8;
  } else if(coin == BUTANOL ){
    return 4;
  } else if(coin == ETHANOL){
    return 2;
  } else{
    return 1;
  }
}

int count(int amount, int maxCoin){
  /* TODO: Count the number of ways to make change for 'amount' using coins with value <= the value of 'maxCoin' */

  // checks if the inputed amount is 0, through initiation or recursion - meaining only one possible solution 0+0
  if(amount == 0) return 1;

  //checks id the inputed amount is below 0, through initiation or recursion -- returns 0 - cant have negative coins
  if(amount < 0 ) return 0;

  // checks if the max coins has reach 0 through its recursion
  if(maxCoin == 0) return 0;

  // it loops through the amount and maxCoin until it reaches 0, and return the count of possible combinations
  return count(amount, maxCoin - 1) + count(amount - value(maxCoin), maxCoin);
}

int main(int argc, char* argv[]){
  int amount;
  printf("Enter amount: ");
  scanf("%d", &amount);
  printf("Number of ways to make %d cents: %d\n", amount, count(amount, OCTANOL));
}