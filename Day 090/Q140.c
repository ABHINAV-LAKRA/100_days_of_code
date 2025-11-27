#include <stdio.h>

enum Months { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
enum Status { SUCCESS=1, FAILURE, TIMEOUT };
enum Values { A=10, B, C };
enum Menu { ADD=1, SUBTRACT, MULTIPLY };
enum Role { ADMIN=1, USER, GUEST };
enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
enum Gender { MALE, FEMALE };

struct Person {
    char name[20];
    enum Gender gender;
};

int main() {
    enum Months m = FEB;
    switch(m) {
        case JAN: printf("January: 31 days\n"); break;
        case FEB: printf("February: 28 or 29 days\n"); break;
        case MAR: printf("March: 31 days\n"); break;
        case APR: printf("April: 30 days\n"); break;
        case MAY: printf("May: 31 days\n"); break;
        case JUN: printf("June: 30 days\n"); break;
        case JUL: printf("July: 31 days\n"); break;
        case AUG: printf("August: 31 days\n"); break;
        case SEP: printf("September: 30 days\n"); break;
        case OCT: printf("October: 31 days\n"); break;
        case NOV: printf("November: 30 days\n"); break;
        case DEC: printf("December: 31 days\n"); break;
    }

    enum Status s = TIMEOUT;
    if (s == SUCCESS) printf("Success\n");
    else if (s == FAILURE) printf("Failure\n");
    else printf("Timeout\n");

    enum Values v1 = A, v2 = B, v3 = C;
    printf("A=%d B=%d C=%d\n", v1, v2, v3);

    enum Menu choice = MULTIPLY;
    int x = 5, y = 10;
    switch(choice) {
        case ADD: printf("Sum=%d\n", x+y); break;
        case SUBTRACT: printf("Difference=%d\n", x-y); break;
        case MULTIPLY: printf("Product=%d\n", x*y); break;
    }

    enum Role r = USER;
    if (r == ADMIN) printf("Admin Access\n");
    else if (r == USER) printf("User Access\n");
    else printf("Guest Access\n");

    printf("Enum Values:\n");
    for (int i = 0; i <= 6; i++) printf("%d ", i);
    printf("\n");

    printf("Assigned Values: %d %d %d\n", A, B, C);

    struct Person p = {"Rahul", MALE};
    if (p.gender == MALE) printf("Male\n");
    else printf("Female\n");

    printf("Days of Week:\n");
    printf("Sunday=%d\nMonday=%d\nTuesday=%d\nWednesday=%d\nThursday=%d\nFriday=%d\nSaturday=%d\n",
           SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY);

    return 0;
}
