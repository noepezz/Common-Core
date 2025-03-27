/*Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function who takes two unsigned int as parameters and returns the
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and
calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

  unsigned int    lcm(unsigned int a, unsigned int b);*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

unsigned int hcf(unsigned int a, unsigned int b) {
    while (b != 0) {
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

unsigned int lcm(unsigned int a, unsigned int b) {
    if (a == 0 || b == 0)
        return 0;
    return (a / hcf(a, b)) * b;
}
int is_valid_number(const char *str) {
    if (*str == '\0') return 0;
    while (*str) {
        if (!isdigit(*str)) return 0;
        str++;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
    unsigned int num1 = strtoul(argv[1], NULL, 10);
    unsigned int num2 = strtoul(argv[2], NULL, 10);

    printf("LCM di %u e %u è %u\n", num1, num2, lcm(num1, num2));

    return 0;
}


