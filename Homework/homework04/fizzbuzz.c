/* 
CSMI 2210
Homework Assignment 4
Problem 3
Fizz Buzz Game in C Programing 
*/



#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;

//Fuction verifies if the given input is valid (zero)
    printf("Enter a positive number:");
    if (scanf("%d", &n) == 0) {
        printf("Error: Invalid Input. Enter another number greater than 0");
    return 1;
    }

//Fuction verifies if the given input is valid (negative number)
    if (n <=0) {
        printf("Error: Invalid Input. The number cannot be negative");
    return 1;
    }

//Starting Fizz-Buzz game
//Number divisible by 3 and 5
    for (int i = 1; i<=n; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            printf("fizz-buzz\n");
//Number divisible by 3
        else if(i % 3 == 0)
            printf("fizz\n");
//Number divisible by 5
        else if (i % 5 == 0)
            printf("buzz\n");
//Alternate integer
        else
            printf("%d\n", i);
    }

    return 0;
}