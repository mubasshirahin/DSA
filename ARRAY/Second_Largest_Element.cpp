#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------------------------------------------------------------*/

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

#define fl(i,n) for(int i=0;i<n;i++)
#define fla(a,n) for(int i=a;i<n;i++)
#define rfl(i,n,m) for(int i=n;i>=m;i--)
#define grumpyonion() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

using ll = long long;
using dl = double;

const double pi = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000LL;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

int gcd(int a, int b) { if (a == 0) return b; else return gcd(b % a, a); }
int lcm(int a, int b) { return abs(a * b) / gcd(a, b); }
int maxThree(int a, int b, int c) { return (a >= b && a >= c) ? a : (b >= c) ? b : c; }
bool isPrime(ll n) { if (n <= 1) return false; if (n <= 3) return true; if (n % 2 == 0 || n % 3 == 0) return false; for (int i = 5; i * i <= n; i += 6) if (n % i == 0 || n % (i + 2) == 0) return false; return true; }

void printArr(int arr[], int size) { fl(i, size) cout << arr[i] << " "; cout << endl; }
void printVec(vector<int> v) { for (int x : v) cout << x << " "; cout << endl; }

/*-----------------------------------------------------------------------------------------------------------*/

int main() {
    grumpyonion();

    int arr[7] = {1,9,3,67,23,45,2};

    int maxi = INT_MIN;
    int secMaxi = INT_MIN;

    for(int i=0;i<7;i++){
        if(maxi < arr[i]){
            secMaxi = maxi;
            maxi = arr[i];
        }
        else if(secMaxi < arr[i] && arr[i]!=maxi){
            secMaxi = arr[i];
        }
    }
    cout << secMaxi << endl;

    return 0;
}

/*
maxi and second maxi duita kei INT_MIN dye init korsi.
ekhon pura array ke traverse korbo and dekhbo je maxi theke boro kono man ase naki arr[i] te.
jodi thake taile maxi = arr[i].
but but but maxi ke update korar age secMaxi = maxi kore dite hbe cz amra second maxi bair korbo.
again,emon o hoite pare je first elemnt ei maxi..sekhetre maxi ar kokhonoi update hbe na as a result amra secondMaxi o pabo na.
So amader arekta condition add korte hbe jekhane amra check korbo je arr[i] > secMaxi theke boro naki..obv maxi theke boro 
na dekhei else if condition e asche..so jodi arr[i] secmaxi theke boro hoile secMaxi ke update korbo.ekhane && dye etaw check korte hbe je
suppose there are duplicates in the array..taile [10,20,10,20]..ekhane max 20 hbe and secmaxi = 10 hbe..but ei duplicate er comdition
alada kore handle na korle error dbe.maxi and secMaxi duitai 20 dekhbae..so amra check korbo je arr[i]!=max hoite hbe..tailei secMax update korbo.

*/