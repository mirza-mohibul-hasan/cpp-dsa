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

    // Initializing a multiset of integers
    multiset<int> ms;

    // Adding elements to the multiset
    ms.insert(40);
    ms.insert(30);
    ms.insert(50);
    ms.insert(20);
    // Multiset ms now contains: {20, 30, 40, 50}

    // Adding more elements to the multiset
    ms.insert(30); // Duplicates are allowed in multiset
    ms.insert(60);
    // Multiset ms now contains: {20, 30, 30, 40, 50, 60}

    // Displaying elements of the multiset
    cout << "Values in the multiset:" << endl;
    for (auto it = ms.begin(); it != ms.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // Output: 20 30 30 40 50 60

    // Removing an element from the multiset
    ms.erase(30); // Removes both occurrence of 30
    // Multiset ms now contains: {20, 40, 50, 60}

    // Displaying elements of the multiset after removing an element
    cout << "Values after removing an element from multiset:" << endl;
    for (auto it = ms.begin(); it != ms.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // Output: 20 40 50 60

    // Complexity of multiset operations:
    // - Insertion: O(log n)
    // - Deletion: O(log n)
    // - Search: O(log n)Q

    return 0;
}