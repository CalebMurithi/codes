#include<stdio.h>

int main ()
{int choice;
float num1, num2, result;

printf("Simple Calculator\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("Enter your choice (1-4):");
scanf("%d", &choice);

printf("Enter two numbers:");
scanf("%f %f", &num1, &num2);

switch (choice) {
    case  1:
    result = num1 + num2;
    break;
    case  2:
    result = num1 - num2;
    break;
    case  3:
    result = num1 * num2;
    break;
    case  4:
    if (num2!=0) {
        result = num1 / num2;
    } else  {
printf("Error! Division by zero is not allowed.");
return 1;
    }
    break;
    default:
    printf("error:invalid choice!\n");
    return 1;
}

printf("result: %f\n" ,result);

printf("press any enter key to continue...\n");
getchar(); //wait  for user to press Enter key
getchar(); //consume the newline character

return 0;
}

