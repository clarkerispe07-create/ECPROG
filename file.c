#include <stdio.h>

float getCelsius(){
    float c;
    
    printf("Enter the number of Celsius: ");
    scanf("%f", &c);
    return c;
}

float convertToFahrenheit(float celsius){
    float result = (celsius*9/5)+32;
    return result;
}

void displayResult(float celsius, float fahrenheit){
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
}

int main(){
    
        float a = getCelsius();
          float b = convertToFahrenheit(a);
          displayResult(a,b);
    
    return 0;
}