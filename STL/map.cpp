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
    // Initializing a map of strings to integers
    map<string, int> m;

    // Adding elements to the map
    m["apple"] = 5;
    m["banana"] = 3;
    m["orange"] = 7;
    m["grape"] = 2;
    // Map m now contains: {"apple": 5, "banana": 3, "orange": 7, "grape": 2}

    // Displaying elements of the map
    cout << "Values in the map:" << endl;
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }
    // Output:
    // apple: 5
    // banana: 3
    // orange: 7
    // grape: 2

    // Accessing elements of the map
    cout << "Value of apple: " << m["apple"] << endl; // Output: 5

    // Updating elements of the map
    m["banana"] = 6; // Update the value of "banana" to 6
    // Map m now contains: {"apple": 5, "banana": 6, "orange": 7, "grape": 2}

    // Removing an element from the map
    m.erase("orange"); // Remove the element with key "orange"
    // Map m now contains: {"apple": 5, "banana": 6, "grape": 2}

    // Complexity of map operations:
    // - Insertion: O(log n)
    // - Deletion: O(log n)
    // - Search: O(log n)

    return 0;
    return 0;
}