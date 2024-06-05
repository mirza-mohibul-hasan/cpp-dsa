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
    // / Initializing a list of integers
    list<int> li;

    // Adding elements to the list
    li.push_back(10); // [10]
    li.push_front(5); // [5, 10]
    li.push_back(15); // [5, 10, 15]
    li.push_front(2); // [2, 5, 10, 15]

    // Displaying elements of the list
    cout << "Elements in the list:" << endl;
    for (auto it = li.begin(); it != li.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // Output: 2 5 10 15

    // Inserting elements at a specific position
    auto it = li.begin();
    advance(it, 2);   // Move iterator 'it' two positions ahead
    li.insert(it, 7); // [2, 5, 7, 10, 15]

    // Displaying elements of the list after insertion
    cout << "Elements after insertion:" << endl;
    for (auto it = li.begin(); it != li.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // Output: 2 5 7 10 15

    // Removing elements from the list
    li.pop_front(); // Remove first element
    li.pop_back();  // Remove last element
    // After popping: [5, 7, 10]

    // Displaying elements of the list after removal
    cout << "Elements after removal:" << endl;
    for (auto it = li.begin(); it != li.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // Output: 5 7 10

    // Complexity of list operations:
    // - Insertion (at the beginning or end): O(1)
    // - Insertion (at a specific position): O(n)
    // - Deletion (at the beginning or end): O(1)
    // - Deletion (at a specific position): O(n)
    // - Accessing elements by index: Not supported (no random access)

    return 0;
}