#include <stdio.h>

int main()
{
    int n, i, sum, carry = 0;

    printf("This code is run by Samyam Humagain\n");

    printf("Enter the number of bits: ");
    scanf("%d", &n);

    int a[n], b[n], s[n + 1];

    printf("Enter first binary number (bit by bit):\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter second binary number (bit by bit):\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        sum = a[i] + b[i] + carry;

        if (sum == 0)
        {
            s[i + 1] = 0;
            carry = 0;
        }
        else if (sum == 1)
        {
            s[i + 1] = 1;
            carry = 0;
        }
        else if (sum == 2)
        {
            s[i + 1] = 0;
            carry = 1;
        }
        else
        {
            s[i + 1] = 1;
            carry = 1;
        }
    }

    s[0] = carry;

    printf("Sum: ");
    for (i = 0; i <= n; i++)
    {
        printf("%d", s[i]);
    }

    printf("\n");
    return 0;
}
