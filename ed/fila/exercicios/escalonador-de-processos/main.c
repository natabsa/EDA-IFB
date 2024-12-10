#include <stdio.h>
#include <stdlib>
#include <queue_common.h>

int main(int argc, char* argv[])
{
   int n, q;

   scanf("%d %d", &n, &q);

   struct pq queue;
   pqinitialize(&queue);
   struct process p;

   for(int i=0, pid, time, char name[30]; i<n; i++)
   {
      scanf("%s %d %d", name, &pid, &time);
      pqinsert(&queue, name, pid, time);
   }

   printf("\n\n\n");

   for (int i=0; i<n; i++)
   {
      p=pqpop(&queue);
      printf("%s %d %d", p.name, p.pid, p.time);
   }

   deletepq(&queue);
   return 0;
}
