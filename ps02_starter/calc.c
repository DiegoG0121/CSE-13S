/* Implementing a basic arithmetic calculator */

#include <stdio.h>

int add(int num1, int num2){
    return num1+num2;
}

int subtract(int num1, int num2){
    return num1-num2;
}

int multiply(int num1, int num2){
    return num1*num2;
}

double divide(int num1, int num2){
    return (double)num1/num2;
}

int modulus(int num1, int num2){
    return num1%num2;
}

int main() {
    int choice, num1, num2;
    float result;

    /* TODO: display the menu of options and take user input, perform the chosen operation and display result.
             your program should continue until the user chooses to exit. 
             format your print statements exactly as the ones shown in sample output in the pdf */

    start_loop:
    while(1){
        printf("Press 1 for addition (+)\nPress 2 for subtraction (-)\nPress 3 for multiplication (*)\nPress 4 for division (/)\nPress 5 for modulus (%)\nPress 6 for exit\n");

        printf("Please enter your choice (1-6): ");
        scanf("%d", &choice);

        if(choice == 6){
            break;
        }

        printf("Please enter two integers: ");
        scanf("%d %d", &num1, &num2);

        if(num2 == 0){
            if(choice == 4){
                printf("Error: Division by zero is not allowed.\n");
                goto start_loop;
            } else if(choice == 5){
                printf("Error: Modulus by zero is not allowed.\n");
                goto start_loop;
            } else {
                goto switch_start;
            }
        }

        switch_start:
        switch(choice){

            case 1:
                printf("Result: %d + %d = %.2lf\n", num1, num2, (double)add(num1,num2));
                break;
            case 2:
                printf("Result: %d - %d = %.2lf\n", num1, num2, (double)subtract(num1,num2));
                break;
            case 3:
                printf("Result: %d * %d = %.2lf\n", num1, num2, (double)multiply(num1,num2));
                break;
            case 4:
                printf("Result: %d / %d = %.2lf\n", num1, num2, divide(num1,num2));
                break;
            case 5:
                printf("Result: %d %% %d = %.2lf\n", num1, num2, (double)modulus(num1,num2));
                break;
            default:
                printf("Invalid choice. Please enter a number from 1 to 6.\n");
                break;
        }

    }

    printf("Exiting the program. Thank you!\n");
    


    return 0;
}
