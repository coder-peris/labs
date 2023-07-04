#include <stdio.h>
int main()
{
    system("cls");
    int i = -1, carry = 0, n1, n2, sum[10];
    printf("Enter two binary numbers:\n");
    scanf("%d %d", &n1, &n2);
    while (n1 != 0 || n2 != 0)
    {
        sum[++i] = (n1 % 10 + n2 % 10 + carry) % 2;
        carry = (n1 % 10 + n2 % 10 + carry) / 2;
        n1 /= 10;
        n2 /= 10;
    }
    sum[++i] = carry;
    printf("The sum of two binary numbers is : ");
    while (i >= 0)
        printf("%d", sum[i--]);
    system("pause>0");
}

/* Alternate : */
#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2, i, carry = 0, temp, sum = 0;
    printf("Enter two binary numbers:\n");
    scanf("%d %d", &n1, &n2);
    for (i = 0; n1 != 0 || n2 != 0; i++)
    {
        temp = (n1 % 10 + n2 % 10 + carry) % 2;
        carry = (n1 % 10 + n2 % 10 + carry) / 2;
        n1 /= 10;
        n2 /= 10;
        sum += temp * pow(10, i);
    }
    sum += carry * pow(10, i);
    printf("The sum of two binary numbers is : %d", sum);
}