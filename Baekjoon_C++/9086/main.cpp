#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		cout << s.at(0) << s.at(s.size() - 1) << endl;
	}
	return 0;
}