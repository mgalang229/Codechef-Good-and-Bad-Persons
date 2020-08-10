#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n, k;
	cin >> n >> k;
	char s[100];
	for(int i = 0; i < n; ++i) {
		cin >> s[i];
	}
	int c = 0, b = 0;
	for(int i = 0; i < n; ++i) {
		if(islower(s[i])) c++;
		else b++;
	}
	if(c <= k && b <= k) cout << "both";
	else if(b <= k) cout << "chef";
	else if(c <= k) cout << "brother";
	else cout << "none";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
