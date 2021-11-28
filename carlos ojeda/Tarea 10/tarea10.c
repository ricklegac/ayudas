#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct persona{
	int ci;
	char nombre[20],apellido[20];
	char sexo[2];
	char fn[10];
	int ingreso;	
};
struct comprobar{
	int M;
	int F;
	int suma;
};
void substring(char s[], char sub[], int p, int l);
typedef struct persona alum;
typedef struct comprobar franja;
int main(){
	franja total[5]={0};
	alum alumno[20];
//	alum menor;
	int menor;
	FILE *fp, *fr;
	char fichero[20];
	printf("ingrese el nombre del archivo a ser leido:\n");
	gets(fichero);
	fp=fopen(fichero,"r");
	fr=fopen("reporte.txt","w+");
	fprintf(fr,"Franja\t\tM\tF\tTotal\n---------------------------------------\n");
	if(fp==NULL){
		printf("no pudo abrirse el archivo!");
		exit(1);
	}
	int i=0,ban=1,menorano,menormes,menordia;
	//char string;
	while(!feof(fp)){
		char ano[10],mes[5],dia[5];
		fscanf(fp,"%d\t%s\t%s\t%s\t%s\t%d\n",&alumno[i].ci,alumno[i].apellido,alumno[i].nombre,alumno[i].sexo,alumno[i].fn,&alumno[i].ingreso);
		printf("%d\t%s\t%s\t%s\t%s\t%d\n",alumno[i].ci,alumno[i].apellido,alumno[i].nombre,alumno[i].sexo,alumno[i].fn,alumno[i].ingreso);
		substring(alumno[i].fn, ano, 1, 4);
		substring(alumno[i].fn, mes, 5, 2);
		substring(alumno[i].fn, dia, 7, 2);
		int anoatoi=atoi(ano);
		int mesatoi=atoi(mes);
		int diaatoi=atoi(dia);
		if(ban==1){
			menorano=anoatoi;
			menordia=diaatoi;
			menormes=mesatoi;
			ban=0;
		}
		if(alumno[i].ingreso>=2015){
			if(anoatoi>menorano){
				if(mesatoi>menormes){
					if(diaatoi>menordia){
						menor=i;
					}
				}
			}	
		}
		
		if((2021-anoatoi)<18){
			if(strcmp(alumno[i].sexo,"M")==0){
				total[0].M++;
			}else{
				total[0].F++;
			}
			total[0].suma++;
		}else if((2021-anoatoi)>=18 && (2021-anoatoi)<20){
			if(strcmp(alumno[i].sexo,"M")==0){
				total[1].M++;
			}else{
				total[1].F++;
			}
			total[1].suma++;
		}else if((2021-anoatoi)>=20 && (2021-anoatoi)<24){
			if(strcmp(alumno[i].sexo,"M")==0){
				total[2].M++;
			}else{
				total[2].F++;
			}
			total[2].suma++;
		}else if((2021-anoatoi)>=24 && (2021-anoatoi)<30){
			if(strcmp(alumno[i].sexo,"M")==0){
				total[3].M++;
			}else{
				total[3].F++;
			}
			total[3].suma++;
		}else if((2021-anoatoi)>=30){
			if(strcmp(alumno[i].sexo,"M")==0){
				total[4].M++;
			}else{
				total[4].F++;
			}
			total[4].suma++;
		}
		i++;
	}
	for(i=0;i<5;i++){
		if(i==0) fprintf(fr,"<18");
		if(i==1) fprintf(fr,"18-20");
		if(i==2) fprintf(fr,"21-24");
		if(i==3) fprintf(fr,"25-30");
		if(i==4) fprintf(fr,">30");
		fprintf(fr,"\t\t%d\t%d\t%d\n",total[i].M,total[i].F,total[i].suma);
	}
	fprintf(fr,"---------------------------------------");
	fprintf(fr,"\nAlumno mas joven despues del ingreso 2015: \n %s %s ",alumno[menor].nombre,alumno[menor].apellido);
	fclose(fp);
	fclose(fr);

	return 0;
	
}
void substring(char s[], char sub[], int p, int l) {
   int c = 0;
   while (c < l) {
      sub[c] =s[p+c-1];
      c++;
   }
   sub[c] = '\0';
   
}
