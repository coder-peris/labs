#include <stdio.h>
int main()
{
    system("cls");
    int i = -1, carry = 0, n1, n2, sum[10];
    printf("Enter two binary numbers:\n");
    scanf("%d %d", &n1, &n2);
    while (n1 != 0 || n2 != 0)
    {
        i++;
        sum[i] = (n1 % 10 + n2 % 10 + carry) % 2;
        carry = (n1 % 10 + n2 % 10 + carry) / 2;
        n1 /= 10;
        n2 /= 10;
    }
    if (carry == 1)
    {
        i++;
        sum[i] = carry;
    }
    printf("The sum of two binary numbers is : ");
    for (; i >= 0; i--)
        printf("%d", sum[i]);
    system("pause>0");
}