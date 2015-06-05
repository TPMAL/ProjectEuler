#include <stdio.h>

int main(void) {
	register int i;
	register int j;
	int product;
	int temp;
	int reverse;
	int remain;
	int palindrome;
	int biggest = 0;
	for(i = 100; i <= 999; i++) {
		for(j = 100; j <= 999; j++) {
			reverse = 0;
			product = i * j;
			temp = product;
			while(temp != 0) {
				remain = temp % 10;
				reverse = reverse * 10 + remain;
				temp /= 10;
			}
			if(reverse == product) {
				palindrome = product;
				if(palindrome >= biggest) {
					biggest = palindrome;
				}
			}
		}
	}
	printf("%d\n", biggest);
	
	return 0;
}