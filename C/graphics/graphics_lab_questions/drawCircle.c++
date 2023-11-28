#include <graphics.h>

int main()
{
    // Initialize the graphics system
    initwindow(640, 480, "Circle Drawing Example");

    // Set color to red
    setcolor(RED);

    // Draw a circle with center at (320, 240) and radius 70
    circle(320, 240, 70);

    // Close the graphics window on key press
    getch();
    closegraph();

    return 0;
}
