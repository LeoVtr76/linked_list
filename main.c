#include <stdio.h>
#include <stdlib.h>

typedef struct datas {
    int value;
    struct datas *next;
}data;
void printList(data *_head){
    while(_head !=NULL){
        printf("%d ", _head->value);
        _head = _head->next;
    }
}
int main() {
    data *head = NULL;
    data *a = NULL;
    data *b = NULL;
    data *c = NULL;
    data *d = NULL;

    head = (data *)malloc(sizeof(data));
    a = (data *)malloc(sizeof(data));
    b = (data *)malloc(sizeof(data));
    c = (data *)malloc(sizeof(data));
    d = (data *)malloc(sizeof(data));  
    head = a; 

    a->value = 12; 
    a->next = b;

    b->value = 7; 
    b->next = c;

    c->value = 3;
    c->next = d;

    d->value = 9;
    d-> next = NULL;
    
    data *e = NULL;
    e = (data*) malloc(sizeof(data));
    printf("Entrez une valeur");
    scanf("%d", &e->value);
    b->next = e;
    e->next = c;

    printList(head);
    return 0;

}