#include <stdio.h>

int main()
{
    float a, d;
    int f, c;

    printf("Enter a floating-point number: ");
    scanf("%f", &a);

    f = (int)a; // Floor value
    printf("Floor value: %d\n", f);

    d = a - f;

    if (d != 0)
    {
        c = f + 1;
        printf("Ceiling value: %d\n", c);
    }
    else
    {
        printf("Ceiling value: %d\n", f);
    }

    printf("This code is run by Samyam Humagain\n");

    return 0;
}
