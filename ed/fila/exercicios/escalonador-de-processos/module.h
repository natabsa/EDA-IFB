#include <stdlib.h>

struct process
{
	char name[30];
	int pid;
	int time;
};

struct pq
{
	struct process *queue;
	int front;
	int back;
	int capacity;
	int size;
};

void pqinitialize(struct pq* queue);

void pqdelete(struct pq* queue);

void pqpush(struct pq* queue);
