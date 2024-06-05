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

    // A set is an associative container that contains a sorted set of unique objects of a specific type.
    // It stores elements in sorted order and ensures that each element is unique.

    // Initializing a set of integers
    set<int> s;

    // Adding elements to the set
    s.insert(40);
    s.insert(30);
    s.insert(50);
    s.insert(20);
    // Set s now contains: {20, 30, 40, 50}

    // Displaying elements of the set
    cout << "Values after adding elements:" << nl;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << nl;
    // Output: 20 30 40 50

    // Adding more elements to the set
    s.insert(30); // Duplicates are automatically ignored
    s.insert(60);
    // Set s now contains: {20, 30, 40, 50, 60}

    // Displaying elements of the set after adding duplicates
    cout << "Values after adding duplicates:" << nl;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << nl;
    // Output: 20 30 40 50 60

    // Removing an element from the set
    s.erase(30);
    // Set s now contains: {20, 40, 50, 60}

    // Displaying elements of the set after removing an element
    cout << "Values after removing an element:" << nl;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << nl;
    // Output: 20 40 50 60

    // Complexity of set operations:
    // - Insertion: O(log n) average case, O(n) worst case
    // - Deletion: O(log n)
    // - Search: O(log n)

    return 0;
}