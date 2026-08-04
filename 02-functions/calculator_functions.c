#include <stdio.h>
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
void displayMenu(void);

int main(){
    int choice, a, b;
    displayMenu();
    scanf("%d", &choice);
    if (choice == 0){
        printf("Exiting...\n");
        return 0;
    }
    if (choice < 1 || choice > 4){
    printf("Invalid choice.\n");
    return 1;
    }
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    

    switch(choice){
        case 1:
            printf("Result: %d\n", add(a, b));
            break;
        case 2:
            printf("Result: %d\n", subtract(a, b));
            break;
        case 3:
            printf("Result: %d\n", multiply(a, b));
            break;
        case 4:
            if(b != 0){
                printf("Result: %.2f\n", divide(a, b));
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
void displayMenu(void){
    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}
int add(int a, int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}   
int multiply(int a, int b){
    return a * b;
}
float divide(int a, int b){
    return (float)a / b;
}