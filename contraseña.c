#include <stdio.h>

int main()
{
	int i, a;
	printf("Introduzca la contraseña:\n");
	scanf("%d", &a);
	while(i>0){
	   i--;
	   if(a== 4567){
		printf("Bienvenido al sistema.\n");
		return 0;
	   }
	   else{
		if(a>4567){
		   printf("La contraseña introducida es mayor que la correcta, introduzcala de nuevo:\n");
		   scanf("%d", &a);
		}
		else{
		   printf("La contraseña introducida es menor que la correcta, introduzcala de nuevo:\n");
		   scanf("%d", &a);
		}
	   }
	}
	 if(a== 4567){
		printf("Bienvenido al sistema.\n");
	 }
	 else{
	      if(a>4567){
		   printf("La contraseña introducida es mayor que la correcta, el sistema se ha bloqueado");
		}
		else{
		   printf("La contraseña introducida es menor que la correcta, el sistema se ha bloqueado");
		}
	   }
	   return 0;
}
