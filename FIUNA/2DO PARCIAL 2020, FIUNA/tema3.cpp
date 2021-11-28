#include<iostream>
#include<cstring>
#include<iostream>
using namespace std;
void codificar(char mensaje[], char mensajeCod[],int cod[] ){
	int i,j,x=0;
	char mat[10][10];
	for(i=strlen(mensaje);i<100;i++){
		mensaje[i]='*';
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			mat[i][j]=mensaje[x];
			x++;
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	x=0;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			mensajeCod[x]=mat[j][cod[i]];
			x++;
		}
	}
//	int longitud=strlen(mensaje);
//	cout<<mensaje<<endl;
//	cout<<longitud;
}
//Puede implementar la función codificar() aquí o debajo del main()/

int main(){
	int cod[10];
	int i;
    char mensaje[101] = "LA CRIPTOGRAFIA ES LA CIENCIA DE CIFRAR Y DESCIFRAR MENSAJES USANDO TECNICAS MATEMATICAS"; //mensaje original
    char mensajeCod[111]; //contendrá el mensaje codificado
	printf("ingrese el codigo:\n");
	for(i=0;i<10;i++){
		cin>>cod[i];
	}
	int cont=0;
	for(i=1;i<10;i++){
		if(cod[i]==cod[i-1]+1){
			cont++;
		}
	}
	//verificamos si esta ordenado ascendentemente
	if(cont==9){
		printf("el codigo esta ordenado ascendentemente, no valido");
		return 1;
	}
    //Aquí se debe llamar a la función codificar/
	codificar(mensaje,mensajeCod,cod);
	


    //Visualización del mensaje codificado/
    cout<<"\nEl mensaje codificado es:\n";
    cout<<mensajeCod<<endl;
    return 0;
}
