#include <stdio.h>
#include <math.h>
add(int n1, int n2)
{
    int i = -1, carry = 0, s[10], sum = 0;
    while (n1 != 0 || n2 != 0)
    {
        s[++i] = (n1 % 10 + n2 % 10 + carry) % 2;
        carry = (n1 % 10 + n2 % 10 + carry) / 2;
        n1 /= 10;
        n2 /= 10;
    }
    if (carry == 1)
        s[++i] = carry;
    for (; i >= 0; i--)
        sum = sum + s[i] * pow(10, i);
    return sum;
}
multiply(int n1, int n2)
{
    int i = -1, j, num2[10], temp[10], prod = 0;
    while (n2 > 0)
    {
        num2[++i] = n2 % 10;
        n2 /= 10;
    }
    for (j = i; j >= 0; j--)
        temp[j] = n1 * num2[j] * pow(10, j);
    for (; i >= 0; i--)
        prod = add(prod, temp[i]);
    return prod;
}
main()
{
    int n1, n2, result;
    system("cls");
    printf("Enter two binary numbers:\n");
    scanf("%d %d", &n1, &n2);
    result = multiply(n1, n2);
    printf("Product = %d", result);
    system("pause>0");
}
