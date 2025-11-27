#include <stdio.h>

enum Months { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
enum Status { SUCCESS=1, FAILURE=2, TIMEOUT=3 };
enum Numbers { A=10, B, C, D };
enum Menu { ADD=1, SUBTRACT, MULTIPLY };
enum Roles { ADMIN=1, USER, GUEST };

int main() {
    int i;

    enum Months m = FEB;
    switch(m) {
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

    enum Status s = TIMEOUT;
    if (s == SUCCESS) printf("Operation Successful\n");
    else if (s == FAILURE) printf("Operation Failed\n");
    else if (s == TIMEOUT) printf("Operation Timed Out\n");

    printf("Explicit Values: A=%d B=%d C=%d D=%d\n", A, B, C, D);

    enum Menu choice = MULTIPLY;
    int x = 6, y = 4;
    switch(choice) {
        case ADD: printf("Addition: %d\n", x+y); break;
        case SUBTRACT: printf("Subtraction: %d\n", x-y); break;
        case MULTIPLY: printf("Multiplication: %d\n", x*y); break;
    }

    enum Roles r = USER;
    if (r == ADMIN) printf("Admin Access Granted\n");
    else if (r == USER) printf("User Access Granted\n");
    else if (r == GUEST) printf("Guest Access Granted\n");

    const char *monthNames[] = {
        "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    for (i = JAN; i <= DEC; i++) {
        printf("%s = %d\n", monthNames[i], i);
    }

    printf("Enum Values: SUCCESS=%d FAILURE=%d TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);

    return 0;
}
