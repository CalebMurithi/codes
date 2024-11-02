#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>120){
        printf("Liar!");
    }
    else if(age<18) {
        printf("Not elligible!");
    }
    else if(age>=18)
    {
        printf("You are elligible for voting!");
    }

    return 0;
}