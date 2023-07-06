#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ans = int{ 0 };
	int bf;
	int beg;
	cin >> bf;
	beg = bf;
	for (auto i = 1; i < n; ++i) {
		int x;
		cin >> x;

		if (x <= bf) {
			const auto h = bf - beg;
			if (ans < h) {
				ans = h;
			}

			beg = bf = x;
		}
		else {
			bf = x;
		}
	}

	if (beg < bf) {
		const auto h = bf - beg;
		if (ans < h) {
			ans = h;
		}
	}

	cout << ans;

	return 0;
}