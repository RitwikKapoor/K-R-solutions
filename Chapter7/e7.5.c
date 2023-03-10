   #include <stdio.h>
   #include <stdlib.h>

   #define MAXOP 100 /* max size of operand or operator */

   void push(double);
   double pop(void);

   int main()
   {
       char *c;
       char s[MAXOP], buf[MAXOP];
       double a = 0, op2;
       char e = '\0';

       while (scanf("%s%c", s, &e) == 2) { /* get no-space string and space behind it */
	    // printf("\nString 1:%s",s);  
             if (sscanf(s, "%lf", &a) == 1){
		//printf("\nString2.1:%s", s);
		push(a);
	     } /* is it a number */
             else if (sscanf(s, "%s", buf)) {
		     //printf("\nString2.2:%s", s);
                 for (c = buf ; *c; c++) {
                     switch (*c) {
                     case '+':
                         push(pop() + pop());
                         break;
                     case '-':
                         op2 = pop();
                         push(pop() - op2);
                         break;
                     case '*':
                         push(pop() * pop());
                         break;
                     case '/':
                         op2 = pop();
                         if (op2 != 0.0)
                             push(pop() / op2);
                         else
                             printf("error: zero divisor\n");
                         break;
                     default:
                         printf("Unknown command\n");
                         break;
                     }
                 } 
                 if (e == '\n') 
                     printf("\t%.8g\n", pop());
             }
       }
       return 0;
   }

   #define MAXVAL 100  /* maximum depth of val stack */

   static int sp = 0;  /* next free stack position */
   static double val[MAXVAL]; /* value stack */

   void push(double f)
   {
       if (sp < MAXVAL)
           val[sp++] = f;
       else
           printf("stack is full%g\n", f);
   }

   double pop(void)
   {
       if (sp > 0)
           return val[--sp];
       else {
           printf("stack is empty\n");
           return 0.0;
       }
   }

// Copied solution. Not written by me.
