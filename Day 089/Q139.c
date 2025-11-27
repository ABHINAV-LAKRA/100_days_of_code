#include <stdio.h>

enum Months { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
enum Status { SUCCESS=1, FAILURE=2, TIMEOUT=3 };
enum Values { V1=10, V2, V3, V4 };
enum Menu { ADD=1, SUBTRACT, MULTIPLY };
enum Role { ADMIN=1, USER, GUEST };
enum Days { SUNDAY=0, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

struct Person {
    char name[20];
    enum Gender { MALE, FEMALE, OTHER } gender;
};

int main() {
    enum Months m = APR;
    switch(m) {
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            printf("31 days\n"); break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n"); break;
        case FEB:
            printf("28 or 29 days\n"); break;
    }

    enum Status st = TIMEOUT;
    if (st == SUCCESS) printf("Success\n");
    else if (st == FAILURE) printf("Failure\n");
    else printf("Timeout\n");

    printf("%d %d %d %d\n", V1, V2, V3, V4);

    enum Menu choice = MULTIPLY;
    int a=6, b=4;
    switch(choice) {
        case ADD: printf("Sum = %d\n", a+b); break;
        case SUBTRACT: printf("Difference = %d\n", a-b); break;
        case MULTIPLY: printf("Product = %d\n", a*b); break;
    }

    enum Role r = ADMIN;
    if (r == ADMIN) printf("Admin access granted\n");
    else if (r == USER) printf("User access granted\n");
    else printf("Guest access limited\n");

    enum Values ev[] = {V1, V2, V3, V4};
    const char *evnames[] = {"V1","V2","V3","V4"};
    for (int i=0;i<4;i++)
        printf("%s = %d\n", evnames[i], ev[i]);

    printf("Enums store integers: V1=%d, V4=%d\n", V1, V4);

    struct Person p = {"Rahul", MALE};
    if (p.gender == MALE) printf("Gender: Male\n");
    else if (p.gender == FEMALE) printf("Female\n");
    else printf("Other\n");

    for (enum Days d=SUNDAY; d<=SATURDAY; d++)
        printf("Day %d\n", d);

    return 0;
}
