// This program coverts the kilometer into meter, inches, centimeter.

#include<stdio.h>

float ConvertMeter(float);
float ConvertCM(float);
float ConvertInches(float);
float ConvertFeet(float);

int main()
{
    float km;
    printf("Enter the kilometer : ");
    scanf("%f",&km);

    printf("Meter : %.2f\n",ConvertMeter(km));
    printf("Centimeter :%.2f\n",ConvertCM(km));
    printf("Inches : %.2f\n",ConvertIncheskm());
    printf("Feet : %.2f\n",inches/(float)12);
    return 0;
}

//This Function Return the kilometer into meter.

float ConvertMeter(float km)
{
    return km * 1000;
}

//This Function Return the kilometer into Centimeter.

float ConvertCM(float km)
{
    return ConvertMeter(km) * 1000;
}

//This Function Return the kilometer into Inches.

float ConvertInches(float km)
{
    return ConvertCM(km) * 1000;
}

//This Function Return the kilometer into Feet.

float ConvertFeet(float km)
{
    return ConvertInches/12.0;
}
