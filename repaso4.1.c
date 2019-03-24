#include <stdio.h>
int factorial(int uno);
int main(){
	int a, b;
	printf("Introduzca el numero cuyo factorial quieres saber:\n");
	scanf("%d", &a);
	b= factorial(a);
	printf("El resultado del factorial es: %d \n", b);
}
int factorial(int uno){
	int i, result;
	result = 1;
	for(i=uno; i>0; i--){
	   result= result*i;
	}
	return result;
}
