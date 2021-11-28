#include<stdio.h>
#include<string.h>
struct persona{
    int seccion;
    char apellido[20];
    float nota;
};
typedef struct persona alumno;
void agregar(alumno clase[],int pos){
    printf("Apellido: ");
    scanf("%s",clase[pos].apellido);
    printf("Seccion: ");
    scanf("%d",&clase[pos].seccion);
    printf("Nota : ");
    scanf("%f",&clase[pos].nota);
}
void ordenar(alumno clase[],int pos){
    int i,j;
    int temp=0,temp2=0;
    char temp1[20];
    for (i=1;i<pos;i++){
        for (j=0; j < pos-i ;j++){
            if (clase[j].seccion > clase[j+1].seccion){
                temp=clase[j].seccion;
                clase[j].seccion=clase[j+1].seccion;
                clase[j+1].seccion=temp;
                strcpy(temp1,clase[j].apellido);
                strcpy(clase[j].apellido,clase[j+1].apellido);
                strcpy(clase[j+1].apellido,temp1);
                temp2=clase[j].nota;
                clase[j].nota=clase[j+1].nota;
                clase[j+1].nota=temp2;
            }
        }
    }
}
void ver_registro(alumno clase[],int pos){
    int i;
    for(i=0 ; i<pos ; i++){
        fflush( stdin );
        printf("Apellido: %s",clase[i].apellido);
        printf("Seccion: %d",clase[i].seccion);
        printf("Nota: %f",clase[i].nota);
    }
}
void bublesort(alumno clase[],int pos){
    int i,j,x=0;
    int temp=0,temp2=0;
    char temp1[20];
    for (i=1;i<pos;i++){
        for (j=0; j < pos-i ;j++){
            if (clase[j].nota < clase[j+1].nota){
                temp=clase[j].seccion;
                clase[j].seccion=clase[j+1].seccion;
                clase[j+1].seccion=temp;
                strcpy(temp1,clase[j].apellido);
                strcpy(clase[j].apellido,clase[j+1].apellido);
                strcpy(clase[j+1].apellido,temp1);
                temp2=clase[j].nota;
                clase[j].nota=clase[j+1].nota;
                clase[j+1].nota=temp2;
            }
        }
    }
}

int main(){
    alumno clase[20];
    int opcion,pos=0;
    char identificacion[5];
    do{
        printf("Agregar alumno          \t\t(1) \n");
        printf("Ordenar por seccion     \t\t(2)\n");
        printf("Ver alumnos             \t\t(3)\n");
        printf("Ordenar por calificacion\t\t(4)\n");
        printf("para salir pulse        \t\t(0)\n");
        printf("eliga opcion: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1 : 
                agregar(clase,pos); 
                pos++;
                break;
            case 2 : 
                ordenar(clase,pos); 
                break;
            case 3 : 
                ver_registro(clase,pos);
                fflush(stdin);
                break;
            case 4: 
                bublesort(clase,pos);
                break;

        }
        
    }while(opcion!=0);
return 0;
}







