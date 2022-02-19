#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> wlut{
	5, 3, 4, 4, 4,
	4, 4, 4, 4, 4 };

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string line;
	cin >> line;
	while ("0" != line) {
		auto len = line.length();

		auto ans = 1;
		for (int i = 0; i < len; ++i) {
			ans += wlut[line[i] - '0'];
		}

		cout << ans << '\n';

		cin >> line;
	}

	return 0;
}