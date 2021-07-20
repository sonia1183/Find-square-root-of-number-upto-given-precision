/*
*Program which compute the square roor of a number without using any inbuilt function.
*/

#include<stdio.h>

//Function to computer square root of the number.
float square_root(int n)
{
	int s = 0, l = n;
	int mid;
	
	//variable to store the answer
	float res=0.0;
	
	while (s <= l) {
		mid = (s + l) / 2;
		//if its equal
		if (mid * mid == n) {
			res = mid;
			break;
		}
		//for right side
		if (mid * mid < n) {
			s = mid + 1;
			res = mid;
		}
		//for left side
		else {
			l = mid - 1;
		}
	}

	return res;
}

//Drive main function
int main()
{
        //Declare number and take value for number.
        int num;
        printf("Enter a number ");
        scanf("%d",&num);
    
        //Declare precision and take value for precision.
        int p;
        printf("Enter a precision ");
        scanf("%d",&p);
	 
	//Function calling 
        float res=square_root(num);
	
	//For computing fractional part of square root upto given presion
        float k = 0.1;
	for (int i = 0; i < p; i++) {
		while (res * res <= num) {
			res += k;
		}

		res = res - k;
		k = k / 10;
	}
	
	//print the result
        printf("%0.*f",p,res);
	return 0;
}
