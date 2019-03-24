#include <stdio.h>
int divide(int a, int b);
int main()
{
	int x, y, z;
	printf("Introduzca un numero:\n");
	scanf("%d", &x);
	printf("Introduzca otro numero:\n");
	scanf("%d", &y);
	z= divide(x,y);
	printf("El resultado es %d\n", z);
}
int divide(int a, int b){
	int div= 0;
	while(a>=b){
	a= a-b;
	div++;
	}
	return div;
}

