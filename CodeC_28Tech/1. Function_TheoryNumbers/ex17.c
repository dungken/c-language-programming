#include <stdio.h>
#include <math.h>

int count(int n, int p)
{
    int ans = 0;
    for (int i = p; i <= n; i += p)
    {
        int tmp = i;
        while (tmp % p == 0)
        {
            ans++;
            tmp /= p;
        }
    }
    return ans;
}

int count2(int n, int p)
{
    int ans = 0;
    for (int i = p; i <= n; i *= p)
    {
        ans += n / i;
    }

    return ans;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, p;
        scanf("%d%d", &n, &p);
        printf("%d \n", count2(n, p));
    }

    return 0;
}