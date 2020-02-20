#include <stdio.h>

void text();
void input_1_text();
void input_2_text();

int input_numero(int *input);
int decision(int *interrutore_1,int *interrutore_2);

void lampadina_accesa_text();
void lampadina_spenta_text();
void fine();

int main()
{
    int input_a;
    int input_b;
    text();
    input_1_text();
    input_numero(&input_a);
    input_2_text();
    input_numero(&input_b);
    decision(&input_a,&input_b);
    /*
    void lampadina_accesa_text();
    void lampadina_spenta_text();
    */
    fine();



    return 0;
}



int decision(int *interrutore_1,int *interrutore_2)
{
    //*interrutore_1
    //*interrutore_2
    if(*interrutore_1 == 0)
    {
        /*Vero*/
        if(*interrutore_2 == 0)
        {
            /*Vero*/
            lampadina_spenta_text();
            //lampadina_accesa_text();
        }
        else
        {
            /*Falso*/
            //lampadina_spenta_text();
            lampadina_accesa_text();
        }
        
    }
    else
    {
        /*Falso*/
          if(*interrutore_2 == 0)
        {
            /*Vero*/
            //lampadina_spenta_text();
            lampadina_accesa_text();
            //lampadina_spenta_text();
        }
        else
        {
            /*Falso*/
            //lampadina_accesa_text();
            lampadina_spenta_text();
        }
    }
    
}






void fine()
{
	printf("FINE \n");
}
void text()
{
    printf("Porta logica XOR (Exclusive OR) \n");
    printf("Inserire 1 per interruttore acceso \n e 0 per interruttore spento. \n");
}
void input_2_text()
{
    printf("Inserisci valore 'interrutore 2' \n");
}
void input_1_text()
{
    printf("Inserisci valore 'interrutore 1' : \n");
}
int input_numero(int *input)
{
    int num;
    scanf("%d", &num);
    *input = num;
}
void lampadina_accesa_text()
{
    printf("Lampadina Accesa \n");
}
void lampadina_spenta_text()
{
    printf("Lampadina Spenta \n");
}
