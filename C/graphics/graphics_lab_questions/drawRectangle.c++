#include <graphics.h>

int main()
{
    // Initialize the graphics system
    initwindow(640, 480, "Rectangle Drawing Example");

    // Set color to blue
    setcolor(BLUE);

    // Draw a rectangle with top-left corner at (100, 100) and bottom-right corner at (300, 200)
    rectangle(100, 100, 300, 200);

    // Close the graphics window on key press
    getch();
    closegraph();

    return 0;
}
