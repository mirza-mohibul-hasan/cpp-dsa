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

    // Example of default priority queue (max-heap)
    print("Priority Queue Default Behaviour");
    priority_queue<int> pq;

    // Push elements into the priority queue
    pq.push(5);  // Max-heap: [5]
    pq.push(80); // Max-heap: [80, 5]
    pq.push(20); // Max-heap: [80, 5, 20]
    pq.push(10); // Max-heap: [80, 10, 20, 5]
    pq.push(40); // Max-heap: [80, 40, 20, 5, 10]

    // Access the top (maximum) element
    cout << "Top " << pq.top() << nl; // Output: 80

    // Iterating and removing elements from the max-heap
    print("Iteration Default");
    while (!pq.empty())
    {
        print(pq.top()); // Print the current top element
        pq.pop();        // Remove the current top element
    }
    // Elements are printed in descending order: 80, 40, 20, 10, 5

    // Example of priority queue with min-heap behaviour
    print("Priority Queue top is small Behaviour");
    priority_queue<int, vector<int>, greater<int>> pq2;

    // Push elements into the priority queue
    pq2.push(5);  // Min-heap: [5]
    pq2.push(80); // Min-heap: [5, 80]
    pq2.push(20); // Min-heap: [5, 80, 20]
    pq2.push(10); // Min-heap: [5, 10, 20, 80]
    pq2.push(40); // Min-heap: [5, 10, 20, 80, 40]

    // Access the top (minimum) element
    cout << "Top " << pq2.top() << nl; // Output: 5

    // Iterating and removing elements from the min-heap
    print("Iteration of Ascending");
    while (!pq2.empty())
    {
        print(pq2.top()); // Print the current top element
        pq2.pop();        // Remove the current top element
    }
    // Elements are printed in ascending order: 5, 10, 20, 40, 80

    // Example of achieving min-heap behaviour using a max-heap
    print("Priority Queue top is small Behaviour");
    priority_queue<int> pq3;

    // Push negative values to simulate min-heap using max-heap
    pq3.push(5 * -1);  // Max-heap: [-5]
    pq3.push(80 * -1); // Max-heap: [-80, -5]
    pq3.push(20 * -1); // Max-heap: [-80, -5, -20]
    pq3.push(10 * -1); // Max-heap: [-80, -10, -20, -5]
    pq3.push(40 * -1); // Max-heap: [-80, -40, -20, -5, -10]

    // Access the top element, convert back to positive
    cout << "Top " << pq3.top() * -1 << nl; // Output: 5

    // Iterating and removing elements from the simulated min-heap
    print("Iteration of Ascending");
    while (!pq3.empty())
    {
        print(pq3.top() * -1); // Print the current top element
        pq3.pop();             // Remove the current top element
    }
    // Elements are printed in ascending order: 5, 10, 20, 40, 80

    // Complexity:
    // - Push: O(log n)
    // - Pop: O(log n)
    // - Top: O(1)
    return 0;
}
