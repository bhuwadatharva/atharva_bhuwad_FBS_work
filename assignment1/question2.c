#include<stdio.h>


int main() {
    int num = 121;   
    int rev = 0, digit, original;

    original = num;

    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (original == rev) {
        printf("Palindrome number\n");
    } else {
        printf("Not a palindrome number\n");
    }

    
}
