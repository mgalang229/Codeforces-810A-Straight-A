#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	// calculate the current average grade
	int avg = round((double) sum / n);
	// if the average is less than k, then
	// keep on adding k (best score) in the total sum
	// and check if the average is still less than k
	int cnt = 0;
	while (avg < k) {
		sum += k;
		n++;
		avg = round((double) sum / n);
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
