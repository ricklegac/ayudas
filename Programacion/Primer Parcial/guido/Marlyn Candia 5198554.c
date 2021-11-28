/*
Marlyn Andrea Candia Alderete
5198554
ICM
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int vec[20];  
	int i;
	srand(time(NULL));
	for(i=0;i<20;i++){
		vec[i]=1+rand()%10;
	} 
	int x,q,w;
	int bandera =1; //esta bandera sirve para poder ver quien juega primero
	int sum1,sum2;
	sum1=sum2,w,q=0;
	int posicion;
	int usado[20]={0};
	int vecsum1[20]={0}; //aca se guardan todos los lanzamientos, por cada uno del jugador primero en lanzar
	int vecsum2[20]={0};  //
	int c=0;
	while(sum1!=15 || sum2!=15 && c<20){ //tenemos dos jugadores y en sum1 y sum2 se acumulan sus puntajes
		if(bandera==1){ //c es un acumulador que sirve para controlar que no pase los 20 
			bandera=0; //cuando la bandera es cero ya no hace falta que se verifique quien lanzara primero
			lanzamiento();
			if(lanzamiento()){
				printf("empieza el jugador 1"); //si el lanzamiento retorna 1 juega el 1
				x=1; //la x se usa para la impresion de codigo jugador
			}else{
				printf("empieza el jugador 2"); //si retorna -1 juega el 2
				x=2;
			}
		}
		/*for(i=0;i<20;i++){
			printf(" %d ",vec[i]);
		}
		printf("\n");
		for(i=0;i<20;i++){
			printf(" %d ",usado[i]);
		}*/
		printf("\nelige jugador %d: ", x);
		scanf("%d",&posicion);
		while(posicion<0 || posicion >20){ 
			printf("posicion no valida vuelva a ingresar: \n");
			scanf("%d",&posicion);
		}
		if(usado[vec[posicion]]==0){
			usado[vec[posicion]]=1;
			//printf("vec usado posicion %d: %d, vector: %d",usado[vec[posicion]],posicion, vec[posicion]);
			sum1=lanzamiento()*vec[posicion];
			vecsum1[w]=vecsum1[w]+vec[posicion];
			w++;
			c++;
		}else{
			printf("esta posicion ya esta utilizada, elija otra:\n");
			scanf("%d",&posicion);
			usado[vec[posicion]]=1;
			sum1=lanzamiento()*vec[posicion];
			vecsum1[w]=vecsum2[w]+vec[posicion];
			w++;
			c++;
		}
		printf("elige siguiente jugador: ");
		scanf("%d",&posicion);
		if(usado[vec[posicion]]!=1){
			usado[vec[posicion]]=1;
			sum2=lanzamiento()*vec[posicion];
			vecsum2[q]=vecsum2[q]+vec[posicion];
			q++;
			c++;
		}else{
			printf("esta posicion ya esta utilizada, elija otra:\n");
			scanf("%d",&posicion);
			usado[vec[posicion]]=1;
			sum2=lanzamiento()*vec[posicion];
			vecsum2[q]=vecsum2[q]+vec[posicion];
			q++;
			c++;
		}			
}
// NO PUDE VERIFICAR QUIEN GANO POR FALTA DE TIEMPO, ALGUNAS CONDICIONES MAS Y ME SALIA
printf("%d sumo %d puntos\n y el otro jugador sumo %d puntos",x,sum1,sum2);	
	return 0;
}int lanzamiento(){
	int n=rand()%1;
	if(n){
		return 1;
	}else{
		return -1;
	}
}
