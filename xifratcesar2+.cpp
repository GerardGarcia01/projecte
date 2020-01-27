#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char cadena[200];
int desp, i;



scanf("%s",cadena);

desp=strlen(cadena);


for(i=0;i<strlen(cadena);i++){	//hace un bucle de posicion de cadena
	if(cadena[i]>='a' && cadena[i]<='z'){ //si la cadena esta entre a y la z
		if(cadena[i]+desp>'z') //si la cadena es mas grande que z
			cadena[i]=cadena[i]-(('z'+1)-'A'); // cadena es igual a la cadena pero si supera la z que le reste la a
	        cadena[i]=cadena[i]+desp; // cadena es igual a cadena pero sumando desp que es 3
	}else{
		//lo mismo que antes pero con mayusuculas
		if(cadena[i]>='A' && cadena[i]<='Z'){ 
			if(cadena[i]+desp>'Z')
				cadena[i]=cadena[i]-(('Z'+1)-'a');
	       	cadena[i]=cadena[i]+desp;        
		}else{
	// si no introduce un caracter de antes que printe error
			printf("ERROR!!!\n");
			}
		}
	}
	//print la cadena
	printf("%s", cadena);
}
