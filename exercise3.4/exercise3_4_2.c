#include <stdio.h>
#include <math.h>

double bailey_borwein_plouffe_pi(int k);

int main() {
	int k;
	
	printf("k: ");
	scanf("%d", &k);
	
	printf("Pi = %f", bailey_borwein_plouffe_pi(k));
	return 0;
}

double bailey_borwein_plouffe_pi(int k) {
	double pi , a = 1.0 / 16;
	int i, b;
	
	for(i = 0; i <= k; i++) {
		b = 8 * i;
		pi += pow(a, i) * ( 4.0/(b + 1) - 2.0/(b + 4) - 1.0/(b + 5) - 1.0/(b + 6) ); 
	}
	return pi;
}
