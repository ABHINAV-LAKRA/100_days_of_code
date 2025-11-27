#include <stdio.h>

enum Month {
    JAN=1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

enum Status {
    SUCCESS=1, FAILURE, TIMEOUT
};

int main() {
    enum Month m;
    enum Status s;

    printf("Enter month number (1-12): ");
    scanf("%d", &m);

    switch (m) {
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

    printf("Enter status (1=SUCCESS, 2=FAILURE, 3=TIMEOUT): ");
    scanf("%d", &s);

    switch (s) {
        case SUCCESS:
            printf("Operation Successful\n");
            break;
        case FAILURE:
            printf("Operation Failed\n");
            break;
        case TIMEOUT:
            printf("Operation Timed Out\n");
            break;
        default:
            printf("Invalid Status\n");
    }

    return 0;
}
