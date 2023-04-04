#include <stdio.h>
#define cube(n) ((n)*(n)*(n))

int is_armstrong(int val);
void print_armstrongs(int n);

int main() {
	
	int n;
	
	while(1){
		
		printf("Number (Enter 0 to break the loop) : ");
		scanf("%d", &n);
		
		if(n==0)
			break;
		
		if(is_armstrong(n))
			printf("%d is an armstrong!\n", n);
		else
			printf("%d is NOT an armstrong!\n", n);
	}
	
	printf("Enter a number that you want to have a list of armstrong numbers up to: ");
	scanf("%d", &n);
	
	printf("1-%d Amstrong numbers: \n", n);
	print_armstrongs(n);
	
	return 0;
}

int is_armstrong(int val) {
	
	int temp_val = val, cube_sum = 0;
	while(temp_val != 0) {
		cube_sum += cube((temp_val % 10));
		temp_val /= 10;
	}
	
	if(cube_sum == val)
		return 1;
	
	return 0;
	
}

void print_armstrongs(int n) {
	int i;
	
	for(i = 1; i <= 1000; i++) {
		if(is_armstrong(i))
			printf("%d\n", i);
	}
}
