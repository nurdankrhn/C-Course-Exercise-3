#include <stdio.h>
#define cube(n)		((n) * (n) * (n))
double somayaji_pi(int n);

int main() {
	
	int n;
	
	printf("n: ");
	scanf("%d", &n);
	
	printf("Pi = %f", somayaji_pi(n));
	
	return 0;
}

double somayaji_pi(int n) {
	
	double pi = 3;
	int i, val; 
	for(i = 1, val = 3; i <= n; i++, val +=2) {
		(i % 2) == 0 ? (pi -= (double)4 / ( cube(val) - val)) : (pi += (double)4 / ( cube(val) - val));
	}
	
	return pi;
}
