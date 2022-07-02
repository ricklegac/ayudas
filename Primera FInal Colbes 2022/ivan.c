#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*esta estructura esta sacada de stackoverflow*/
typedef struct
{
    char* morse;
    char* ascii;
} tabla_morse;
/*TABLE MORSE FUENTE: STACKOVERFLOW*/
void morse_ascii(char caracter[100]){
    tabla_morse tabla[] = { {".----", "1"},
                              {"..---", "2"},
                              {"...--", "3"},
                              {"....-", "4"},
                              {".....", "5"},
                              {"-....", "6"},
                              {"--...", "7"},
                              {"---..", "8"},
                              {"----.", "9"},
                              {"-----", "0"},
                              {"--..", "Z"},
                              {".--.", "P"}
    };
    /*conversion de morse a ascii*/
    char* segment;
    segment = strtok(caracter, " ");
	int i, b=0, c=0, d=0;
	char a_ascii[100]="";
    while(segment)
    {
        for(i=0; i<12; ++i)
        {
            if (!strcmp(segment, tabla[i].morse)){
            	strcat(a_ascii,tabla[i].ascii);	
				b=1;
			}
        }
        if(b==0){
        	strcat(a_ascii,"X");
		}
        segment = strtok(NULL, " ");
	}
	//printf("\nAscii: %s", a_ascii);
	for(i=0;i<33;i++){
		if(caracter[i] != '.' && caracter[i] != '-' && caracter[i] != 32){
			d=1;	
		}
	}

	if(d==1){
		printf("\nA ASCII: %c%c%c, %c%c, %c X", a_ascii[0],a_ascii[1],a_ascii[2],a_ascii[3],a_ascii[4],a_ascii[5],a_ascii[6]);
	}else{
        /*CON LA INFORMACION DADA SABEMOS QUE EL GUARANISAT-1 ES EL ZP6*/
		if(a_ascii[0]=='Z' && a_ascii[1]=='P' && a_ascii[2]=='6'){
			printf("\nA ASCII: %c%c%c, %c%c, %c 'Es el GuaraniSat-1'", a_ascii[0],a_ascii[1],a_ascii[2],a_ascii[3],a_ascii[4],a_ascii[5],a_ascii[6]);
		}else{
			printf("\nA ASCII: %c%c%c, %c%c, %c", a_ascii[0],a_ascii[1],a_ascii[2],a_ascii[3],a_ascii[4],a_ascii[5],a_ascii[6]);
		}	
	}
}

int main(){
	/*LECTURAS E INICIALIZACIONES*/
	FILE *archivo;
	int i=0, j=0, k=0;
	char c;
	char file[10], id1[6], id2[6], id3[6], p_b1[6], p_b2[6], endl[6];
	printf("\nIngrese el nombre del archivo: ");
	scanf("%s",file);
	archivo = fopen(file, "r");
	if(archivo == NULL){
		printf("NO SE ENCONTRO EL ARCHIVO %s", file);
        return 1;
	}
    /*LA UNICA MANERA DE SOLUCIONAR QUE LEA ; AL INGRESAR COMO STRING EL ARCHIVO ES LEYENDO
    CARACTER POR CARACTER, ES POR ESO QUE SE DECIDIO DE ESTA MANERA,
    EL CODIGO DE LA TABLA COMO FUENTE TOMAMOS LA DE STACKOVERFLOW*/
	char caracter[100] = "";
	for(i = 0 ; c != EOF ; i++){
		fscanf(archivo,"%[^;]s",id1);
		c=getc(archivo);
		fscanf(archivo,"%[^;]s",id2);
		c=getc(archivo);
		fscanf(archivo,"%[^;]s",id3);
		c=getc(archivo);
		fscanf(archivo,"%[^;]s",p_b1);
		c=getc(archivo);
		fscanf(archivo,"%[^;]s",p_b2);
		c=getc(archivo);
		fscanf(archivo,"%[^\n]s",endl);
		c=getc(archivo);
		strcat(caracter,id1);
		strcat(caracter," ");
		strcat(caracter,id2);
		strcat(caracter," ");
		strcat(caracter,id3);
		strcat(caracter," ");
		strcat(caracter,p_b1);
		strcat(caracter," ");
		strcat(caracter,p_b2);
		strcat(caracter," ");
		strcat(caracter,endl);
		strcat(caracter," ");
		printf("\n %s\n",caracter);
		morse_ascii(caracter);
		caracter[0]='\0';
	}
    /*EOF end of file */

}