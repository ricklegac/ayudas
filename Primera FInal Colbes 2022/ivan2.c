#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
    char* morse;
    char* ascii;
} tabla_morse;

void decode(char texto[100]){
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

    char* segment;
    segment = strtok(texto, " ");
	int i, b=0, c=0, d=0;
	char output[100]="";
    while(segment)
    {
        for(i=0; i<12; ++i)
        {
            if (!strcmp(segment, tabla[i].morse)){
            	strcat(output,tabla[i].ascii);	
				b=1;
			}
        }
        if(b==0){
        	strcat(output,"X");
		}
        segment = strtok(NULL, " ");
	}
	printf("\nOutput: %s", output);
	for(i=0;i<33;i++){
		if(texto[i] != '.' && texto[i] != '-' && texto[i] != 32){
			d=1;	
		}
	}
	
	if(d==1){
		printf("\n: %c%c%c %c%c %c La linea no es valida...", output[0],output[1],output[2],output[3],output[4],output[5],output[6]);
	}else{
		if(output[0]=='Z' && output[1]=='P' && output[2]=='6'){
			printf("\n %c%c%c %c%c %c 'GuaraniSat-1'", output[0],output[1],output[2],output[3],output[4],output[5],output[6]);
		}else{
			printf("\n %c%c%c, %c%c, %c", output[0],output[1],output[2],output[3],output[4],output[5],output[6]);
		}	
	}
}

int main(){
	
	FILE *archivo;
	int i=0, j=0, k=0;
	char c;
	char nombre[100], p1[10], p2[10], p3[10], p4[10], p5[10], p6[10];
	printf("\nIngrese el nombre del archivo: ");
	scanf("%s",nombre);
	archivo = fopen(nombre, "r");
	if(archivo == NULL){
		printf("\n Error al leer el archivo texto.txt.\n");
		return(0);
	}
	
	char texto[100] = "";
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
		k++;
		strcat(texto,p1);
		strcat(texto," ");
		strcat(texto,p2);
		strcat(texto," ");
		strcat(texto,p3);
		strcat(texto," ");
		strcat(texto,p4);
		strcat(texto," ");
		strcat(texto,p5);
		strcat(texto," ");
		strcat(texto,p6);
		strcat(texto," ");
		printf("\nInput: %s\n",texto);
		decode(texto);
		texto[0]='\0';
	}

}