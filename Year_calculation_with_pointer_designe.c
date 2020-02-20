#include <stdio.h>

void info();
void input_anno_info();
int input_anno();
int modulo_100(int *modulo,int *anno);
int modulo_4(int *modulo, int *anno);
int modulo_400(int *modulo, int *anno);

int main() 
{
	int anno_input;
    int risultato;
    info();
    input_anno_info();
	anno_input = input_anno();
	//TEST
    printf("%d \n", anno_input);
    //TEST
    
    //--------------------------------------------
    modulo_100(&risultato, &anno_input);
    //--------------------------------------------
    
    //TEST
    printf("%d \n", risultato);
    //TEST
    
    if(risultato != 0)
    {
        /*Vero*/
        printf("L'Anno inserito NON e Secolare \n");
        modulo_4(&risultato, &anno_input);

        if(risultato != 0)
        {
            /*Vero*/
            printf("L'Anno inserito NON e Bisestile ! \n");
        }
        else
        {
            /* Falso */
            printf("L'Anno inserito e Bisestile ! \n");
        }
        
    }
    else
    {
        /*Falso*/
        printf("L'Anno inserito e Secolare \n");
        modulo_400(&risultato, &anno_input);
         if(risultato != 0)
        {
            /*Vero*/
            printf("L'Anno inserito NON e Bisestile");
        }
        else
        {
            /* Falso */
            printf("L'Anno inserito e Bisestile");
        }
    }
    



    return 0;
}



int modulo_4(int *modulo, int *anno)
{
    *modulo = *anno % 4;
}


int modulo_400(int *modulo, int *anno)
{
    *modulo = *anno % 400;
}


int modulo_100(int *modulo, int *anno)
{
    *modulo = *anno % 100;
}
int input_anno()
{
	int numero;
    scanf("%d", &numero);
    return numero;
    
}
void input_anno_info()
{
    printf("Inserisci Anno da calcolare : \n");

}
void info()
{
    printf("Algoritmo che calcola l'anno Secolare & Bisestile! \n");
}
