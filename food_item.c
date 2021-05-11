#include <stdio.h>
int main()
{
    printf("Press 1 Pizza\n");
    printf("Press 2 Burger\n");
    printf("Press 3 Pasta\n");
    printf("Press 4 French Fries\n");
    printf("Press 5 Sandwich\n");
    printf("Enter your choice:\n");
    int choice=0;
    scanf("%d",&choice);
    switch (choice) {
    case 1: {
        printf("Enter pizza,Rs 239:\n");
        break;
    }
    case 2: {
        printf("Enter burger,Rs 129:\n");
        break;
    }
    case 3: {
        printf("Enter pasta,Rs 179:\n");
        break;
    }
    case 4: {
        printf("Enter French Fries,Rs 99:\n");
        break;
    }
    case 5: {
        printf("Enter Sandwich,Rs 149:\n");
        break;
    }
    default:
        printf("wrong Input\n");
    }
    return 0;
}
