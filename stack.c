#include "stack.h"
#include <stdlib.h>
#include "stdio.h"
void CreateStack(Stack *info,uint8_t size)
{
(info->ptr_to_array)=(uint8_t*)calloc(sizeof(uint8_t),size);
/*CreateStack by creating
dynamically allocated array*/
(info -> count) =0;
//G_stack_ptr=info;
}


void push(Stack *info,uint8_t data)
{
uint8_t pushIndex=0;
if(is_full_or_empty() == -1){printf("Stack overflow\n");}
  else{
pushIndex=((info->size)-1)-(info->count);
(info->ptr_to_array[pushIndex])=data;
(info->count)++;
      }
}

void POP(Stack *info,uint8_t *data)
{//G_stack_ptr=info;
  uint8_t popIndex=0;
  if(is_full_or_empty() == 0){printf("STACK IS Empty");}
  else{
  popIndex=((info->size))-(info->count);
  *data=(info->ptr_to_array[popIndex]);
  (info->count)--;
      }
}
int8_t is_full_or_empty(void) {
if((G_stack_ptr ->count)== (G_stack_ptr->size)-1)
{ return STACK_OVER_FLOW;
}else if(G_stack_ptr ->count ==STACK_IS_EMPTY)
{return STACK_IS_EMPTY;
}else{return TRUE;}
}

uint8_t checkForBalancedParantheses(char* expression)
{
uint8_t loop=0,paranthese_loop=0,last=0,small_loop=0;
char arr_of_paranthese[20];
  do
  {
  if( (expression[loop]=='{')||
        (expression[loop]== '}')||
            (expression[loop]=='(')||
              (expression[loop]==')') ||
                (expression[loop]=='[') ||
                (expression[loop]==']')  )
                {
                  arr_of_paranthese[paranthese_loop]=expression[loop];
                  paranthese_loop++;
                }
      push(G_stack_ptr,expression[loop]);
      loop++;
  }while (expression[loop]);
while (paranthese_loop >= 0) {
if(arr_of_paranthese[paranthese_loop-1-small_loop] - arr_of_paranthese[small_loop] <= 2)
{
  small_loop++;
  return 1;
}else{
return 0;
}
if(paranthese_loop){
  paranthese_loop--;
}else{break;}
}

}
