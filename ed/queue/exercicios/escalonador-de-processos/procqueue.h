#include <stdlib.h>

struct process
{
	char name[31];
	int pid;
	int time;
};

struct pq
{
	struct process *queue;
	struct process *front;
	struct process *back;
	int capacity;
	int size;
};

void pqinitialize(struct pq* queue);

void pqdelete(struct pq* queue);

void pqinsert(struct pq* queue, struct process p);

void pqpop(struct pq* queue);
