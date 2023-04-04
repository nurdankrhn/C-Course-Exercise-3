#include <stdio.h>

void disp_char_pattern(int ch);

int main() {
	
	int ch;
	
	printf("Bir karakter giriniz (A-Z) : ");
	scanf("%c", &ch);
	
	if(ch - 'a' >= 0)
		disp_char_pattern(ch-32);
	else 
		disp_char_pattern(ch);
	
	return 0;
}

void disp_char_pattern(int ch) {
	
	int space = ch - 'A';
	int i,j;
	
	for(i = 'A'; i <= ch; i++) {
		for(j = space; j > 0; j--)
			putchar(' ');
		
		space--;
			
		putchar(i);
		
		for(j = 1; j <= (2*(i-'A') - 1); j++) 
			putchar(' ');
		
		if( i != 'A')
			putchar(i);
			
		putchar('\n');
	}
	
	space+=2;
	
	for(i = (ch - 1); i >= 'A' ; i--) {
		for(j = space; j > 0; j--)
			putchar(' ');
		
		space++;
			
		putchar(i);
		
		for(j = 1; j <= (2*(i-'A') - 1); j++) 
			putchar(' ');
		
		if( i != 'A')
			putchar(i);
			
		putchar('\n');
	}
	
	
}
