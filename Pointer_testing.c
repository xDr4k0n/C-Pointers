#include <stdio.h>
#include <string.h>
#define DIM 50
int main()
{
   char char_arr[DIM];
   int int_arr[DIM];
   int i;
   int *integer;
   char *character;
   integer = int_arr;
   character = char_arr;


   for(i=0;i<DIM;i++)
   {
     char_arr[i] = (96 + i);
     int_arr[i] = i;
   }
   for(i=0;i<DIM;i++)
   {
     printf("[Puntatore intero] punta a : %p , che ha valore di : '%d' \n",integer,*integer);
     integer = integer + 1;
   }
   for(i=0;i<DIM;i++)
   {
     printf("[Puntatore char] punta a : %p , che ha valore di : '%c' \n",character,*character);
     character = character + 1;
   }


   return 0;
}
