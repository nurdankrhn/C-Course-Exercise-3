#include <stdio.h>
#include <math.h>

double newton_pi(int k);
double factorial(int n);

int main() {
	
	int k;
	
	printf("k: ");
	scanf("%d", &k);
	
	printf("Pi = %f", newton_pi(k));
	
	return 0;
}

double newton_pi(int k) {
	
	int i;
	double pi = 0;
	
	for(i = 0; i <= k; i++) {
		pi += (double)(pow(2, (i + 1)) * pow(factorial(i),2)) / (factorial(2*i + 1));
	}
	
	return pi;
}

double factorial(int n) { //faktöriyel fonksiyonunun türünün double olmasının sebebi pow fonksiyonunun parametre olarak double değer alması  -> double pow(double a, double b); : a^b
	int i;
	double fact = 1.0;
	
	for(i = 2; i <= n; i++)
		fact *= i;
	
	return fact;
}
