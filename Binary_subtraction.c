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
main()
{
    int x1, x2, n1, n2, result, num1, num2[10], res[10], n2c = 0, i = -1, count = -1;
    system("cls");
    printf("Enter two binary numbers:\n");
    scanf("%d %d", &x1, &x2);
    if (x1 > x2)
    {
        n1 = x1;
        n2 = x2;
    }
    else
    {
        n1 = x2;
        n2 = x1;
    }
    for (num1 = n1; num1 > 0; num1 /= 10)
        count++;
    for (; i < count; n2 /= 10)
    {
        if (n2 % 10 == 1)
            num2[++i] = 0;
        else
            num2[++i] = 1;
    }
    for (; i >= 0; i--)
        n2c = add(n2c, num2[i] * pow(10, i));
    n2c = add(n2c, 1);
    result = add(n2c, n1);
    for (i = -1; result > 0; result /= 10)
        res[++i] = result % 10;
    for (i--; i >= 0; i--)
        result = add(result, res[i] * pow(10, i));
    if (x1 < x2)
        printf("Difference is : -%d", result);
    else
        printf("Difference is : %d", result);
    system("pause>0");
}