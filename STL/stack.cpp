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

    // Initialize a stack of integers
    stack<int> st;

    // Push elements onto the stack
    st.push(5);  // Stack: [5]
    st.push(10); // Stack: [5, 10]
    st.push(20); // Stack: [5, 10, 20]
    st.push(40); // Stack: [5, 10, 20, 40]
    st.push(80); // Stack: [5, 10, 20, 40, 80]

    // Access the top element of the stack
    int x = st.top(); // Top element is the last pushed: 80
    print(x);         // Output: 80

    cout << "POPED" << nl;

    // Remove the top element
    st.pop(); // Stack after pop: [5, 10, 20, 40]

    // Access the new top element
    x = st.top(); // New top element is now 40
    print(x);     // Output: 40

    // Iterating through the stack by popping elements
    print("Iteration");
    while (!st.empty())
    {
        print(st.top()); // Print the current top element
        st.pop();        // Remove the current top element
    }
    // The stack is now empty

    // Complexity:
    // - Push: O(1)
    // - Pop: O(1)
    // - Top: O(1)
    return 0;
}