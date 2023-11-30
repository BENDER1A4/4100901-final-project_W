#include "gui.h"

#include "ssd1306.h"
#include "ssd1306_fonts.h"

// External declarations for images
extern const uint8_t locked[];
extern const uint8_t Unlocked[];

// Function to initialize the GUI
void GUI_init(void)
{
    // Initialize the SSD1306 OLED display
    ssd1306_Init();
    // Display the locked screen initially
    GUI_locked();
}

// Function to display the locked screen
void GUI_locked(void)
{
    // Fill the screen with black color
    ssd1306_Fill(Black);
    // Set the cursor position and write "Locked" text
    ssd1306_SetCursor(23, 5);
    ssd1306_WriteString("Locked", Font_11x18, White);
    // Draw the locked icon
    ssd1306_DrawBitmap(50, 35, locked, 30, 30, White);
    // Update the OLED screen
    ssd1306_UpdateScreen();
}

// Function to display the unlocked screen
void GUI_unlocked(void)
{
    // Fill the screen with black color
    ssd1306_Fill(Black);
    // Set the cursor position and write "Unlocked" text
    ssd1306_SetCursor(20, 5);
    ssd1306_WriteString("Unlocked", Font_11x18, White);
    // Draw the unlocked icon
    ssd1306_DrawBitmap(50, 35, Unlocked, 30, 30, White);
    // Update the OLED screen
    ssd1306_UpdateScreen();
}

// Function to display the fail screen
void GUI_Fail(void)
{
    // Fill the screen with black color
    ssd1306_Fill(Black);
    // Set the cursor position and write "Fail" text
    ssd1306_SetCursor(20, 5);
    ssd1306_WriteString("Fail", Font_11x18, White);
    // Draw the locked icon
    ssd1306_DrawBitmap(50, 35, locked, 30, 30, White);
    // Update the OLED screen
    ssd1306_UpdateScreen();
}

// Function to display the blocked screen
void GUI_Blocked(void)
{
    // Fill the screen with black color
    ssd1306_Fill(Black);
    // Set the cursor position and write "Blocked" text
    ssd1306_SetCursor(20, 5);
    ssd1306_WriteString("Blocked", Font_11x18, White);
    // Draw the locked icon
    ssd1306_DrawBitmap(50, 35, locked, 30, 30, White);
    // Update the OLED screen
    ssd1306_UpdateScreen();
}

// Function to initialize the password update screen
void GUI_update_password_init(void)
{
    // Fill the screen with black color
    ssd1306_Fill(Black);
    // Set the cursor position and write "New PW:" text
    ssd1306_SetCursor(20, 5);
    ssd1306_WriteString("New PW:", Font_16x26, White);
    // Update the OLED screen
    ssd1306_UpdateScreen();
}

// Function to update and display the entered password during password update
void GUI_update_password(uint8_t *password)
{
    // Set the cursor position and write the entered password
    ssd1306_SetCursor(10, 35);
    ssd1306_WriteString((char *)password, Font_7x10, White);
    // Update the OLED screen
    ssd1306_UpdateScreen();
}

// Function to display the password update success screen
void GUI_update_password_success(void)
{
    // Set the cursor position and write "Success!" text
    ssd1306_SetCursor(5, 35);
    ssd1306_WriteString("Success!", Font_16x26, White);
    // Update the OLED screen
    ssd1306_UpdateScreen();
}
