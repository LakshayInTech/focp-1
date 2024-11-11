// Co-ordinate System 
#include <stdio.h>
void determine_quadrant(int x, int y);
int main() {
    int x, y;
    printf("Enter the x-coordinate: ");
    scanf("%d", &x);
    printf("Enter the y-coordinate: ");
    scanf("%d", &y);
    determine_quadrant(x, y);
    return 0;
}
void determine_quadrant(int x, int y) {
    if (x > 0 && y > 0) {
        printf("The coordinate point (%d, %d) lies in the First quadrant\n", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("The coordinate point (%d, %d) lies in the Second quadrant\n", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("The coordinate point (%d, %d) lies in the Third quadrant\n", x, y);
    }
    else if (x > 0 && y < 0) {
        printf("The coordinate point (%d, %d) lies in the Fourth quadrant\n", x, y);
    }
    else if (x == 0 && y != 0) {
        printf("The coordinate point (%d, %d) lies on the Y-axis\n", x, y);
    }
    else if (y == 0 && x != 0) {
        printf("The coordinate point (%d, %d) lies on the X-axis\n", x, y);
    }
    else {
        printf("The coordinate point (%d, %d) is at the Origin\n", x, y);
    }
}