#include <stdio.h>

    int factorial(int number);

    int main()
    {
        int n;
        printf("Factorial of: ");
        scanf("%i", &n);
        printf("%i! = %i\n", n, factorial(n));
    }

    int factorial(int number)
    {
        if (number > 1)
            return number * factorial(number - 1);
        else
	        return 1;
    }