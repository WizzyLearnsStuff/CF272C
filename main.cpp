#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<long long int> a(n);
	for (long long int &e : a) cin >> e;

	int m; 
	cin >> m;
	// Observation 1: All boxes dropped will cause the first stair's heigh to change
	// always.
	for (int i = 0; i < m; i++) {
		int w, h;
		cin >> w >> h;
		if (a[0] >= a[w - 1]) {
			cout << a[0] << '\n';
			a[0] += h;
		}
		else {
			cout << a[w - 1] << '\n';
			a[0] = a[w - 1] + h;
		}
	}
	return 0;
}
