#include <stdio.h>
#include <stdbool.h>
#include <windows.h> // For Sleep function
#include <string.h>
#include <math.h>

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

    

    int x = 5;
    while (x <=15){
        printf("%d\n", x);
        fflush(stdout);
        x+=2;
        Sleep(1000);
    
    }
    
    

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[20] = "";

    printf("Enter ur age: ");
    scanf("%d", &age);

    printf("Enter ur gpa: ");
    scanf("%f", &gpa);

    printf("Enter ur grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter ur full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    
    

    // shopping cart program

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What do you want to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1]= '\0';

    printf("What is the price for each? ");
    scanf("%f", &price);

    printf("How many would u like? ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nU've bought %d %s/s\n", quantity, item);
    printf("Ur total is: %c%.2f", currency, total);

    

    // mad libs game 

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char friendName[50] = "";

    printf("enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("enter an adjective(description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("enter a verb (end with -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("enter a random name: ");
    fgets(friendName, sizeof(friendName), stdin);
    friendName[strlen(friendName) - 1] = '\0';

    printf("\nI've never met %s", noun);
    printf("\nBut my %s friend %s did", adjective1, friendName);
    printf("\nAnd now I am so jealous");
    printf("\nBecause I want to see my friend %s with this God's creature so much ", verb);
    printf("\nThanks for your %s time", adjective2);

    // ive never met (noun), but my (good, etc) friend (name) did, and i am so jealous because i want to see my friend (verb) with this God's creature so much. thanks for ur (adj) time. 

    

    float x = 0;

    // x = sqrt(x);
    // x = pow(x, 0.5);
    // x = round(x);
    // x = ceil(x);
    // x = floor(x);
    // x = abs(x);
    // x = log(x);
    // x = sin(x);
    // x = cos(x);
    // x = tan(x);

    printf("%f", x);

    

    // geometry area/volume calculator

    double side = 0.0;
    double radius = 0.0;
    double area = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;
    double triangleHeight = 0.0;
    
    int shape = 0;

    printf("Choose shape (1 - CIRCLE, 2 - SQUARE, 3 - TRIANGLE, 4 - CUBE, 5 - SPHERE): ");
    scanf("%d", &shape);
    
    if (shape == 1){
        printf("Enter radius of the circle: ");
        scanf("%lf", &radius);
        area = PI * pow(radius, 2);
        printf("Area of the circle is: %0.2lf", area);
    }
    else if (shape == 2){
        printf("Enter side lenght of the square: ");
        scanf("%lf", &side);
        area = pow(side, 2);
        printf("Area of the square is: %0.2lf", area);
    }
    else if (shape == 3){
        printf("Enter side lenght of the triangle: ");
        scanf("%lf", &side);
        printf("Enter height of the triangle: ");
        scanf("%lf", &triangleHeight);
        area = (side * triangleHeight) / 2;
        printf("Area of the triangle is: %0.2lf", area);
    }
    else if (shape == 4){
        printf("Enter side lenght of the cube: ");
        scanf("%lf", &side);
        area = 6 * pow(side, 2);
        volume = pow(side, 3);
        printf("Area of the cube is: %0.2lf", area);
        printf("\nVolume of the cube is: %0.2lf", volume);
    }
    else if (shape == 5){
        printf("Enter radius of the sphere: ");
        scanf("%lf", &radius);
        area = 4 * PI * pow(radius, 2);
        volume = (4.0 / 3.0) * PI * pow(radius, 3);
        printf("Area of the sphere is: %0.2lf", area);
        printf("\nVolume of the sphere is: %0.2lf", volume);
    }
    
    */
    
    



    return 0;
}