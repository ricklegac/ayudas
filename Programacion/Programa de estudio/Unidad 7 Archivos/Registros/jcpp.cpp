#include <stdio.h>
#include <stdlib.h>
struct clientDatos{
    int acctNum;
    char lastName[15];
    char fistName[15];
    float balance;
};
main(){
    
    FILE *cFPrt;
    int usuario;
    struct clientDatos client;
    printf("Ingrese el usuario a leer: ");
    scanf("%d", &usuario);
    if ((cFPrt= fopen("clientes.txt", "r"))== NULL)
        printf("Archivo no pudo ser abierto");
    else {
        printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");
        
      // while(!feof(cFPrt)){  
            fseek(cFPrt, (usuario-1) * 
                     sizeof(struct clientDatos),SEEK_END);                 
            fread(&client, sizeof(struct clientDatos), 1, cFPrt);
            if (client.acctNum !=0)
                printf("%-6d%-16s%-11s%10.2f\n",
                       client.acctNum, client.lastName, client.fistName, client.balance);
         
       //}
    }
    fclose(cFPrt);
    system("pause");
    return 0;
}
