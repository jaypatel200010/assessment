// Assessment SE - Fundamentals of Programming.
// Create an application that can perform all string related operations.

//Defining the libraries.
#include <stdio.h>
#include <string.h>
#include <ctype.h>


// To reverse a string
void reverseString(char *str) {
	int i;
    int length = strlen(str);
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}
// To concate a string
void concatenateStrings(char *str1, char *str2) {
    printf("%s%s\n", str1, str2);
}
// For palindrome number
int isPalindrome(char *str) {
	int i;
    int length = strlen(str);
    for ( i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}
// To copy a string
void copyString(char *source, char *destination) {
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
}
//To find a length of string
int stringLength(char *str) {
    return strlen(str);
}
//Frequency of character in s string 
void charFrequency(char *str) {
	int i;
    int frequency[256] = {0};
    int length = strlen(str);
    for (i = 0; i < length; i++) {
        frequency[str[i]]++;
    }
    for ( i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("Frequency of %c: %d\n", i, frequency[i]);
        }
    }
}
//Find number of vowels and consonants, number of blank spaces and digits.
void countVowelsConsonantsDigitsSpaces(char *str) {
	int i;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    int length = strlen(str);
    for ( i = 0; i < length; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (isspace(ch)) {
            spaces++;
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of digits: %d\n", digits);
    printf("Number of spaces: %d\n", spaces);
}

int main() {
    char str[100], str2[100];
    int choice;
    char continueChoice;

    do {
    	//Taking string input from user.
        printf("\nEnter string: ");
        scanf(" %[^\n]s", str);
		
		//List of String operation and choice.
        printf("\nMenu:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate strings\n");
        printf("3. Check palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of characters\n");
        printf("7. Count vowels, consonants, digits, and spaces\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
		
		//Performing the operations using above functions as per users choice.
        switch (choice) {
            case 1:
                printf("Reversed string: ");
                reverseString(str);
                break;
            case 2:
                printf("Enter second string: ");
                scanf(" %[^\n]s", str2);
                printf("Concatenated string: ");
                concatenateStrings(str, str2);
                break;
            case 3:
                if (isPalindrome(str)) {
                    printf("String is a palindrome\n");
                } else {
                    printf("String is not a palindrome\n");
                }
                break;
            case 4:
                copyString(str, str2);
                break;
            case 5:
                printf("Length of the string: %d\n", stringLength(str));
                break;
            case 6:
                charFrequency(str);
                break;
            case 7:
                countVowelsConsonantsDigitsSpaces(str);
                break;
            default:
                printf("Invalid choice!\n");
        }
		//Asking the user if the user wants to continue or not ?
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &continueChoice);
    } while (continueChoice == 'y' || continueChoice == 'Y');
    
}

