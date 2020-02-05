#include "stdlib.h"
#include "stdio.h"
#include "stack.h"
#define MAX 100
Stack *G_stack_ptr=NULL;
int main(int argc,char const *argv[])
{
char arr_of_char[]= "{{(2*6+4)}}";//{'{','M','o','h','a','m','e','d','(',')','}','\0'};
uint8_t is_Balanced=0;
uint8_t poped_data=0;
Stack Data_base1;
G_stack_ptr=&Data_base1;
Data_base1.size=MAX;
CreateStack(G_stack_ptr,G_stack_ptr -> size);
push(G_stack_ptr,10);
printf("%d\n",(G_stack_ptr->ptr_to_array[99]) );
push(G_stack_ptr,9);
push(G_stack_ptr,8);
push(G_stack_ptr,7);
push(G_stack_ptr,6);
push(G_stack_ptr,5);
printf("%d\n",(G_stack_ptr->ptr_to_array[94]));
POP(G_stack_ptr,&poped_data);
printf("%d\n",poped_data);
push(G_stack_ptr,6);
printf("%d\n",(G_stack_ptr->ptr_to_array[94]));
is_Balanced=checkForBalancedParantheses(arr_of_char);

  return 0;
}
