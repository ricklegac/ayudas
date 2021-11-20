#include<stdio.h>
#include<math.h>
float DesviacionStandart(int datos[],int l); 
int main(){
	int i=0;
	int datos[30]={0};
	do{
		printf("ingrese un numero: ");
		scanf("%d",&datos[i]); //almacenamos en un vector para manipular todos los datos
		if(datos[i]==-1) //si es uno sale del ciclo y empieza a calcular en la funcion DesviacionStandart
			break;
		
		i++;
	}while(i<30);
	printf("Desviacion Standart: %.4f\n", DesviacionStandart(datos,i));
	return 0;
}
float DesviacionStandart(int datos[],int l){
    int sum = 0, media, DS = 0.0;
    int resta[l],mostrarDS[l];
    int i;
    for (i = 0; i < l; ++i) { //sumamos para luego hacer la media
        sum += datos[i];
    }
    media = sum / l; //media calculada
    for (i = 0; i < l; ++i){
    	resta[i]=datos[i]-media;
    }
    for (i = 0; i < l; ++i) { //calculamos el numerador 
    	mostrarDS[i]=pow(datos[i] - media, 2);
        DS += pow(datos[i] - media, 2);
    }
    printf("X  |  X-X`  |  (X-X`)^2\n");
    for(i=0;i<l;i++){
    	printf("%d\t%d\t%d\n",datos[i],resta[i],mostrarDS[i]);
    }
    return sqrt(DS / l); //retornamos la raiz del numerador sobre la cantidad de datos

}