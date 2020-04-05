#include <iostream>
#include <deque>
using namespace std;
class p {
public:
	int price;
	int num;
};
int main()
{
	int n, m;
	cin >> n >> m;
	deque <p> d;
    int ans = 0;
	for (int i = 1; i <= n; i++){

		int price;
		if (!d.empty() &&i - d.front().num >= m)
			d.pop_front();

		cin >> price;
		while (!d.empty() && (d.back().price >= price))
			d.pop_back();
    
		d.push_back({ price,i });
		ans += d.front().price;

	}
	cout << ans;
	return 0;
}