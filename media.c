#include<stdio.h>


int main(int argc, char ** argv ){


	float  nota1,nota2,media;
	scanf("%f %f",&nota1,&nota2);
	media = (nota1+nota2)/2;

	if(media >=7.0){
		printf("Aluno aprovado!\n");
	}else{
		printf ("Aluno em recuperação!\n");

	return 0;
	}
}
