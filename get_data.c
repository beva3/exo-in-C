#include <stdio.h>
void get_data(int *n1,int *n2);
void print_data(int n1, int n2);

/**
 * void get_data(int *n1,int *n2) :
 *      void : la focnction ne return aucune valeur
 *      get_data : nom de la fonction 
 *      int *n1, int *n2 : parametre de la fonction :
 *          des poiteur vers des intiers
 *      
 *      cela implique, c'est que : det_data peut modifier les caleurs des entiers
 *      poinetee par n1 et n2 directement, car elle recoit lesur adress memoir
 * 
 *      alaina aiza : mitaky adress 
 */

int main(){

    int n1 = 0, n2 = 0;

    get_data(&n1,&n2);
    print_data(n1,n2);


    return 0;
}

void print_data(int n1, int n2){    // arg : name's variable
    printf("Print data ... :\n");
    printf("n1 = %d\n",n1);
    printf("n2 = %d\n",n2);
}

void get_data(int *n1,int *n2){     // arg : variable's address
    int a = 20,
        b = 39;

    printf("Get data ...\n");

    *n1 = a;
    *n2 = b;
}


/**
 * void get_data(int *n1,int *n2);
 *      arg ADRESS :
 *          Omeo rano itsy olona itsy : < manondro exact DIRECT
 * 
 * void print_data(int n1, int n2);
 *      arg : NAME :
 *          omeo rano ny olona, ...???? marina ve ??,
 *          INDIRECT, COPIE
 *          FAIRE LA COPIE PUIS D'AFFICHER DATA
 *          
 */