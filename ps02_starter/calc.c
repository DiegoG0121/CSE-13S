/* Implementing a basic arithmetic calculator */

#include <stdio.h>
// adds parameter num1 + num2 returns int
int add(int num1, int num2){
    return num1+num2;
}

// subtracts parameter num1 -num2 returns int
int subtract(int num1, int num2){
    return num1-num2;
}

// multiplies paramter num1 * num2 returns int
int multiply(int num1, int num2){
    return num1*num2;
}

// divides paramter num1 / num2 returns double
double divide(int num1, int num2){
    return (double)num1/num2;
}

// finds remainder between paramter num1 % num2 returns int
int modulus(int num1, int num2){
    return num1%num2;
}

int main() {
    int choice, num1, num2;
    float result;

    /* TODO: display the menu of options and take user input, perform the chosen operation and display result.
             your program should continue until the user chooses to exit. 
             format your print statements exactly as the ones shown in sample output in the pdf */

    start_loop: // a call for goto
    // loops til break or condition == 0
    while(1){

        // prints all possible values
        printf("Press 1 for addition (+)\nPress 2 for subtraction (-)\nPress 3 for multiplication (*)\nPress 4 for division (/)\nPress 5 for modulus (%)\nPress 6 for exit\n");

        // ask's user to choose
        printf("Please enter your choice (1-6): ");

        // user input is stored in choice variable
        scanf("%d", &choice);

        // if user choice is 6 break out of while-loop
        if(choice == 6){
            break;
        }


        printf("Please enter two integers: ");

        // stores #1 into varibale num1 and #2 into num2
        scanf("%d %d", &num1, &num2);

        // checks whether value of num2 is 0 because any number dvided or modulus by is an error
        if(num2 == 0){
            
            if(choice == 4){
                printf("Error: Division by zero is not allowed.\n");
                goto start_loop; // loops back to while-loop
            } else if(choice == 5){
                printf("Error: Modulus by zero is not allowed.\n");
                goto start_loop; // loops back to while-loop
            } else {
                goto switch_start; // loops to switch
            }
        }

        switch_start:
        // will loop through the choices and give it, it's format to print out
        switch(choice){
            case 1:
                printf("Result: %d + %d = %.2lf\n", num1, num2, (double)add(num1,num2));
                break; // breaks out of switch
            case 2:
                printf("Result: %d - %d = %.2lf\n", num1, num2, (double)subtract(num1,num2));
                break; // breaks out of switch
            case 3:
                printf("Result: %d * %d = %.2lf\n", num1, num2, (double)multiply(num1,num2));
                break; // breaks out of switch
            case 4:
                printf("Result: %d / %d = %.2lf\n", num1, num2, divide(num1,num2));
                break; // breaks out of switch
            case 5:
                printf("Result: %d %% %d = %.2lf\n", num1, num2, (double)modulus(num1,num2));
                break; // breaks out of switch
            default: // gives it a default value if the input of choice is not an option between 1 and 6
                printf("Invalid choice. Please enter a number from 1 to 6.\n");
                break;
        }

    }

    // ctrl + c or 6 is inputed then prints this message, quit program messgae
    printf("Exiting the program. Thank you!\n");
    


    return 0;
}
