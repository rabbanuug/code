#include <stdio.h>
int main(){
    int term1, interval, numberOfTerms;
    int sum, lastTerm;
    printf("Enter the first term:");
    scanf("%d", &term1);
    printf("Enter the interval:");
    scanf("%d", &interval);
    printf("Enter the number of terms:");
    scanf("%d", &numberOfTerms);
    lastTerm = term1 + (numberOfTerms - 1)* interval;
    sum = ((term1 + lastTerm) * numberOfTerms) /2;
    printf("The sum is %d.", sum);
    return 0;
}