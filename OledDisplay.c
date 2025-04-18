#include "ssd1306.h"

void draw_arrow(void) {
    ssd1306_Clear();
    // Arrow pointing right
    ssd1306_DrawLine(10, 30, 80, 30, White);
    ssd1306_DrawLine(80, 30, 70, 25, White);
    ssd1306_DrawLine(80, 30, 70, 35, White);
    ssd1306_UpdateScreen();
}

void draw_square(void) {
    ssd1306_Clear();
    ssd1306_DrawRectangle(30, 20, 40, 40, White);
    ssd1306_UpdateScreen();
}

void draw_triangle(void) {
    ssd1306_Clear();
    ssd1306_DrawLine(40, 10, 10, 50, White);
    ssd1306_DrawLine(40, 10, 70, 50, White);
    ssd1306_DrawLine(10, 50, 70, 50, White);
    ssd1306_UpdateScreen();
}

void draw_hexagon(void) {
    ssd1306_Clear();
    ssd1306_DrawLine(30, 10, 60, 10, White);
    ssd1306_DrawLine(60, 10, 75, 30, White);
    ssd1306_DrawLine(75, 30, 60, 50, White);
    ssd1306_DrawLine(60, 50, 30, 50, White);
    ssd1306_DrawLine(30, 50, 15, 30, White);
    ssd1306_DrawLine(15, 30, 30, 10, White);
    ssd1306_UpdateScreen();
}

void draw_clock_face(void) {
    ssd1306_Clear();
    ssd1306_DrawCircle(64, 32, 30, White);  // Outer clock face
    // Clock hands at 3 o'clock
    ssd1306_DrawLine(64, 32, 94, 32, White);  // Hour hand
    ssd1306_DrawLine(64, 32, 64, 12, White);  // Minute hand
    ssd1306_UpdateScreen();
}
