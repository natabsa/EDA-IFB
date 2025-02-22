#include <stdlib.h>
#include "procqueue.h"

void pqinitialize(struct pq *queue)
{
	queue->queue=malloc(sizeof(struct process)*4);
	queue->front=NULL;
	queue->back=NULL;
	queue->capacity=4;
	queue->size=0;
}

void pqexpand(struct pq *q)
{
	q->queue=realloc(q->queue, (q->capacity)*2);
	(q->capacity)*=2;
}

void  pqdelete(struct pq *q)
{
	free(q->queue);
	q->queue=NULL;
	q->front=NULL;
	q->back=NULL;
}

void pqinsert(struct pq *q, struct process p)
{
	if();
}

void pqpop(struct pq* queue)
{

}

