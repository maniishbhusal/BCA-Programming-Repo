#include <graphics.h>

int main()
{
    // Initialize the graphics system
    initwindow(640, 480, "Text Display Example");

    // Set text color and style
    setcolor(BLUE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

    // Display the text at coordinates (100, 200)
    outtextxy(100, 200, "BCA learning graphics function");

    // Close the graphics window on key press
    getch();
    closegraph();

    return 0;
}
