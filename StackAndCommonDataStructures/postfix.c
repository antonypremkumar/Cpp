#include <stdio.h>
#include <ctype.h>

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

  char postfix[] = {'1', '2', '3', '*', '+', '4', '-'};

  for(int i=0; i<sizeof(postfix); i++)
  {
    char ch = postfix[i];
    if(isdigit(ch))
      push(&s, ch - '0');
    else
    {
      int op2 = top(&s);
      pop(&s);
      int op1 = top(&s);
      pop(&s);

      switch(ch)
      {
        case '+' : push(&s, op1 + op2);
        break;
        case '-' : push(&s, op1 - op2);
        break;
        case '*' : push(&s, op1 * op2);
        break;
        case '/' : push(&s, op1 / op2);
        break;
      }
    }
  }
  printf("Evaluation : %d\n", top(&s));
}