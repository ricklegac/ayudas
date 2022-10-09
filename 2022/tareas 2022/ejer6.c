#include<stdio.h>
#define salir 100
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void ordenar_vector(int *arr,int n){
	int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void eliminar_repetidos(int vec[], int tam){
	int i,j,k;
	for(i = 0; i < tam; i++)
	{
		for(j = i+1; j < tam; j++)
		{
			if(vec[i] == vec[j])
			{
 
				k = j;
 
				while(k < tam)//Mientras k sea menor que la cantidad de elementos
				{
					vec[k] = vec[k+1];//Copiará el elemento siguiente, 
 
					//Ejemplo en posición 1 copiará el valor de la posición la dos, y en la dos la tres y así sucesivamente.
 
					++k;//Aumentamos el contador k en 1
				}
 
				--tam;//Disminuimos el tamaño del vector ya que se eliminaron elementos repetidos.
				--j;
 
				/* --j
				 * 
				 * Disminuimos  el valor de j para verificar si el elemento que se copió ahí es igual al anterior.
				 * 
				 * Ejemplo: vec[] ={1,2,2,3,4}
				 * 
				 * Cuando llegue a la  comparación 2==2 moverá el 3 a la posición del 2 repetido, si no disminuimos
				 * el contador en la próxima comparación comparará 2 == 4, y no con el 3, porque si 3 hubiese
				 * sido otro 2 lo saltaría y no lo eliminaría.
				 * */
 
			}//Fin del if
 
		}//Fin del bucle for con j
 
	}//Fin del bucle for con i
 
	printf("\nVector final: ");
	//Mostrar  vector final
	for(i = 0; i < tam; i++)
	{
		printf("%i, ",vec[i]);
	}  
}
void elementos_comunes(int d[],int e[],int m){
	int x=0, c[m],k=0,count,i,j;
	int a[m], b[m];
	for(i=0;i<m;i++){
		a[i]= d[i];
		b[i]= e[i];
	}
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(a[i]==b[j])
            {
		        count = 0;
		        for(x=0; x<k; x++)
		        {
		            if(a[i]==c[x])
		                count++;
		        }
		        if(count==0)
		        {
		            c[k] = a[i];
		            k++;
		        }
			}
		}
	}
	printf("elementos comunes: \n");
	for(i=0; i<k; i++)
        printf("%d ", c[i]);
    //B
    int pos;
    int cont=0;
    for(i=0;i<m;i++){
		for(j=0;j<k;j++){
			if(a[i]==c[j]){
				a[i]=salir;
			}
		}
	}
	printf("\nen A y no en B: \n");
	for(i=0;i<m;i++){
		if (a[i]!=salir) printf("%d ",a[i]);
	}
	//C
	for(i=0;i<m;i++){
		for(j=0;j<k;j++){
			if(b[i]==c[j]){
				b[i]=salir;
			}
		}
	}
	printf("\nen B y no en A: \n");
	for(i=0;i<m;i++){
		if (b[i]!=salir) printf("%d ",b[i]);
	}
}

int main(){
	printf("ingrese M: ");
	int m;
	scanf("%d",&m);
	printf("ingrese los elementos del vector A: \n");
	int i;
	int a[m],b[m];
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	printf("ingrese los elementos del vector B: \n");
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	elementos_comunes(a,b,m);
	printf("\nA: ");
	ordenar_vector(a,m);
	eliminar_repetidos(a,m);
	printf("\nB: ");
	ordenar_vector(b,m);
	eliminar_repetidos(b,m);
	
	
	
	
	return 0;
}