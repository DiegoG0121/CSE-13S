/* Toggling lockers */

#include <stdio.h>

char lockerState(int l, int t) {
  /* TODO: This should compute the state of locker l after t students have done their toggling. If the locker is open, return 1. If the locker is closed, return 0. */
  
  // signify the locker is oppen
  if (t == 1) {
    return 1; // locker is open
  } else {
    // calls itself till it reaches the base (t == 1)
    char past = lockerState(l, t - 1);
    // if true - student toggles the locker
    if (l % t == 0) {
      return 1 - past; //
    } else {
      return past;
    }
  }

}

int main(int argc, char* argv[]) {
  int n;
  while(1){
    printf("Enter n (locker number): ");
    scanf("%d", &n);
    if(n < 0){
      break;
    } else if(lockerState(n, n) == 0){
      printf("Closed\n");
    } else{
      printf("Open\n");
    }
  }

  return 0;
}