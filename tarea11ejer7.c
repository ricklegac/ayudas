#include<stdio.h>
#include<stdlib.h>
#define max 100
struct csalud{
	int aconsult;
	char tipopa[2];
	char medic[2];
};
int mostFrequent(int arr[], int n);
typedef struct csalud persona;
int main(){

	persona pers[max];
	char fichero[30];
	int vec[max];
	float ninos=0,adultos=0,total=0;
	FILE *fp;
	printf("Ingrese el nombre del archivo base de datos:\n");
	gets(fichero);
	fp=fopen(fichero,"r");
	int i=0;
	if(fp==NULL){
		printf("No se encontro el archivo!");
		exit(1);
	}
	while(!feof(fp)){
		fscanf(fp,"%d , %s , %s\n",&pers[i].aconsult,pers[i].tipopa,pers[i].medic);
		printf("%d %s %s\n",pers[i].aconsult,pers[i].tipopa,pers[i].medic);
		if(strcmp(pers[i].tipopa,"N")==0){
			ninos++;
			vec[i]=pers[i].aconsult;
		}else{
			adultos++;
			vec[i]=pers[i].aconsult;
		}
		i++;
	}
	
	
	printf("año con mas consultas: %d\n",mostFrequent(vec,i)); 
	printf("mayores: %.2f%\nniños:%.2f%\n",adultos,ninos);
	//printf("Anho con mas consultas: %d ",popular);
	return 0;
}
int mostFrequent(int arr[], int n)
{
	int swap,c,i,d;
      for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
}
 
    // find the max frequency using linear traversal
    int max_count = 1, res = arr[0], curr_count = 1;
    for ( i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
 
    // If last element is most frequent
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }
 
    return res;
}

