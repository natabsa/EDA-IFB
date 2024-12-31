#include <stdlib.h>
#include "module.c"

void pqinitialize(struct pq *queue)
{
	queue->queue=malloc(sizeof(struct process)*4);
	queue->front=0;
	queue->back=0;
	queue->capacity=4;
	queue->size=0;
}

void pqexpand(struct pq *queue)
{

}

void  pqdelete(struct pq *queue)
{
	free(queue->queue);
	queue->queue=NULL;
}

void pqpush(struct pq *queue)
{
	if()
}

void pqpop(struct pq* queue)
{

}

