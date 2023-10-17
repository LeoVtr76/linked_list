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

    head = (struct data *)malloc(sizeof(struct data));
    a = (struct data *)malloc(sizeof(struct data));
    b = (struct data *)malloc(sizeof(struct data));
    c = (struct data *)malloc(sizeof(struct data));

    head->value = 12; 
    head->next = a;

    a->value = 7; 
    a->next = b;

    b->value = 3; 
    b->next = c;

    c->value = 9;
    c->next = NULL;

    return 0;
}