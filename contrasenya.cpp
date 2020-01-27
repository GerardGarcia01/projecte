#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char password[100];
int t, num=0, lletra=0; //inicialitza les variables

    printf("Contrasenya: "); //printa per pantalla contrasenya
    scanf("%[^\n]", password); //fa un scanf del que hem possat nosaltres

    if(strlen(password)<8){ //si la longitud de la contrasenya es mes petit que 8 entra
        printf("La contrasenya ha de  tenir minim 8 digits.");//printa per pantalla la contrasenya es massa curta
    	}
		else{ //sino 
    		for (int n= 0; n<strlen(password); n++){ //fa un bucle de password
            	if(password[n]>='0' && password[n]<='9'){ // si la contrasenya es mes gran que 0 i mes petit que 9 entra dins
                num++; 
        	}
        	
		else if((password[n]>='a' && password[n]<='z')){ //  si la contrasenya esta entre la a i la z  entra dins
                lletra++;
       		}

    }
        if(num==0 || lletra==0){ //si les variables son igual a 0 vol dir que no ha complert lo d'abans i llavors printara el seguent
            printf("ERROR hi ha d'haver-hi numeros i lletres.");
		}
    }

}


