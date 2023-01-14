#include <stdio.h>
#include <stdbool.h>
bool checkIfPrime(int givenNumber)
{
    int divisor=1,primeCount=0;
    while(divisor <= givenNumber)
    {
        if(givenNumber%divisor == 0)
            primeCount++;
        divisor++;
    }
    if(primeCount!=2)
        return false;
    else
        return true;
}
int main(int argc, char **argv) {
    int givenNumber;
    printf("Enter a integer");
    scanf("%d",&givenNumber);
    if(givenNumber > 0)
    {
        if(checkIfPrime(givenNumber))
            printf("The given number is prime");
        else
            printf("The given number is not a prime");
    }
    else
        printf("Enter a valid integer");
    return 0;
}
