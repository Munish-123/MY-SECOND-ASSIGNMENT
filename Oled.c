#include "ssd1306.h"    // Replace with your actual OLED library header
#include "font.h"       // Optional: for custom fonts if your lib supports it
#include <stdio.h>

int main(void) {
    // Initialize OLED
    ssd1306_Init(); // Init function from your OLED library
    ssd1306_Clear(); // Clear the screen first

    // Display "Hello SRA"
    ssd1306_SetCursor(0, 0);
    ssd1306_WriteString("Hello SRA", Font_7x10, White);

    // Display "Thank You,"
    ssd1306_SetCursor(0, 16);
    ssd1306_WriteString("Thank You,", Font_7x10, White);

    // Display your name
    ssd1306_SetCursor(0, 32);
    ssd1306_WriteString("Munish", Font_11x18, White); // Larger font for your name

    ssd1306_UpdateScreen(); // Push buffer to the screen

    while (1) {
        // Infinite loop to keep the display on
    }

    return 0; // Optional in embedded, but good practice
}
