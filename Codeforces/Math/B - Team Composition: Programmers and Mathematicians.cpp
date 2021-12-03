#include <iostream>
#include <list>
#include <cstring>
#include <math.h>
#include<stdio.h>
#include <sstream>
#include <string.h>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <unordered_map>
#include <stack>

using namespace std;
#define ll           long long
#define all(v)       (v).begin() , (v).end()
#define v			 vector <int>
#define vi           vector <ll>
#define vii          vector <pair<ll,ll>>
#define ii           pair<ll,ll>
#define sz(v)	     ((int)((v).size()))
#define lp(i,a,b)    for(int i=a;i<b;i++)
#define pb           push_back
#define pf           push_front
#define F            first
#define S            second
#define EPS			 1e-9
#define endl         "\n"
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007 , OO = 0x3f3f3f3f;
int dx[] = { 0 , 1 , 0 , -1 };
int dy[] = { 1 , 0 , -1 , 0 };

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}
long long power(long long a, long long  b, ll mod)
{
    if (!b)
        return 1ll;
    if (b == 1)
        return a % mod;
    long long r = power(a, b / 2ll, mod) % mod;
    if (b % 2ll)
        return ((r * (a % mod) % mod) * r) % mod;
    else
        return (r * r) % mod;

}

ll nCr(ll n, ll m)
{
    return(m == 0) ? 1 : n * nCr(n - 1, m - 1) / m;
}

bool checkDivisibility(ll n, int digit)
{
    return (digit == 0 || (digit != 0 && n % digit == 0));
}

bool allDigitsDivide(ll n)
{
    ll temp = n;
    while (temp > 0)
    {

        ll digit = temp % 10;
        if (!(checkDivisibility(n, digit)))
            return false;

        temp /= 10;
    }
    return true;
}
bool comp2(ll a, ll b)
{
    return a > b;
}

int gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int power2(int a, unsigned int n, int p)
{
    int res = 1;      // Initialize result
    a = a % p;  // Update 'a' if 'a' >= p

    while (n > 0)
    {
        // If n is odd, multiply 'a' with result
        if (n & 1)
            res = (res * a) % p;

        // n must be even now
        n = n >> 1; // n = n/2
        a = (a * a) % p;
    }
    return res;
}

// If n is prime, then always returns true, If n is
// composite than returns false with high probability
// Higher value of k increases probability of correct
// result.
bool isPrime(unsigned int n, int k)
{
    // Corner cases
    if (n <= 1 || n == 4)
        return false;
    if (n <= 3)
        return true;

    // Try k times
    while (k > 0)
    {
        // Pick a random number in [2..n-2]
        // Above corner cases make sure that n > 4
        int a = 2 + rand() % (n - 4);

        // Checking if a and n are co-prime
        if (gcd(n, a) != 1)
            return false;

        // Fermat's little theorem
        if (power2(a, n - 1, n) != 1)
            return false;

        k--;
    }

    return true;
}

vector<int> primes;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    vector<bool>prime(n + 1, true);
    
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            primes.pb(p);
}


/**************************************************/

const ll N = 1e5 + 5;


void TLE()
{
    int a, b; cin >> a >> b;
    cout << min((a + b) / 4, min(a, b)) << endl;
}

int main()
{
    init();
    int tt = 0; cin >> tt;
    while (tt--)
        TLE();
}
             

