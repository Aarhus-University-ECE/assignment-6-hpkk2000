#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){
    // Excercise 3b)
    int count = 0; //counter for elements
  assert(l!=NULL);  //terminates if l is equal to NULL
  node *p = l;
  while (p->next!=NULL) { //Counts through all elements 
    p = p->next; //p gets the next value
    count+=1;
  }
    return count; //add 1 to count 
}

void printout(node *l) {
  //excercise 3d) Implement your changes.. 
    //pre: head points to the first, empty element. The last element's next is NULL
    node *p = l->next;
    while (p!=NULL){
      printf("%d, ",p->data);
    }
    printf("\n");
    //post: the values of the list are printed out*/
}

int largest(node *l){
    //xcercise 3e)
      //pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      
     node *p = l->next;
      int max = p->data;
      while (p!=NULL){ //Runs while loop while p is different from NULL and goes through elements
      if (p->data>max) { //if the value of data is bigger than max then max becomes p->data
        max = p->data;
      }
      p=p->next; //next element
    }
    //post: returns the largest value of the list
    return max; 
}
