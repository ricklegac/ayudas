//Lucas Valdez, mi compañera de grupo es Andrea Cuellar
//El compilador que use es DevC++
 #include <iostream>
 using namespace std;

int main() {
    int f,c,i,j,b;
    int cap[6];
    int imp [7]={0,0,0,0,0,0,0};
    int imp1[7];
    int M[6][7];   
   
    //Ingresa los datos por teclado
      for(int c=0; c<7;c++){
        cout<<"Ingrese los valores para la columna: " << c+1 << endl;
    	for(int f=0;f<6;f++){
            cin >> M[f][c] ;
            //cout <<"\t "; 
        }
     }
    
    
     for(int f=0;f<6;f++){
         cout << endl ; 
        for(int c=0; c<7;c++){
           cout<< M[f][c] << "\t"; 
        }
        }
        
        
    for(int c=0; c<7;c++){   //recorre por columna
        // obtiene capicua para comparar
         j=5;
         cout << endl << endl; 
         for(int i=0;i< 6;i++){
                cap[i] = M[j][c];
                j=j-1; 
                //cout << cap[i] << "\t"; 
        }
        for (int j=c+1; j<7;j++){  // recorre las demas columnas
        b=0;
        for(int f=0;f<6;f++){
                     
            if ( M[f][j] != cap[f] ) 

                b=1; 
            
        }  // fin fila
        
        if (b==0) {
           if (imp[c]==0){ 
           		cout << endl <<" Columna: " << c+1 <<endl;
           		imp[c]=1; 

           		for(int i=0;i<6;i++){
               	 cout << M[i][c] << "\t";
                 imp[c]=imp[c]+1; 	 
            	}
         	}
            cout << endl <<"Es capicua con columna " << j+1 <<endl;
            
          
            	for(int i=0;i<6;i++){
                	cout << M[i][j] << "\t";
        	 }
           
	   }   // fin if b==0
	}  // fin demas columnas
	   
    }  // fin columna
       return 0;
}
