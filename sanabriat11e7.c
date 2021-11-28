#include<stdio.h>
#include<stdlib.h>
struct bd{
	int ac;
	char tp[2];
	char msn[2];
};
int mostFrequent(int arr[], int n);
typedef struct bd paciente;
int main(){
	paciente pers[100];
	char fichero[30];
	int arr[100];
	float N=0,A=0,total=0;
	FILE *fp;
	printf("ingrese nombre del archivo:\n");
	gets(fichero);
	fp=fopen(fichero,"r");
	int i=0;
	if(fp==NULL){
		printf("file open error");
		exit(1);
	}
	while(!feof(fp)){
		fscanf(fp,"%d , %s , %s\n",&pers[i].ac,pers[i].tp,pers[i].msn);
		printf("%d %s %s\n",pers[i].ac,pers[i].tp,pers[i].msn);
		if(strcmp(pers[i].tp,"N")==0){
			N++;
			arr[i]=pers[i].ac;
		}else{
			A++;
			arr[i]=pers[i].ac;
		}
		i++;
	}
	
	
	printf("anho con mas consultas: %d\n",mostFrequent(arr,i)); 
	printf("mayores: %.2f\ninhos:%.2f\n",A,N);

	return 0;
}
/*geeks4geeks*/
int mostFrequent(int arr[], int n){
	int swap,c,i,d;
    for (c = 0 ; c < n - 1; c++){
    	for (d = 0 ; d < n - c - 1; d++){
      		if (arr[d] > arr[d+1]) {
        		swap       = arr[d];
        		arr[d]   = arr[d+1];
       		 	arr[d+1] = swap;
      		}
    	}
	}
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
    if (curr_count > max_count){
        max_count = curr_count;
        res = arr[n - 1];
    }
    return res;
}

