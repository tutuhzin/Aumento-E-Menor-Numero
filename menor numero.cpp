#include <stdio.h>

int main(){
	
	int a,b,c;
	int menor;
	scanf("%d %d %d", &a, &b, &c);
	
	
	if (a < b || a < c){
		menor = a;
	}
	
	if (b < a || b < c){
		menor = b;
	}
	if (c < a || c < b){
		menor = c;
	}
	
	
	
	printf("%d", menor);
	
	
	return 0;
}
