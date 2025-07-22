#include <stdio.h>
#include <math.h>

int main() {
    float num;
    int integralPart, rightMostDigit;

    printf("Enter a float number: ");
    scanf("%f", &num);


    integralPart = (int)num;


    rightMostDigit =  (integralPart) % 10;

    printf("Rightmost digit of integral part: %d\n", rightMostDigit);


}
