#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toLower_case(char str[], int length){
    for(int x = 0; x < length; x++){
        str[x] = tolower((unsigned char)str[x]);
    }
}

int isPalindrome(char str[], int length){
    int index_s = 0;
    length--;

    while (index_s < length) {
        if (!isalnum((unsigned char)str[index_s])) {
            index_s++;
            continue;
        }

        if (!isalnum((unsigned char)str[length])) {
            length--;
            continue;
        }

        if (str[index_s] != str[length]) {
            return 0;
        }

        index_s++;
        length--;
    }

    return 1;
}

int main() {
    char str[101];
    printf("Enter a string (max 100 characters): ");

    /* TODO: read an input string until the new-line character is read. 
             remove the new line character and check if the string is a palindrome.
             your check should ignore all non alpha-numeric characters and case-sensitivity.
             print if the string is a palindrome or not.
             your print statements should match the sample output prints shown in the pdf. */
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);

    str[length-1] = '\0';
    toLower_case(str, length);

    if (isPalindrome(str, length))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
