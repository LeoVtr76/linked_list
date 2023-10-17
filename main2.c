#include <stdio.h>
#include <stdlib.h>

typedef struct datas {
    int value;
    struct datas *next;
}data;
void printList(data *_head){
    if (_head == NULL){
        printf("\n");
        return;
    }
    printf("%d ", _head->value);
    printList(_head->next);

}
void insert(data **head, data *a) {
    data *newData = (data *)malloc(sizeof(data));
    printf("Entrez une valeur : ");
    scanf("%d", &newData->value);
    newData->next = a;
    *head = newData;
}
void count(data *_head){
    int i=0;
    while(_head !=NULL){
        i++;
        _head = _head->next;
    }
    printf("Il y a %d élements.\n", i);
}
void sum(data *_head){
    int sum=0;
    while(_head !=NULL){
        sum+=_head->value;
        _head = _head->next;
    }
    printf("La somme est : %d\n", sum);
}
int main() {
    data *head = NULL;
    data *a = NULL;
    data *b = NULL;
    data *c = NULL;
    data *d = NULL;

    //head = (data *)malloc(sizeof(data));
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
    
    insert(&head, a);
    printList(head);
    count(head);
    sum(head);
    return 0;

}