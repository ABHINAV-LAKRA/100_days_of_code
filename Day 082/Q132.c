#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight light;
    int choice;

    printf("Enter traffic light (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    scanf("%d", &choice);

    light = choice;

    if (light == RED)
        printf("Stop\n");
    else if (light == YELLOW)
        printf("Wait\n");
    else if (light == GREEN)
        printf("Go\n");
    else
        printf("Invalid choice\n");

    return 0;
}
