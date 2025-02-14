#include <stdio.h>
#include <math.h>

#define ll long long

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}

ll solve(ll x, ll y, ll z, ll n)
{
    ll tmp = lcm(lcm(x, y), z);
    ll m = (ll)pow(10, n - 1);
    ll res = (m + tmp - 1) / tmp * tmp;
    if (res < (ll)pow(10, n))
        return res;
    else return -1;
}

int main()
{
    ll x, y, z, n;
    scanf("%lld%lld%lld%lld", &x, &y, &z, &n);

    printf("%lld \n",solve(x, y, z, n));
    return 0;
}
