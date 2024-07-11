// #include<stdio.h>
// int main()
// {
//     float celsius, fahrenheit;

//     printf("Enter the temperature in Celsius: ");
//     scanf("%f", &celsius);


//     fahrenheit = (9.0 / 5.0) * celsius + 32;    

//     printf("%.2f Celsius is equivalent to %.2f Fahrenheit.\n", celsius, fahrenheit);

//     return 0;
// }


// #include <stdio.h>

// // Function to calculate the gross salary
// float calculateGrossSalary(float baseSalary, float hraPercent, float daPercent, float taPercent) {
//     float hra = (hraPercent / 100) * baseSalary;
//     float da = (daPercent / 100) * baseSalary;
//     float ta = (taPercent / 100) * baseSalary;
//     return baseSalary + hra + da + ta;
// }

// int main() {
//     float baseSalary, hraPercent, daPercent, taPercent, grossSalary;

//     // Input base salary and percentages for HRA, DA, and TA
//     printf("Enter Base Salary: ");
//     scanf("%f", &baseSalary);
//     printf("Enter HRA percentage: ");
//     scanf("%f", &hraPercent);
//     printf("Enter DA percentage: ");
//     scanf("%f", &daPercent);
//     printf("Enter TA percentage: ");
//     scanf("%f", &taPercent);

//     // Calculate the gross salary
//     grossSalary = calculateGrossSalary(baseSalary, hraPercent, daPercent, taPercent);

//     // Output the gross salary
//     printf("Gross Salary: Rs. %.2f\n", grossSalary);

//     return 0;
// }


#include <stdio.h>

int main() {
    float firstAngle, secondAngle, thirdAngle;

    
    printf("Enter the first angle: ");
    scanf("%f", &firstAngle);
    printf("Enter the second angle: ");
    scanf("%f", &secondAngle);


    thirdAngle = 180 - (firstAngle + secondAngle);


    printf("The third angle is: %.2f\n", thirdAngle);

    return 0;
}


