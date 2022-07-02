#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct facultad{
    char apellido[20];
    char nombre[20];
    char sexo;
    int ci,fec_nac,anio_ingreso;
};
typedef struct facultad alumno;


int main(){
    FILE *fd, *re;
    alumno datos[500];
    int i=0,t1,t5,t6,anio;
    int dd,aa,mm,d,a,m;
    char t2[20], t3[20], t4;
    char direccion[20];
    printf("ingrese el nombre del archivo: ");
    scanf("%s",direccion);
    char direccion2[]="reporte.txt";
    fd=fopen(direccion,"r");
    re=fopen(direccion2,"w");
    while (!feof(fd)) {
        fflush(stdin);
        fscanf(fd,"%d\t%s\t%s\t%c\t%d\t%d\n",&t1,t2,t3,&t4,&t5,&t6);
        datos[i].ci = t1;
        strcpy(datos[i].apellido,t2);
        strcpy(datos[i].nombre,t3);
        datos[i].sexo=t4;
        datos[i].fec_nac = t5;
        datos[i].anio_ingreso = t6;
        i++;
    }
    printf("\n");
    int cont=i;
    for(i=0;i<cont;i++){
        printf("%d\t%s\t%s\t%c\t%d\t%d\n",datos[i].ci,datos[i].apellido,datos[i].nombre,datos[i].sexo,datos[i].fec_nac,datos[i].anio_ingreso);
    }
    printf("Ingrese la fecha de referencia: ");
    scanf("%d",&anio);
    printf("\n\n--se genero reporte--\n\n");
    dd = anio % 100;
    mm = (anio / 100) % 100;
    aa = (anio / 100) / 100;
    int edad,m1=0,f1=0,total1=0,m2=0,f2=0,total2=0,m3=0,f3=0,total3=0;
    int m4=0,f4=0,total4=0,m5=0,f5=0,total5=0,m6=0,f6=0,total6=0,menor=100,indice;
    for(i=0;i<cont;i++){
        if(datos[i].anio_ingreso>=2008){
            a = (datos[i].fec_nac / 100) / 100;
            edad=aa-a;
            if(edad<18){
                if(datos[i].sexo== 'M'){
                    m1++;
                }else{
                    f1++;
                }
                if(menor>edad){
                    menor=edad;
                    indice=i;
                }
                total1++;
            }else if(edad>=18 && edad<21){
                 if(datos[i].sexo== 'M'){
                    m2++;
                }else{
                    f2++;
                }
                total2++;
            }else if(edad>=21 && edad<25){
                 if(datos[i].sexo== 'M'){
                    m3++;
                }else{
                    f3++;
                }
                total3++;
            }else if(edad>=25 && edad<=30){
                 if(datos[i].sexo== 'M'){
                    m4++;
                }else{
                    f4++;
                }
                total4++;
            }else{
                 if(datos[i].sexo== 'M'){
                    m5++;
                }else{
                    f5++;
                }
                total5++;
            }
        }
    }
        fprintf(re,"Franja\t\tM\tF\tTotal\n");
        fprintf(re,"--------------------------------------\n");
        fprintf(re,"<18\t\t%d\t%d\t%d\n",m1,f1,total1);
        fprintf(re,"18-20\t\t%d\t%d\t%d\n",m2,f2,total2);
        fprintf(re,"<21-24\t\t%d\t%d\t%d\n",m3,f3,total3);
        fprintf(re,"25-30\t\t%d\t%d\t%d\n",m4,f4,total4);
        fprintf(re,">30\t\t%d\t%d\t%d\n",m5,f5,total5);

        fprintf(re,"El alumno mas  joven es:\n");
        fprintf(re,"CI:%d\nApellido:%s\n",datos[indice].ci,datos[indice].apellido);
        fprintf(re,"Nombre:%s\nSexo:%c\n",datos[indice].nombre,datos[indice].sexo);
        fprintf(re,"Fecha nacimiento:%d\nAnio de ingreso:%d\n",datos[indice].fec_nac,datos[indice].anio_ingreso);

        printf("El alumno mas  joven es:\n");
        printf("CI:%d\nApellido:%s\n",datos[indice].ci,datos[indice].apellido);
        printf("Nombre:%s\nSexo:%c\n",datos[indice].nombre,datos[indice].sexo);
        printf("Fecha nacimiento:%d\nAnio de ingreso:%d\n",datos[indice].fec_nac,datos[indice].anio_ingreso);
        fclose(re);
        fclose(fd);
return 0;
}
