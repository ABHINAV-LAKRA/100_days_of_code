#include <stdio.h>

enum Month {
    JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

enum Status {
    SUCCESS=1, FAILURE=2, TIMEOUT=3
};

enum Values {
    A=10, B, C, D
};

int main() {
    enum Month m;
    enum Status s;
    enum Values v;

    m = FEB;
    switch (m) {
        case JAN: printf("January has 31 days\n"); break;
        case FEB: printf("February has 28 or 29 days\n"); break;
        case MAR: printf("March has 31 days\n"); break;
        case APR: printf("April has 30 days\n"); break;
        case MAY: printf("May has 31 days\n"); break;
        case JUN: printf("June has 30 days\n"); break;
        case JUL: printf("July has 31 days\n"); break;
        case AUG: printf("August has 31 days\n"); break;
        case SEP: printf("September has 30 days\n"); break;
        case OCT: printf("October has 31 days\n"); break;
        case NOV: printf("November has 30 days\n"); break;
        case DEC: printf("December has 31 days\n"); break;
    }

    s = TIMEOUT;
    switch (s) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
    }

    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);
    printf("D=%d\n", D);

    return 0;
}
