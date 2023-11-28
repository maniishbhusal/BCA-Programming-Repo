#include <graphics.h>

int main()
{
    // Initialize the graphics system
    initwindow(640, 480, "Triangle Drawing Example");

    // Set triangle coordinates
    int x1 = 100, y1 = 300;
    int x2 = 300, y2 = 100;
    int x3 = 500, y3 = 300;

    // Draw the triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Close the graphics window on key press
    getch();
    closegraph();

    return 0;
}
