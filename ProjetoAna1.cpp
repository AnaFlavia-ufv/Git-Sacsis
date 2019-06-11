#include<stdio.h>

int soma_num(int a,int b){
	
int soma_num= a+b;	
return soma_num;
}

int subtracao(int a, int b){
	int m;
	m=a-b;
	return m;
}

int main (){
	printf("Soma dos numeros:%d", soma_num (3,4));
	printf("Subtracao dos numeros:%d\n", subtracao(5,2));
	return 0;
}


