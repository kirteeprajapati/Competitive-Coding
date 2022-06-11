#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define li long int
#define ff(i, a, b) for (int i = a; i < b; i++)
#define fb(i, b, a) for (int i = b; i >= a; i--)
#define w(t) while (--t >= 0)
#define l(s) s.length()
#define ci(n) cin >> n;
#define fast ios_base::sync_with_stdio(false);
#define sa(a, n) sort(a, a + n)
#define sv(v) sort(v.begin(), v.end())
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define nl cout << "\n"
#define minus cout << "-1\n";
#define vi vector<int>
#define pb push_back
#define tc \
    int t; \
    cin >> t;
#define pp pair<int, int>
#define input(a, n)             \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define mod 1000000007
#define co(n) cout << n;
#define ret return 0
#define mi map<int, int>
#define output(a, n)            \
    for (int i = 0; i < n; i++) \
        cout << a[i] << " ";
#define forn(i, n) ff(i, 0, n)
#define sz(v) int((v).size())

#include <bits/stdc++.h>
using namespace std;

void printVecInt(vector<int> v_print_int)
{
    cout << "size:" << v_print_int.size() << endl;
    for (int i = 0; i < v_print_int.size(), i++)
    { //.size()  O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
void printVecString(vector<string> v_print_string)
{
    cout << "size:" << v_print_string.size() << endl;
    for (int i = 0; i < v_print_string.size(), i++)
    { //.size()  O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    pair<int, string> &p;
    p1 = make_pair(1, "abc");
    p2 = {2, "def"};                      //O(N)
    pair<int, string> &p_duplicate = p1; // to assign by reference use "&" else there will be no change in actual array
    cout << p1.first << " " << p2.second << endl;
    p_duplicate.first = 3;
    cout << p1.first << " " << p2.second << endl;
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    cin >> p_array[4];
    cout << p_array[4];

    int a[10];
    vector<int> v_int;
    vector<pair<int, int>> v_pair;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        printVecInt(v_print_int);
        v_int.push_back(x); // O(1)
    }

    printVecInt(v_print_int);
    
    vector<int> V(5);
    V.push_back(7);   // at 6 th position
    V.pop_back();        //O(1)

    vector<int> V2=V;  //copy of V so no changes will be reflected.

    vector<string> V_string;
    printVecString(V_string);
    return 0;
}
// Continous memory allocation declared locally size 10**5
// and if done globally- 10**7