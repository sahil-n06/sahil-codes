#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct queue{
  int front;
  int rear;
  int size;
  int *array;
};

void create(struct queue *q){
  printf("Enter the size of queue: ");
  scanf("%d",&q->size);
  q->front=-1;
  q->rear=-1;
  q->array=(int *)malloc(sizeof(int)*q->size);
}

bool isfull(struct queue *q){
  return (q->rear+1)%q->size==q->front;
}

bool isempty(struct queue *q){
  return q->front==-1;
}

void enqueue(struct queue *q,int data){
  if (isfull(q)){
    printf("Overflow\n");
  }
  else{
    q->rear=(q->rear+1)%q->size;
    q->array[q->rear]=data;
    if (q->front==-1) {
      q->front=0;
    }
  }
}

int dequeue(struct queue *q){
  int x=-1;
  if (isempty(q)){
    printf("Underflow\n");
  }
  else{
    x=q->array[q->front];
    if(q->front==q->rear) {
      q->front=-1;
      q->rear=-1;
    }
    else{
      q->front=(q->front+1)%q->size;
    }
  }
  return x;
}

void display(struct queue *q) {
  if (isempty(q)){
    printf("Queue is empty\n");
    return;
  }

  int i=q->front;
  do{
    printf("%d  ",q->array[i]);
    i = (i+1)%q->size;
  }while(i!=(q->rear+1)%q->size);
  printf("\n");
}

int main() {
  struct queue q;
  create(&q);
  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  enqueue(&q,40);
  enqueue(&q,50);
  display(&q);
  dequeue(&q);
  display(&q);
  enqueue(&q,0);
  enqueue(&q,999);
  enqueue(&q,99);
  display(&q);
  return 0;
}
