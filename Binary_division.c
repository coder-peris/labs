#include <stdio.h>
#include <math.h>
long add(long n1, long n2)
{
    int i = -1, carry = 0, s[10];
    long sum = 0;
    while (n1 != 0 || n2 != 0)
    {
        s[++i] = (n1 % 10 + n2 % 10 + carry) % 2;
        carry = (n1 % 10 + n2 % 10 + carry) / 2;
        n1 /= 10;
        n2 /= 10;
    }
    if (carry == 1)
        s[++i] = 1;
    for (; i >= 0; i--)
        sum += s[i] * pow(10, i);
    return sum;
}
main()
{
    int i = 0, n = 0, rem, An;
    long M, Q, A, x, y, onec = 0, twoc, shi;
    system("cls");
    printf("Enter dividend : ");
    scanf("%ld", &Q);
    printf("Enter divisor : ");
    scanf("%ld", &M);
    for (x = Q; x > 0; x /= 10)
        n++;
    for (x = M; i <= n; i++)
    {
        rem = 0;
        if (x % 10 == 0)
            rem = 1;
        onec += rem * pow(10, i);
        x /= 10;
    }
    twoc = add(onec, 1);
    x = pow(10, (n + 1));
    y = pow(10, (n - 1));
    A = 0;
    for (i = n; i > 0; i--)
    {
        shi = Q / y;
        Q %= y;
        A = (A * 10 + shi) % x;
        A = (add(A, twoc)) % x;
        An = A / pow(10, n);
        if (An == 1)
        {
            Q *= 10;
            A = add(A, M);
        }
        else
            Q = Q * 10 + 1;
    }
    A %= x;
    printf("\nThe quotient is : %d", Q);
    printf("\nAnd, the remainder is : %d", A);
    system("pause>0");
}