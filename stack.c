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
if(G_stack_ptr ->count == 99)
{ return STACK_OVER_FLOW;
}else if(G_stack_ptr ->count ==STACK_IS_EMPTY)
{return STACK_IS_EMPTY;
}else{return TRUE;}
}
