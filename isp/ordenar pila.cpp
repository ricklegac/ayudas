#include <stdio.h> 
#include <conio.h> 
struct t_pila{ 
int tope; 
int valores[10]; 
}; 
int menu(); 
void inicializar(t_pila mi_pila); 
void apilar(t_pila mi_pila,int a); 
void retirar(t_pila mi_pila,int r); 
void ordenar(t_pila mi_pila); 
int pila_vacia(t_pila mi_pila); 
int pila_llena(t_pila mi_pila); 
int existe(t_pila mi_pila,int search); 
int cuantoshay(t_pila mi_pila); 

int main(void) 
{int k=0; 
int m,b,re; 
t_pila datos; 
while(k==0) 
{m=menu(); 
if (m==1) 
{inicializar(datos);} 
if (m==2) 
{printf("No. a guardar "); 
scanf("%d",&b); 
apilar(datos,b); 
} 
if (m==3) 
{retirar(datos,re); 
} 
if (m==4) 
{ordenar(datos);} 
if (m==0) 
{k =1;} 
} 
return(0); 
} 
int menu() 
{int c; 
printf("1. Inicializar\n"); 
printf("2. Apilar\n"); 
printf("3. Retirar\n"); 
printf("4. Ordenar\n"); 
printf("0. Salir\n"); 
scanf("%d",&c); 
return(c); 
} 

void inicializar(t_pila mi_pila) 
{mi_pila.tope = -1; 
} 
void apilar(t_pila mi_pila, int a) 
{mi_pila.tope++; 
mi_pila.valores[mi_pila.tope]=a; 
} 
void retirar(t_pila mi_pila, int r) 
{r = mi_pila.valores[mi_pila.tope]; 
mi_pila.tope = mi_pila.tope-1; 
} 
void ordenar(t_pila mi_pila) 
{struct t_pila temp; 
struct t_pila orden; 
int m,a; 
inicializar(temp); 
inicializar(orden); 
while (pila_vacia(mi_pila)==0) 
{retirar(mi_pila,m); 
while(pila_vacia(mi_pila)==0) 
{retirar(mi_pila,a); 
if (a>m) 
{apilar(temp,m); 
m=a;} 
else 
{apilar(temp,a); 
} 
} 
apilar(orden,m); 
while(pila_vacia(temp)==0) 
{retirar(temp,a); 
apilar(mi_pila,a); 
} 
} 
while(pila_vacia(orden)==0) 
{retirar(orden,a); 
apilar(mi_pila,a); 
} 
} 
int pila_vacia(t_pila mi_pila) 
{if (mi_pila.tope == -1) 
{return(1);} 
else 
{return(0);} 
} 
int pila_llena(t_pila mi_pila) 
{if (mi_pila.tope == 9) 
{return(1);} 
else 
{return(0);} 
} 
int existe(t_pila mi_pila,int search) 
{int i =0; 
int k = 0; 
while((i<=mi_pila.tope)&&(k==0)) 
{if (mi_pila.valores[i]==search) 
{k=1; 
} 
i++; 
} 
return(k); 
} 
int cuantoshay(t_pila mi_pila) 
{return(mi_pila.tope+1); 
} 
