#include <stdio.h>
int main(void){
    int firstValue,secondValue;
    printf("Please enter the values that is going to be calculated \n\n");
    printf("First Value: ");
    scanf("%d",&firstValue);
    printf("\nSecond Value: ");
    scanf("%d",&secondValue);
    printf("\nSum of two numbers is: %d",firstValue+secondValue);
    printf("\nThanks\n\n");
    return 0;
}