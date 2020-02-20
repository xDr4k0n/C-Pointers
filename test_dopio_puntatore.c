// one(), two(); tree();
#include <stdio.h>
void due();
void tree();
void quattro();
void cinque();
int main()
{
    int primo = 1;
    int secondo = 2;
    printf("\n%d <valore> Base variabile ", primo);
    printf("\n%d <valore> Base variabile  \n", secondo);
    printf("-------------------------------------------------------------------\n");
    int *puntatore_1;
    int *puntatore_2;
    puntatore_1 = &primo;
    puntatore_2 = &secondo;
    printf("\n%d <valore> single puntatore ", *puntatore_1);
    printf("\n%d <valore> single puntatore \n", *puntatore_2);
    printf("-------------------------------------------------------------------\n");
    due(&puntatore_1,&puntatore_2);
    //OK
    printf("\n indiero a un puntatore %d <valore>", *puntatore_1);
    printf("\n indietro a un puntatore %d <valore> \n", *puntatore_2);
    printf("-------------------------------------------------------------------\n");



    return 0;
}
void due(int **x1,int **x2)
{
    **x1 = **x1 + 1;
    **x2 = **x2 + 1;
    printf("\n%d  <valore>  dopio puntatore \n ", **x1);
    printf("\n%d  <valore>  dopio puntatore \n ", **x2);
    printf("-------------------------------------------------------------------\n");
    tree(&x1,&x2);
}
void tree(int ***x1,int ***x2)
{
    ***x1 = ***x1 + 1;
    ***x2 = ***x2 + 1;
    printf("\n%d <valore> triplo puntatore \n ", ***x1);
    printf("\n%d <valore> triplo puntatore \n ", ***x2);
    printf("-------------------------------------------------------------------\n");
    quattro(&x1,&x2);
}
void quattro(int ****x1,int ****x2)
{
    ****x1 = ****x1 + 1;
    ****x2 = ****x2 + 1;
    printf("\n%d <valore> quattro puntatori \n ", ****x1);
    printf("\n%d <valore> quattro puntatori \n ", ****x2);
    printf("-------------------------------------------------------------------\n");
    cinque(&x1,&x2);
}
void cinque(int *****x1,int *****x2)
{
    *****x1 = *****x1 + 1;
    *****x2 = *****x2 + 1;
    printf("\n%d <valore> cinque puntatori \n ", *****x1);
    printf("\n%d <valore> cinque puntatori \n ", *****x2);
    printf("-------------------------------------------------------------------\n");
    //quattro(&x1,&x2);
}
