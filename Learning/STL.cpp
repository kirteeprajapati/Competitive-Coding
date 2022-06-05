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