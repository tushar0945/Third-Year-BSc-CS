#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

// Function to rotate a point (x, y) by a given angle
void rotatePoint(int *x, int *y, int angle, int cx, int cy)
{
    double rad = angle * M_PI / 180.0; // Convert angle to radians

    // Translate point to origin
    int tempX = *x - cx;
    int tempY = *y - cy;

    // Apply rotation formula
    int rotatedX = tempX * cos(rad) + tempY * sin(rad);
    int rotatedY = tempX * sin(rad) - tempY * cos(rad);

    // Translate back to original position
    *x = rotatedX + cx;
    *y = rotatedY + cy;
}

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3, cx, cy;
    int angle;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); // Initialize graphics mode

    // Input triangle points
    printf("Enter the first point of the triangle (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the second point of the triangle (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the third point of the triangle (x3, y3): ");
    scanf("%d %d", &x3, &y3);

    // Draw the original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Input the angle of rotation
    printf("Enter the angle of rotation (in degrees): ");
    scanf("%d", &angle);

    // Find the centroid of the triangle
    cx = (x1 + x2 + x3) / 3;
    cy = (y1 + y2 + y3) / 3;

    // Rotate each point of the triangle
    rotatePoint(&x1, &y1, angle, cx, cy);
    rotatePoint(&x2, &y2, angle, cx, cy);
    rotatePoint(&x3, &y3, angle, cx, cy);

    // Set a different color for the rotated triangle
    setcolor(RED);

    // Draw the rotated triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();      // Wait for a key press
    closegraph(); // Close the graphics mode
    return 0;
}
