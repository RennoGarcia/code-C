#include<stdio.h>


int main(int argc, char ** argv ){
	int x,y;
	scanf("%d", &x);
	scanf("%d", &y);

	S = soma(x,y);
	printf("Soma é %d\n", S);
	return 0;
}


int soma(int a, int b){
	int s;
	s = a+b;	
	return s;
}
