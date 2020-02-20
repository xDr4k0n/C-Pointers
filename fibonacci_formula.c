#include <stdio.h>

void text();
int text2(int *formula_stampata);
int input_numero(int *input);
int copy(int *recipiente,int *copiatore);
int sommatore_piu_due_numeri(int *recipiente, int *num1,int *num2);
void text_numero_volte_formula_aplicata();

int main()
{
    int i;
    int valore;
    int aiuto;
    int sommatore;
    int contatore;
    valore = 1;
    aiuto = 0;
    i = 0;
    //start ------------------>>
    text();
    text_numero_volte_formula_aplicata(); //contatore
    input_numero(&contatore);
    //printf("%d \n", contatore);
    for(;i < contatore;i = i + 1)
    {
        sommatore_piu_due_numeri(&sommatore, &aiuto, &valore);
        //printf("sommatore ris %d \n", sommatore);
        //printf("valore %d \n", valore);
        //printf("aiuto %d \n", aiuto);
        copy(&aiuto ,&valore);
        copy(&valore ,&sommatore);
    }
    text2(&valore);
    return 0;
}


int text2(int *formula_stampata)
{
    printf("Formula aplicata in base alle volte inserite da il seguente risultato : \n");
    printf("%d", *formula_stampata);
}

int sommatore_piu_due_numeri(int *recipiente, int *num1,int *num2)
{
    *recipiente = *num1 + *num2;
}

int copy(int *recipiente,int *copiatore)
{
    *recipiente = *copiatore;
}
int input_numero(int *input)
{
    int num;
    scanf("%d", &num);
    *input = num;
}

void text_numero_volte_formula_aplicata()
{
    printf("Inserisci numero di volte che vuoi aplicare la formula di Fibonacci : \n");
}
void text()
{
    printf("Algoritmo che applica la formula di Fibonacci! \n");
    printf("L'Algoritmo aplica la formula di Fibonacci in base a \n quante volte desideri! \n");

}
