#include <stdio.h>
int multiplica(int a, int b);
int main()
{
	int x, y, z;
	printf("Introduzca un numero:\n");
	scanf("%d", &x);
	printf("Introduzca otro numero:\n");
	scanf("%d", &y);
	z= multiplica(x, y);
	printf("El resultado es %d\n",z);
}
int multiplica(int a, int b){
	int i, mult;
	mult=0;
	for(i=b; i>0; i--){
		mult= mult+a;
	}
	return mult;
}
