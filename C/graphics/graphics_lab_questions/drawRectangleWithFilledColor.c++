#include <graphics.h>

int main()
{
    // Initialize the graphics system
    initwindow(640, 480, "Filled Rectangle Example");

    // Set fill color to green
    setfillstyle(SOLID_FILL, GREEN);

    // Draw a filled rectangle with top-left corner at (100, 100) and bottom-right at (300, 200)
    bar(100, 100, 300, 200);

    // Close the graphics window on key press
    getch();
    closegraph();

    return 0;
}
