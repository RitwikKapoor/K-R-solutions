// gcc e5.2.c -o e5.2 -lm

#include<stdio.h>
#include<ctype.h> 
#include<math.h>

#define MAX 20

int getfloat(double *pn);
int getch();
void ungetch(int c);


int main()
{
	int i;
	double num[MAX];
	int val;

	for (i = 0; i < MAX && (val = getfloat(&num[i])) != EOF; i++)
		printf("num[%d] = %f, \tvalue returned: %d (%s)\n", i, num[i], 
				val, val != 0 ? "number" : "not a number");

	return 0;
}


int getfloat(double *pn)
{
	int c, sign;

	*pn = 0;
	while (isspace(c = getch()));
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-') {
		c = getch();
	}
	while (isdigit(c)) {
		*pn = 10 * *pn + (c - '0');
		c = getch();
	}
	if(c == '.'){
		c = getch();
		int k = 1;
		while(isdigit(c)){
			*pn += (double)(c - '0')/pow(10,k);
			k++;
			c = getch();
		}
	}

	*pn *= sign;
	if (c != EOF)
		ungetch(c);

	return c;	
}

int bufp = 0;
int buf[MAX];

int getch()
{
	return bufp > 0 ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp < MAX)
		buf[bufp++] = c;
}

