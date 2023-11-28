#include <graphics.h>

int main()
{
    // Initialize the graphics system
    initwindow(640, 480, "Line Drawing Example");

    // Set color to red
    setcolor(RED);

    // Draw a line from (100, 100) to (300, 200)
    line(100, 100, 300, 200);

    // Close the graphics window on key press
    getch();
    closegraph();

    return 0;
}
