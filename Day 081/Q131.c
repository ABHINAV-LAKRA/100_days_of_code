#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };
enum Month { JAN=31, FEB=28, MAR=31, APR=30, MAY=31, JUN=30, JUL=31, AUG=31, SEP=30, OCT=31, NOV=30, DEC=31 };
enum Status { SUCCESS=1, FAILURE=0, TIMEOUT=2 };
enum Numbers { A=10, B, C, D };
enum Menu { ADD=1, SUBTRACT, MULTIPLY };
enum Role { ADMIN, USER, GUEST };
enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
enum Gender { MALE, FEMALE };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    enum Traffic light = RED;
    if (light == RED) printf("Stop\n");
    else if (light == YELLOW) printf("Wait\n");
    else printf("Go\n");

    printf("Days in January: %d\n", JAN);
    printf("Days in February: %d\n", FEB);

    enum Status s = TIMEOUT;
    if (s == SUCCESS) printf("Success\n");
    else if (s == FAILURE) printf("Failure\n");
    else printf("Timeout\n");

    printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);

    int choice = ADD;
    int x = 10, y = 5;
    switch (choice) {
        case ADD: printf("Add=%d\n", x+y); break;
        case SUBTRACT: printf("Subtract=%d\n", x-y); break;
        case MULTIPLY: printf("Multiply=%d\n", x*y); break;
    }

    enum Role r = USER;
    if (r == ADMIN) printf("Admin Access\n");
    else if (r == USER) printf("User Access\n");
    else printf("Guest Access\n");

    printf("Enum Days:\n");
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Enum integer test: RED=%d GREEN=%d\n", RED, GREEN);

    struct Person p = {"Rohan", MALE};
    if (p.gender == MALE) printf("Gender: Male\n");
    else printf("Gender: Female\n");

    printf("Days with values:\n");
    printf("SUNDAY=%d\n", SUNDAY);
    printf("MONDAY=%d\n", MONDAY);
    printf("TUESDAY=%d\n", TUESDAY);
    printf("WEDNESDAY=%d\n", WEDNESDAY);
    printf("THURSDAY=%d\n", THURSDAY);
    printf("FRIDAY=%d\n", FRIDAY);
    printf("SATURDAY=%d\n", SATURDAY);

    return 0;
}
