#include <stdio.h>

void towerOfHanoi(int diskCt, char startRod[], char destRod[], char auxRod[]){

    int intitalDisk = 0;
    while(intitalDisk <= diskCt){
        startRod[intitalDisk++] = intitalDisk+1;
    }

    for(int x = 0; x < startRod; x++) {
        printf("%d ", x);
    }
}

int main(){

    int diskAm = 5;
    int a[diskAm];
    int b[diskAm];
    int c[diskAm];

    towerOfHanoi(diskAm, a, b, c);

    return 0;
}