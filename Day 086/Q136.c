#include <stdio.h>

enum Months { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
enum Status { SUCCESS, FAILURE, TIMEOUT };
enum Values { A=10, B, C };
enum Menu { ADD=1, SUBTRACT, MULTIPLY };

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            printf("31 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        case FEB:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month\n");
    }

    enum Status s = TIMEOUT;
    if (s == SUCCESS) printf("Operation Successful\n");
    else if (s == FAILURE) printf("Operation Failed\n");
    else printf("Operation Timed Out\n");

    printf("Explicit Enum Values: A=%d B=%d C=%d\n", A, B, C);

    int choice, x, y;
    printf("1.ADD  2.SUBTRACT  3.MULTIPLY\nEnter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    switch (choice) {
        case ADD:
            printf("Result = %d\n", x + y);
            break;
        case SUBTRACT:
            printf("Result = %d\n", x - y);
            break;
        case MULTIPLY:
            printf("Result = %d\n", x * y);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
