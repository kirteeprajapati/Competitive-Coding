#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, inp;
	cin>>n;
	set <int> s;
	while(n--){
	    cin>>inp;
	    s.insert(inp);
	}
	cout<<s.size();
	return 0;
}
