#include <stdio.h>
#include <stdbool.h>
#include <windows.h> // For Sleep function

int main() {

    /*
    int age = 15;
    int year = 20125;
    int quantity = 1;

    printf("u are %d years old\n", age);
    printf("the year is %d\n", year);
    printf("your shopping cart contains %d item(s)\n", quantity);

    printf("\n");

    
    float gpa = 2.5;
    float price = 19.99;
    float temperature = 36.6;

    printf("ur GPA is %.1f\n", gpa);
    printf("the price is $%.2f\n", price);
    printf("ur body temperature is %.1fC degrees\n", temperature);
    
    printf("\n");


    double pi = 3.14159265358979;
    double e = 2.718281828459045;

    printf("the value of pi is %.14lf\n", pi);
    printf("the value of e is %.14lf\n", e);

    printf("\n");


    char grade = 'A';
    char symbol = '?';
    char currency = '$';

    printf("your grade is %c\n", grade);
    printf("ur symbol is %c\n", symbol);
    printf("the currency is %c\n", currency);

    printf("\n");


    char name[] = "Vadym";
    char food[] = "Pizza";
    printf("ur name is %s\n", name);
    printf("ur fav food is %s\n", food);

    printf("\n");


    bool isOnline = true;

    if(isOnline){
        printf("U are ONLINE\n");
    }
    else {
        printf("U are OFFLINE\n");
    }

    bool isStudent = true;
    
    if(isStudent){
        printf("You are a student\n");
    }
    else{
        printf("You are not a student\n");
    }

    bool forSale = false;

    if(forSale){
        printf("The item is for sale\n");
    }
    else{
        printf("The item is NOT for sale\n");
    }

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);

    printf("\n");

    */

    int x = 5;
    while (x <=15){
        printf("%d\n", x);
        fflush(stdout);
        x+=2;
        Sleep(1000);
    
    }
    

    printf("\n");

    return 0;
}