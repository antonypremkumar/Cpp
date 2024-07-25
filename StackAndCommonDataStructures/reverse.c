#include <stdio.h>

typedef struct stack
{
  char data[100];
  int top;
} stack;

int empty(stack *p)
{
  return (p->top == -1);
}

int top(stack *p)
{
  return p->data[p->top];
}

void push(stack *p, char e)
{
  p->data[++(p->top)] = e;
}

void pop(stack *p)
{
  if(p->top !=-1)
    --(p->top);
}

int main()
{
  stack s;
  s.top = -1;

  char ch, str[10] = "ABCDE";

  int i, len = sizeof(str);
  for(i=0; i<len; i++)
    push(&s, str[i]);

  printf("Reversed string : ");

  while(!empty(&s))
  {
    printf("%c ", top(&s));
    pop(&s);
  }
  printf("\n");
}