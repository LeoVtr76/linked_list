#include <stdio.h>
#include <stdlib.h>

struct data {
    int value;
    struct data *next;
};

int main() {
    struct data *head = NULL;
    struct data *a = NULL;
    struct data *b = NULL;
    struct data *c = NULL;
    struct data *d = NULL;

    a = (struct data *)malloc(sizeof(struct data));
    b = (struct data *)malloc(sizeof(struct data));
    c = (struct data *)malloc(sizeof(struct data));
    d = (struct data *)malloc(sizeof(struct data));
    head = a; 

    a->value = 12; 
    a->next = b;

    b->value = 7; 
    b->next = c;

    c->value = 3;
    c->next = d;

    d->value = 9;
    d-> next = NULL;
    return 0;
}