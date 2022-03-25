#include <stdio.h>

int add1(); //Does not takes argument
int add2(int a, int b); //Takes argument

int add1() //defining function add1()
{
    int num1, num2;
    printf("Enter first number\n...>");
    scanf("%d", &num1);
    printf("Enter first number\n...>");
    scanf("%d", &num2);

    printf("%d + %d = %d", num1, num2, num1+num2);

    return 0;
}

int main()
{
    printf("This is add1 function\n");
    add1(); //Calling of add1    

    printf("This is add2 function\n");

    int num1, num2;
    printf("Enter first number\n...>");
    scanf("%d", &num1);
    printf("Enter first number\n...>");
    scanf("%d", &num2);
    add2(num1, num2);

    return 0;
}

int add2(int a, int b)
{
    return a+b;
}

/*
Fucntion : Declaration Before staring of main()
            Definition
            Calling



data_types function_name(arguments); //Function Declaration should always be done before starting of main() fucntion



data_types function_name(arguments) //Function Definition can be done anywhere in a program except inside a function
{
    //function body
}



function_name(arguments); //Function calling is always inside the main() function or any other function


*/