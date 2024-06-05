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

    // Initialize a queue of integers
    queue<int> q;

    // Push elements into the queue
    q.push(5);  // Queue: [5]
    q.push(10); // Queue: [5, 10]
    q.push(20); // Queue: [5, 10, 20]
    q.push(40); // Queue: [5, 10, 20, 40]
    q.push(80); // Queue: [5, 10, 20, 40, 80]

    // Output the front and back elements of the queue
    cout << "Front " << q.front() << nl; // Output: Front 5
    cout << "Back " << q.back() << nl;   // Output: Back 80

    print("Iteration");
    // Iterate through the queue and print elements until it is empty
    while (!q.empty())
    {
        // Print the front element
        print(q.front());

        // Remove the front element
        q.pop();
    }
    // The queue is now empty

    // Additional queue operations
    q.push(15); // Queue: [15]
    q.push(25); // Queue: [15, 25]

    // Check the size of the queue
    print("Queue size: " + to_string(q.size())); // Output: Queue size: 2

    // Clear the queue
    while (!q.empty())
    {
        q.pop();
    }

    // Check if the queue is empty
    if (q.empty())
    {
        print("Queue is empty"); // Output: Queue is empty
    }

    // Complexity:
    // - Push: O(1)
    // - Pop: O(1)
    // - Front: O(1)
    // - Back: O(1)
    return 0;
}