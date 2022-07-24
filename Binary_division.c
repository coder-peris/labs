#include <stdio.h>
#include <math.h>
add(int n1, int n2)
{
    int i, carry = 0, temp, sum = 0;
    for (i = 0; n1 != 0 || n2 != 0; i++)
    {
        temp = (n1 % 10 + n2 % 10 + carry) % 2;
        carry = (n1 % 10 + n2 % 10 + carry) / 2;
        n1 /= 10;
        n2 /= 10;
        sum += temp * pow(10, i);
    }
    if (carry == 1)
        sum += pow(10, i);
    return sum;
}
main()
{
    int i = 0, n = 0, rem, An, M, Q, A = 0, x, y, onec = 0, twoc, shi;
    system("cls");
    printf("Enter dividend : ");
    scanf("%d", &Q);
    printf("Enter divisor : ");
    scanf("%d", &M);
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
    x = pow(10, n + 1);
    y = pow(10, n - 1);
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