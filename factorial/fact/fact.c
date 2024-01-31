#include <stdio.h>
#include <stdlib.h>

long long factorial (int n){
    long long fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int is_prime(int n){
    if (n <= 1){
        return 0;
    }
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int number;

    if (argc != 2) {
        fprintf(stderr,"Usage: program <number>\n");
        return 1;
    }else
        number = atoi(argv[1]); //Convert the console input argument to an integer

    /*It must be verified that the entered number is greater than or equal to zero*/
    if (number < 0) {
        fprintf(stderr,"The number must be greater than or equal to zero\n");
        return 1;
    }
    /*Implement the function that calculates the factorial of the input argument*/

    /*Print the result*/

    /*Implement the function that calculates if the argument is a prime number*/

    /*Print the result*/

    return 0;
}