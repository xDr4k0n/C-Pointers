#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void text_start();
void text_input_numero();
int input_numero(int*input);
int copy_input(int *vuoto , int *pieno);
int divisione_func(int *risultato_da_salvare,int *numero_da_dividere);
int modulo_func(int *risultato_da_salvare,int *numero_da_dividere);
int text_output(int*dec);

int main()
{
    int divisione;
    int decimale;
    int decimale_originale;
    char binario[20];
    int calcolo;
    int i = 0;
    int i2 = 0;
    bool condition = true;
    
    text_start();
    text_input_numero();
    input_numero(&decimale_originale);
    // primo vuoto , secondo pieno----------------------->>
    copy_input(&decimale, &decimale_originale);
    //printf("Test copia : %d \n", decimale);
    while (condition != false)
    {
        divisione_func(&divisione,&decimale);
        // test  printf("divisione :%d \n", divisione);
        modulo_func(&calcolo, &decimale);
        //test  printf("Modulo :%d \n", calcolo);
        if (calcolo == 0)
        {
            /*Vero*/
            binario[i] = '0';
        }
        else
        {
            /*falso*/
            binario[i] = '1';
        }
        copy_input(&decimale,&divisione);
        if (decimale == 0)
        {
            /*Vero*/
            condition = false;
        }
        else
        {
            /*falso*/
            condition = true;
        }
        //TEST   printf("%c \n", binario[i]);
        i=i+1;
    }
    i = i - 1;
    condition = true;
    text_output(&decimale_originale);
    while(condition == true)
    {
        printf("%c", binario[i]);
        if (i2 != i)
        {
            /* Vero */
            condition = true;
        }
        else
        {
            condition = false;
            break;
            /* Falso */
        }
        
        i = i - 1;
    }
    printf("\n FINE");
    return 0;
}

int text_output(int *dec)
{
    printf("Il tuo numero Decimale e : %d \n" , *dec);
    printf("Il tuo decimale in binario e : ");
}
int modulo_func(int *risultato_da_salvare,int *numero_da_dividere)
{
    *risultato_da_salvare = *numero_da_dividere % 2;
}

int divisione_func(int *risultato_da_salvare,int *numero_da_dividere)
{
    *risultato_da_salvare = *numero_da_dividere / 2;
}
int copy_input(int *vuoto , int *pieno)
{
    *vuoto = *pieno;
}
int input_numero(int*input)
{
    int numero;
    scanf("%d", &numero);
    *input = numero;
}
void text_input_numero()
{
    printf("Inserisci valore desiderato : \n");
}
void text_start()
{
    printf("Algoritmo che transforma Numeri Decimali (Base 10) in Binario (Base 2) \n");
}
