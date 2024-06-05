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
    // Initializing an unordered map of integers to strings
    unordered_map<int, string> um;

    // Adding elements to the unordered map
    um.insert({5, "apple"});
    um.insert({3, "banana"});
    um.insert({7, "orange"});
    um.insert({2, "grape"});
    um.insert({3, "kiwi"}); // Duplicate key with value "kiwi" and key 3
    // Unordered map um now contains: {(2, "grape"), (3, "banana"), (5, "apple"), (7, "orange")}

    // Displaying elements of the unordered map
    cout << "Key-value pairs in the unordered map:" << endl;
    for (auto it = um.begin(); it != um.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }
    // Output:
    // 2: grape
    // 7: orange
    // 3: banana
    // 5: apple
    // Accessing elements of the unordered map
    cout << "Value with key 3: " << um[3] << endl;
    // Output: Value with key 3: banana

    // Checking if a key exists in the unordered map
    if (um.find(5) != um.end())
    {
        cout << "Key 5 is present in the unordered map." << endl;
    }
    else
    {
        cout << "Key 5 is not present in the unordered map." << endl;
    }
    // Output: Key 5 is present in the unordered map.

    // Complexity of unordered map operations:
    // - Insertion: Average case O(1), Worst case O(n)
    // - Deletion: Average case O(1), Worst case O(n)
    // - Search: Average case O(1), Worst case O(n)
    return 0;
}