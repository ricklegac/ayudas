#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
       int i, x, j;
       char *mes[4]= {"Enero", "FEBRERO", "MARZO", "ABRIL"};
       for(i=0;i<4;i++){
                        
          printf("\n%s", mes[i]);
          j=0;
             while(*(*(mes+i)+j)!='\0') {
               j++;                                                          
          } 
          printf("\n%c", *(*(mes+i)+j-1));               
       }                  
       system("pause>null");
}       
