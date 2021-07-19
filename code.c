#include<stdio.h>
float square_root(int n)
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

	return res;
}


int main()
{
    int num;
    scanf("%d",&num);
    int p;
    scanf("%d",&p);
    float res=square_root(num);
    float k = 0.1;
	for (int i = 0; i < p; i++) {
		while (res * res <= num) {
			res += k;
		}

		res = res - k;
		k = k / 10;
	}
    printf("%0.*f",p,res);
	return 0;
}
