#include <iostream>
using namespace std;


float square_root(int n, int pre)
{
	int s = 0, l = n;
	int mid;
	float res;
	while (s <= l) {
		mid = (s + l) / 2;
		if (mid * mid == n) {
			res = mid;
			break;
		}
		if (mid * mid < n) {
			s = mid + 1;
			res = mid;
		}
		else {
			l = mid - 1;
		}
	}

	float k = 0.1;
	for (int i = 0; i < pre; i++) {
		while (res * res <= n) {
			res += k;
		}

		res = res - k;
		k = k / 10;
	}
	return res;
}


int main()
{
    int num;
    cin>>num;
    int p;
    cin>>p;
	cout << square_root(num,p) << endl;
	return 0;
}
