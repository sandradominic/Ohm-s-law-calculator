#include <stdio.h>
#include <math.h>

void printMenu() {
    printf("\n=== Ohm's Law Calculator ===\n");
    printf("What do you want to find?\n");
    printf("1. Voltage \n");
    printf("2. Current \n");
    printf("3. Resistance \n");
    printf("4. Power \n");
    printf("0. Quit\n");
    printf("Choice: ");
}

int main() {
    int choice;
    float V, I, R, P;
    char again;

    printf("Ohm's Law\n"); 

    do {
        printMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Current (A): ");
                scanf("%f", &I);
                printf("Enter Resistance (Ω): ");
                scanf("%f", &R);
                if (I < 0 || R < 0)
                    printf("Error! Values must be positive.\n");
                else {
                    V = I * R;
                    P = V * I;
                    printf("\nVoltage  V = %.4f V\n", V);
                    printf("Power    P = %.4f W\n", P);
                }
                break;

            case 2:
                printf("Enter Voltage (V): ");
                scanf("%f", &V);
                printf("Enter Resistance (Ω): ");
                scanf("%f", &R);
                if (R == 0)
                    printf("Error! Resistance cannot be zero.\n");
                else if (V < 0 || R < 0)
                    printf("Error! Values must be positive.\n");
                else {
                    I = V / R;
                    P = V * I;
                    printf("\nCurrent  I = %.4f A\n", I);
                    printf("Power    P = %.4f W\n", P);
                }
                break;

            case 3:
                printf("Enter Voltage (V): ");
                scanf("%f", &V);
                printf("Enter Current (A): ");
                scanf("%f", &I);
                if (I == 0)
                    printf("Error! Current cannot be zero.\n");
                else if (V < 0 || I < 0)
                    printf("Error! Values must be positive.\n");
                else {
                    R = V / I;
                    P = V * I;
                    printf("\nResistance R = %.4f Ω\n", R);
                    printf("Power      P = %.4f W\n", P);
                }
                break;

            case 4:
                printf("Enter Voltage (V): ");
                scanf("%f", &V);
                printf("Enter Current (A): ");
                scanf("%f", &I);
                if (V < 0 || I < 0)
                    printf("Error! Values must be positive.\n");
                else {
                    P = V * I;
                    R = V / I;
                    printf("\nPower      P = %.4f W\n", P);
                    printf("Resistance R = %.4f Ω\n", R);
                }
                break;

            case 0:
                printf("bye!\n");
                break;

            default:
                printf("Invalid choice! Enter 0-4.\n");
        }

        if (choice != 0) {
            printf("\nCalculate again? (y/n): ");
            scanf(" %c", &again);
        }

    } while (choice != 0 && (again == 'y' || again == 'Y'));

    return 0;
}