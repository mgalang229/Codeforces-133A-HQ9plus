#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	bool ok=0;
	for(char c : s)
		if(c=='H'||c=='Q'||c=='9')
			ok=1;
	cout << (ok?"YES":"NO") << "\n";
}
