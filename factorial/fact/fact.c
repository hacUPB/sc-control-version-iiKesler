#include <stdio.h>
#include <stdlib.h>

long long factorial(int n){
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int es_primo(int n){
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
    if (argc < 2) {
        fprintf(stderr,"Usage: program <number>\n");
        return 1;
    }

    int number = atoi(argv[1]); //Convert the console input argument to an integer

    /*It must be verified that the entered number is greater than or equal to zero*/
    if (number < 0){
        fprintf(stderr,"El numero debe de ser mayor o igual a 0\n");
        return 1;
    }

    /*Implement the function that calculates the factorial of the input argument*/
    long long fact= factorial(number);

    /*Print the result*/
    printf("El factorial de %d es %lld\n", number, fact);

    /*Implement the function that calculates if the argument is a prime number*/
    es_primo(number);

    /*Print the result*/
    int primo = es_primo(number);
    if (primo){
        printf("%d es primo\n", number);
    }
    else{
        printf("%d no es primo\n", number);
    }

    return 0;
}
