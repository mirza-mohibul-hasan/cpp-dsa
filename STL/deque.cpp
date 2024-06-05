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

    // Initializing a deque
    deque<int> dq;

    // Adding elements to both ends of the deque
    dq.push_front(5);  // Deque: [5]
    dq.push_back(15);  // Deque: [5, 15]
    dq.push_front(25); // Deque: [25, 5, 15]
    dq.push_front(80); // Deque: [80, 25, 5, 15]

    // Displaying the elements of the deque
    print("Elements in deque:");
    for (int elem : dq)
    {
        cout << elem << " ";
    }
    cout << nl;

    // Accessing elements from both ends
    print("Front element:");
    print(dq.front()); // Output: 80

    print("Back element:");
    print(dq.back()); // Output: 15

    // Removing elements from both ends
    dq.pop_front(); // Deque after pop_front: [25, 5, 15]
    dq.pop_back();  // Deque after pop_back: [25, 5]

    // Displaying the elements of the deque after popping
    print("Elements in deque after popping:");
    for (int elem : dq)
    {
        cout << elem << " ";
    }
    cout << nl;

    // Inserting elements at specific positions
    auto it = dq.begin() + 1;
    dq.insert(it, 100); // Deque: [25, 100, 5]

    // Displaying the elements after insertion
    print("Elements in deque after insertion:");
    for (int elem : dq)
    {
        cout << elem << " ";
    }
    cout << nl;

    // Erasing elements at specific positions
    dq.erase(dq.begin()); // Deque: [100, 5]

    // Displaying the elements after erasure
    print("Elements in deque after erasure:");
    for (int elem : dq)
    {
        cout << elem << " ";
    }
    cout << nl;

    // Clearing all elements from the deque
    dq.clear();

    // Checking if deque is empty
    if (dq.empty())
    {
        print("Deque is empty");
    }

    // Complexity:
    // - Push Front/Back: O(1)
    // - Pop Front/Back: O(1)
    // - Front/Back: O(1)
    return 0;
}