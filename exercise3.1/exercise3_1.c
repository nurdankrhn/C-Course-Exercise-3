#include <stdio.h>

void disp_crown(int n);

int main() {
	
	int n;
	
	printf("n: ");
	scanf("%d", &n);
	
	disp_crown(n);
	
	return 0;
}

void disp_crown(int n) {
	int i, j;
	int space = 2*n - 2;
	for(i = 1; i <= n; i++) { 
		// Tacın ilk kısmı
		for(j = 1; j <= i; j++) {
			printf("%d",j);
		}
		
		//Boşluk
		for(j = 1; j <= space; j++)
			putchar(' ');
		
		//Tacın orta kısmı	
		for(j = i; j > 0; j--) {
			printf("%d",j);
		}
		
		for(j = 2; j <= i; j++) {
			printf("%d",j);
		}
		
		//Boşluk
		for(j = 1; j <= space; j++)
			putchar(' ');
			
		//Tacın son kısmı		
		for(j = i; j > 0; j--) {
			printf("%d",j);
		}
		
		space-=2;
		putchar('\n');
	}
}
