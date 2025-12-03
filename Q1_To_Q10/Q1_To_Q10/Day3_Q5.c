/* Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>

int main() {
    float celcius;
    printf("Enter degree  in celsius :");
    scanf("%f",&celcius);
    float farhrenheit=(celcius*9/5)+32;
    printf("celsius to Fahrenheit is : %f",farhrenheit);
    return 0;
}