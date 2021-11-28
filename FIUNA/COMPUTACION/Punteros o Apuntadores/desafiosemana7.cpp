#include<iostream>
using namespace std;
//funcion para validar los valores m y n
int verificar(void);
int main()
{
      float temp1,k;
      int i, j,m,n;
      cout<<"Ingrese dos valores m y n para las dimensiones de una matriz A[m][n] respectivamente \n\n ";
      m=verificar();
      n=verificar();
      cout<<" Ahora ingrese las componentes de su matriz \n";
      // Ingresando elementos de la matriz
      float A[m][n];
      for(i=0;i<m;i++)
      {
                      for(j=0;j<n;j++)
                      {
                                      cin>>A[i][j];
                      }
      }
      //Impresion de matriz ingresada
      cout<<" La matriz que ingreso es : \n";
                    for(i=0;i<m;i++)
                    {
                                    for(j=0;j<n;j++)
                                                    {
                                                                   cout<<A[i][j]<<"  ";
                                                    }
                                    cout<<"\n";
                    }
      //Caso en que el numero de filas sea impar
      if(int(m)%2!= 0)
      {
                    cout<<" La matriz buscada es : \n\n";
                    //utilizo los punteros para ordenar
                    float *p1 , cont1=0;
                    p1 = &A[0][0];
                    //ordenacion de la parte superior
                    for(k=0;k<int(m*n);k++)
                    {
                    for(i=0;i<n*((m-1)/2)-1;i++)
                    {
                                              if(*(p1+i)>*(p1+i+1))
                                              {
                                                                   temp1=*(p1+i);
                                                                   *(p1+i)=*(p1+i+1);
                                                                   *(p1+i+1)=temp1;
                                              }
                    }
                    }
                    //ordenacion de la parte inferior
                    for(k=0;k<int(m*n);k++)
                    {
                    for(j=int(((m+1)/2)*n);j<int(m*n)-1;j++)
                    {
                                                 if(*(p1+j)<*(p1+j+1))
                                              {
                                                                   temp1=*(p1+j);
                                                                   *(p1+j)=*(p1+j+1);
                                                                   *(p1+j+1)=temp1;
                                              }
                    }
                    }
                    //impresion de la matriz buscada
                    for(i=0;i<m;i++)
                    {
                                    for(j=0;j<n;j++)
                                                    {
                                                                   cout<<A[i][j]<<"  ";
                                                    }
                                    cout<<"\n";
                    }
      }
      else
      //Caso en que el numero de filas es PAR
      {
                    cout<<" La matriz buscada es : \n\n";
                    //utilizo los punteros para ordenar
                    float *p2 , cont2=0;
                    p2 =&A[0][0];
                    //ordenacion de la parte superior
                    for(k=0;k<int(m*n);k++)
                    {
                                       for(i=0;i<n*m/2-1;i++)
                                                           {
                                                             if(*(p2+i)>*(p2+i+1))
                                                                                  {
                                                                                      temp1=*(p2+i);
                                                                                     *(p2+i)=*(p2+i+1);
                                                                                      *(p2+i+1)=temp1;
                                                                                   }
                                                           }
                    }
                    //ordenacion de la parte inferior
                    for(k=0;k<int(m*n);k++)
                    {
                    for(i=int((m*n/2)+1)-1
                    ;i<int(n*m);i++)
                    {
                                              if(*(p2+i)<*(p2+i+1))
                                              {
                                                                   temp1=*(p2+i);
                                                                   *(p2+i)=*(p2+i+1);
                                                                   *(p2+i+1)=temp1;
                                              }
                    }
                    }
                    //Impresion de la matriz
                    for(i=0;i<m;i++)
                    {
                                    for(j=0;j<n;j++)
                                                    {
                                                                   cout<<A[i][j]<<"  ";
                                                    }
                                    cout<<"\n";
                    }
      }
      cout<<"\n\n";
      system("pause");
}  
//funcion de verificar
int verificar()
{float v;
      cin>>v;
      while(int(v)!=v ||v<0)
      {
                      cout<<" Error, ingrese otro numero \n";
                      cin>>v;
      }
      return int(v);
}
