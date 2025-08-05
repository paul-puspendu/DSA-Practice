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

struct Poly *add(struct Poly *p1, struct Poly *p2)
{
    struct Poly *p3;
    p3 = (struct Poly *)malloc(sizeof(struct Poly));
    p3->t = (struct Term *)malloc(sizeof(struct Term) * ((p1->num) + (p2->num)));
    int i = 0, j = 0, k = 0, c = 0;
    while (i < p1->num && j < p2->num)
    {
        c++;
        if (p1->t[i].exp < p2->t[j].exp)
        {
            p3->t[k++] = p2->t[j++];
        }
        else if (p1->t[i].exp > p2->t[j].exp)
        {
            p3->t[k++] = p1->t[i++];
        }
        else
        {
            p3->t[k].coeff = (p1->t[i].coeff) + (p2->t[j++].coeff);
            p3->t[k++].exp = p1->t[i++].exp;
        }
    }
    while (i < p1->num)
    {
        p3->t[k++] = p1->t[i++]; 
        c++;
    }
    while (j < p2->num)
    {
        p3->t[k++] = p2->t[j++]; 
        c++;
    }
    p3->num = c;
    return p3;
}

void avoid_Memory_Leak(struct Poly *p1, struct Poly *p2, struct Poly *p3)
{
    free(p1->t);
    free(p2->t);    
    free(p3->t);    
    free(p3);    
}

int main()
{
    struct Poly p1, p2, *p3;
    printf("Enter the first polynomial(p1(x)) :\n\n");
    create(&p1);
    printf("Enter the second polynomial(p2(x)) :\n\n");
    create(&p2);
    p3 = add(&p1, &p2);
    printf("p1(x) + p2(x) = ");
    for (int i = 0; i < p3->num; i++)
    {
        if (i == 0)
        {
            printf("%dx<%d", p3->t[i].coeff, p3->t[i].exp);
        }
        else
        {
            printf(" + %dx<%d", p3->t[i].coeff, p3->t[i].exp);
        }
    }
    avoid_Memory_Leak(&p1, &p2, p3);
    return 0;
}