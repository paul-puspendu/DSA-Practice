#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Term
{
    int coeff;
    int exp;
};

struct Poly
{
    int num;
    struct Term *t;
};

void create(struct Poly *p)
{
    printf("Enter total number of non-zero terms :\n");
    scanf("%d", &p->num);
    p->t = (struct Term *)malloc(sizeof(struct Term) * p->num);
    printf("Enter the terms according to their coefficient and exponent :\n");
    for (int i = 0; i < p->num; i++)
    {
        scanf("%d %d", &p->t[i].coeff, &p->t[i].exp);
    }
}

int evaluate(struct Poly *p, int x)
{
    int term = 0;
    for (int i = 0; i < p->num; i++)
    {
        term = term + p->t[i].coeff * pow(x, p->t[i].exp);
    }
    return term;
}

int main()
{
    struct Poly p;
    create(&p);
    int x;
    printf("Enter the value of 'x'\n");
    scanf("%d", &x);
    printf("Evaluated value = %d", evaluate(&p, x));
    return 0;
}