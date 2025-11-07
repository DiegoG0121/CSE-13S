4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. We shall trim!
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

The trimming function works by removing unwanted characters such as newlines ('\n'), carriage returns ('\r'), tabs ('\t'), and
spaces from the end of a string. At first, I tried using sizeof() to find the string’s length, but it returned 8 bytes because
it measures the size of a pointer, not the string itself. Using strlen() correctly gives the number of characters before the null
terminator ('\0'). The loop then checks each character from the end toward the start. If it finds '\n', '\r', or '\t', it replaces
them with '\0' and decreases the length. It continues until a valid character is found, then breaks. This ensures the string ends
cleanly, removing all unnecessary trailing spaces or formatting symbols.


2. Checking if a string is a palindrome.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.

Firstly, I seperated my functions with my main function for neat code, I created 2 function toLower_case(accepting
an array a and size of the array) and isPalindrome(has the same parameters)

3. Filtering and sorting zoo records
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.


