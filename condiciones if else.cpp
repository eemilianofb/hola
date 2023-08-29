//condiciones if else (solo una de las dos se pueden cumplir)

#include <stdio.h>

int main(){

	if (5 > 3 && 10 < 10)
{
printf("instruccion fuera de if %d\n");
}
else
{
	printf("instruccion dentro de else\n");
}
printf("instruccion fuera de if-else\n");

return 0;
}
