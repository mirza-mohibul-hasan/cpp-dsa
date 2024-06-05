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
    unordered_set<int> us;

    // Adding elements to the unordered set
    us.insert(5);
    us.insert(10);
    us.insert(15);
    us.insert(20);
    us.insert(10); // Duplicate elements are ignored
    // Unordered set us now contains: {5, 10, 15, 20}

    // Displaying elements of the unordered set
    cout << "Values in the unordered set:" << endl;
    for (auto it = us.begin(); it != us.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // Output: 20 15 10 5

    // Checking if an element exists in the unordered set
    if (us.find(10) != us.end())
    {
        cout << "Element 10 is present in the unordered set." << endl;
    }
    else
    {
        cout << "Element 10 is not present in the unordered set." << endl;
    }
    // Output: Element 10 is present in the unordered set.

    // Complexity of unordered set operations:
    // - Insertion: Average case O(1), Worst case O(n)
    // - Deletion: Average case O(1), Worst case O(n)
    // - Search: Average case O(1), Worst case O(n)

    return 0;
}