#include <stdio.h>

int main() {
    float x, y;

    printf("Enter x and y coordinates: ");
    scanf("%f %f", &x, &y);

    if (x != 0 && y != 0) {
        if (x > 0) {
            if (y > 0) {
                printf("(%.2f, %.2f) is in the 1st quadrant.", x, y);
            } else {
                printf("(%.2f, %.2f) is in the 4th quadrant.", x, y);
            }
        } else {
            if (y > 0) {
                printf("(%.2f, %.2f) is in the 2nd quadrant.", x, y);
            } else {
                printf("(%.2f, %.2f) is in the 3rd quadrant.", x, y);
            }
        }
    } else if (x == 0 && y == 0) {
        printf("(%.2f, %.2f) is the origin.", x, y);
    } else if (x == 0) {
        printf("(%.2f, %.2f) is on the y axis.", x, y);
    } else if (y == 0) {
        printf("(%.2f, %.2f) is on the x axis.", x, y);
    }

    return 0;
}