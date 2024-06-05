/*Mirza Mohibul Hasan*/
/*CSE-19@JUST*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double

#define scl(n) scanf("%lld", &n)
#define scd(n) scanf("%lf", &n)
#define prl(n) printf("%lld\n", n)
#define prd(n) printf("%lf\n", n)
#define prc(ch) printf("%c\n", ch)
#define prs(s) printf("%s\n", s)
#define print(in) cout << in << "\n"
#define py() cout << "YES" << "\n"
#define pn() cout << "NO" << "\n"
#define nl "\n"
#define deb(x) cout << #x << "=" << x << '\n'

#define pl pair<ll, ll>
#define pb push_back
#define mp make_pair
#define uu first
#define vv second

#define forn(i, n) for (ll i = 0; i < n; i++)
#define FORN(i, n) for (ll i = 1; i <= n; i++)
#define forab(i, a, b) for (ll i = a; i < b; i++)
#define FORAB(i, a, b) for (ll i = a; i <= b; i++)

#define sorted(s) sort(s.begin(), s.end())
#define reversed(s) reverse(s.begin(), s.end())
#define contains(a, b) (find((a).begin(), (a).end(), (b)) != (a).end())

#define MAXN 10004
#define pi acos(-1)
#define mod 1000000007
#define eps 0.0000000001
#define inf 9000000000000000
#define mstt(a, b) memset((a), (b), sizeof(a))

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989

#define fast_run ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fast_run;

    // Initializing a pair
    pair<ll, ll> p;

    p.first = 40;   // Setting the first element
    p.second = 100; // Setting the second element

    // Initializing a vector of pairs
    vector<pair<ll, ll>> v;

    v.push_back(p); // Adding the pair to the vector
    // Vector v now contains: {(40, 100)}

    p.first = 30;   // Changing the first element of the pair
    p.second = 120; // Changing the second element of the pair

    v.push_back(make_pair(30, 120)); // Adding a new pair to the vector using make_pair
    // Vector v now contains: {(40, 100), (30, 120)}

    // Displaying elements of the vector
    cout << v[0].first << " " << v[0].second << endl; // Output: 40 100
    cout << v[1].first << " " << v[1].second << endl; // Output: 30 120

    // Example: Sorting the vector of pairs

    sort(v.begin(), v.end());
    // Vector v after sorting: {(30, 120), (40, 100)}

    cout << "Sorted pairs:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl; // Output: 30 120, 40 100
    }

    // Initializing a vector of nested pairs
    vector<pair<long long, pair<long long, long long>>> v2;

    v2.push_back(make_pair(40, make_pair(100, 0))); // Adding a nested pair
    // Vector v2 now contains: {(40, (100, 0))}

    // Displaying the nested pair
    cout << v2[0].first << " " << v2[0].second.first << " " << v2[0].second.second << endl; // Output: 40 100 0

    // Adding more nested pairs
    v2.push_back(make_pair(30, make_pair(120, 1))); // Adding another nested pair
    v2.push_back(make_pair(50, make_pair(110, 2))); // Adding another nested pair
    // Vector v2 now contains: {(40, (100, 0)), (30, (120, 1)), (50, (110, 2))}

    // Displaying all nested pairs
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i].first << " " << v2[i].second.first << " " << v2[i].second.second << endl;
        // Output: 40 100 0
        //         30 120 1
        //         50 110 2
    }
    // Complexity:
    // - Push: O(1)
    // - Pop: O(1)
    // - Top: O(1)
    return 0;
}