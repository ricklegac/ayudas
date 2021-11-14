/*
	Maria Salome
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct libreria{
    int codSucc,codVend,codLB,precio;
    long int fecha;
}art;
int main(){
	FILE *pd;
	art vec[1000];
	char file[]="libreria.txt";
	int i=0,j;
	pd=fopen(file,"rt");
	if(pd==NULL)
		printf("no se pudo abrir el archivo libreria.txt\n");
	else
		printf("abriendo..\n");
	
	while (!feof(pd)){
        fflush(stdin);
        fscanf(pd,"%d\t%d\t%ld\t%d\t%d\n",&vec[i].codSucc,&vec[i].codVend,&vec[i].fecha,&vec[i].codLB,&vec[i].precio);
        i++;
    }
    printf("\n");
	int mes,c=1,tit_distintos=0,titulo1=0,titulo2=0,titulo3=0,titulo4=0;
	long int t1,t2,t3,t4;
	for(j=0 ; j<i-1 ; j++){
		mes=vec[j].fecha%100;
    	if( mes>0 && mes<4 ){
    		t1+=vec[j].precio;
    		titulo1++;
		}else if( mes>3 && mes<7 ){
			t2+=vec[j].precio;
			titulo2++;
		}else if( mes>6 && mes<10){
			t3+=vec[j].precio;
			titulo3++;
		}else if( mes>9 && mes<13 ){
			t4+=vec[j].precio;
			titulo4++;
		}
		if(c
 != vec[j+1].codSucc){
			printf("\nSucursal %d\n",c
		);
			printf("Trimestre\tTotal Gs\tTitulos Distintos\n");
			printf("1\t\t%ld\t\t%d\n",t1,titulo1);
			printf("2\t\t%ld\t\t%d\n",t2,titulo2);
			printf("3\t\t%ld\t\t%d\n",t3,titulo3);
			printf("4\t\t%ld\t\t%d\n",t4,titulo4);
			c++;
			t1=t2=t3=t4=titulo1=titulo2=titulo3=titulo4=0;
		}		
	}
return 0;
}

