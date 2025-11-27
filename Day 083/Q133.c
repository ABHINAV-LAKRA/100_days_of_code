#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;
    for (m = JAN; m <= DEC; m++) {
        switch (m) {
            case JAN: printf("JANUARY has 31 days\n"); break;
            case FEB: printf("FEBRUARY has 28 or 29 days\n"); break;
            case MAR: printf("MARCH has 31 days\n"); break;
            case APR: printf("APRIL has 30 days\n"); break;
            case MAY: printf("MAY has 31 days\n"); break;
            case JUN: printf("JUNE has 30 days\n"); break;
            case JUL: printf("JULY has 31 days\n"); break;
            case AUG: printf("AUGUST has 31 days\n"); break;
            case SEP: printf("SEPTEMBER has 30 days\n"); break;
            case OCT: printf("OCTOBER has 31 days\n"); break;
            case NOV: printf("NOVEMBER has 30 days\n"); break;
            case DEC: printf("DECEMBER has 31 days\n"); break;
        }
    }
    return 0;
}
