#include <stdio.h> 
#include <stdlib.h> 
#define DIM_F 20  
#define DIM_C 18   
int M[20][18]; 
int S[18];  
int COLVAL[18]; 
//int V[]; 
int f,c,i, valido,dim_v, elemento;  
  
int IntroduceMatriz (int M[20][18], int f, int c);  
int VisualizaMatriz(int M[20][18], int c, int f, int S[18]);  
int Igual (int M[20][18],  int c);  

  
int main () {  
  IntroduceMatriz(M,f,c);
  VisualizaMatriz(M,f,c,S);
  
    //VERIFICA  COLUMNA y calcula dimension del vector
    i=0; 
	for (c=0; c<DIM_C; c++) { 
	 	COLVAL[c]=0 ; 
		for (f=0; f<DIM_F; f++) {  
          if ( M[f][c] > S[c] ){
          	COLVAL[c]=1; 
          }
        }   	
        if  (COLVAL[c]==0) { 
		   Igual ( M, c);   	   
	       dim_v = dim_v+DIM_F;	  
	    }       
	 
    }  			
				
	
	int V[dim_v]; 
	i=0; 
	for (c=0; c<DIM_C; c++) { 

	  if  (COLVAL[c]==0) {
		for (f=0; f<DIM_F; f++) {  
            	V[i]=M[f][c]; 
            	i=i+1; 	  
          }
        }  
	  }	

    
    printf ("\nVECTOR RESULTANTE \n");  
  
    for (i=0; i< dim_v; i++) { 
  		printf ("%i  ", V[i]);  
	}

  return 0;  
} 

  
int IntroduceMatriz (int M[20][18], int f, int c) {  
    for (f=0; f<DIM_F; f++) {  
        for (c=0; c<DIM_C; c++) {  
            M[f][c]=rand()%90+10;   
        }  
		
    } 
 
    
      
}  
  
int VisualizaMatriz (int M[20][18], int f, int c,int S[18]) { 
    printf ("\n MATRIZ GENERADA\n");  
 
    for (f=0; f<DIM_F; f++) {  
        for (c=0; c<DIM_C; c++) {  
           S[c]=S[c]+ M[f][c];
            printf ("%i  ",M[f][c]);  
        } printf ("\n");  
    }

	for (c=0; c<DIM_C; c++) {  
           S[c]=S[c]/DIM_F;  
           S[c]=S[c]*2;
 	}
    printf ("\n ----------------------------\n");    
 
}

int Igual (int M[20][18], int c) { 
   
  
    int ff,j;

    int val=0; 
    for (j=0; j<DIM_C; j++) { 
        
	    if  (j != c ) {
	    	val=1; 
            for (ff=0; ff<DIM_F; ff++) { 
               if ( M[ff][j] != M[ff][c] ) {
				  val=0; 
				  return 0; }
			}
			 
		}
		
		}
       
    return val; 
      
}  

