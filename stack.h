#ifndef STACK_H_
#define STACK_H_
#define STACK_OVER_FLOW -1
#define STACK_IS_EMPTY 0
#define TRUE 1
#define FALSE 0
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef struct Stack{
uint8_t *ptr_to_array;
uint8_t size;
uint8_t count;
}Stack;
void CreateStack(Stack *info,uint8_t size);
extern Stack *G_stack_ptr;
void push(Stack *info,uint8_t data);

void POP(Stack *info,uint8_t* data);
int8_t is_full_or_empty(void);
#endif
