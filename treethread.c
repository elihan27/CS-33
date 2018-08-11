//
//  main.c
//  treethread
//
//  Created by Elizabeth Han on 6/3/17.
//  Copyright © 2017 Elizabeth Han. All rights reserved.
//


#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>





int *n;

void *thread(void *vargp);

int main(int argc, char *argv[]) {
    
    int count = atoi(argv[1]);
    int num = (2 << (count-1))-2;
    n = malloc(num * sizeof(int));
    
    
    pthread_t *tid = malloc(sizeof(pthread_t)*num);
    
    pthread_create(tid, NULL, thread, NULL);
    
    exit(0);
    
}

void *thread(void *varp)
{
     int number = (int)varp;
     pthread_t *tid;
     
     if (number < *n)
     {
     pthread_create(tid, NULL, thread, (void*)(number+1));
     int self_id1 = (int) pthread_self();
     printf("%s %d %s \n", "Thread", self_id1, "done");
     
     pthread_create(tid, NULL, thread, (void*)(number+2));
     int self_id2 = (int) pthread_self();
     printf("%s %d %s \n", "Thread", self_id2, "done");
     
     }
     
     pthread_join(*tid, NULL);
     free (tid);
    
    return NULL;
}



















/*void *thread(void *vargp);

struct Node
{
    pthread_t* tid;
    int number;
    int limit;
    
};


int main(int argc, char* argv[])
{
    int num = 5;
   // int num = atoi(argv[1]); //Get number of threads we want
    pthread_t *tid = malloc(sizeof(pthread_t)*num); //Create that many tids by allocating that much space
    for(int i = 0; i < num; i++)
    {
        pthread_create(&tid[i], NULL, thread, NULL); //Create that many number of threads
        //int self_id1 = (int) pthread_self();
       
    }
    for (int j = 0; j < num; j++)
    {
        pthread_join(tid[j], NULL); //Join all the threads back
    }
    free(tid); //Free the allocated space for the tid's
    exit(0);
}

void *thread(void *vargp)
{
    printf("Hello, world!\n"); 
    int self_id1 = (int) pthread_self();
    printf("%s %d %s \n", "Thread", self_id1, "done");
    return NULL;
    
}

*/

/*int *n;

void *thread(void *vargp);

int main(int argc, char *argv[]) {
   
   int count = atoi(argv[1]);
    int num = (2 << (count-1))-2;
    n = malloc(num * sizeof(int));
 */
    
    //int n = 1;
   // int n = atoi(argv[1]); //this should be
    
   // pthread_t *tid = malloc(sizeof(pthread_t)*num);
    
    //pthread_create(tid, NULL, thread, NULL);//(void*)(0));
    
    
   /* for (int i = 0; i < num; i++)
    {
        pthread_create(&tid[i], NULL, thread, NULL); //Create that many number of threads
        printf("%d\n", i);
    }
    

    for (int j = 0; j < num; j++)
    {
        pthread_join(tid[j], NULL); //Join all the threads back
    }
    free(tid); //Free the allocated space for the tid's
    exit(0);
    */
   
    

    
//}

/*int main() {
    pthread_t tid;
    pthread_create(&tid, NULL, thread, NULL);
    pthread_join(tid, NULL);
    exit(0);
    
}
*/






/*void *thread(void *varp)
{
    int number = (int)varp;
    pthread_t *tid;
    
    for (int i = 0; i < *n; i++)
    {
        pthread_create(&tid[i], NULL, thread, NULL); //Create that many number of threads
        printf("%d\n", i);
        pthread_join(*tid, NULL);
        free (tid);
        
    }
 */
    
   // printf("Hello, world!\n");
    //return NULL;
    
    
   /* int number = (int)varp;
    pthread_t *tid;
    
    if (number < *n)
    {
        pthread_create(tid, NULL, thread, (void*)(number+1));
        int self_id1 = (int) pthread_self();
        printf("%s %d %s \n", "Thread", self_id1, "done");

        pthread_create(tid, NULL, thread, (void*)(number+2));
        int self_id2 = (int) pthread_self();
        printf("%s %d %s \n", "Thread", self_id2, "done");
    
    }
    
    pthread_join(*tid, NULL);
    free (tid);
    
    
 
    */
  //     return NULL;
//}


/*void freetree(struct Node* current)
{
 if (current == NULL)
     return;
    freeTree(current->left);
    freeTree(current->right);
    
    printf("%s %d %s \n", "Thread", current->number, "done");
    pthread_join(*current->tid, NULL);
    free(current);
}




struct Node
{
    pthread_t* tid;
    int number;
    int definite number;
    
    struct Node* left;
    struct Node* right;
    
};

struct Node* newNode (int n)
{
    struct Node* temp = (struct Node*) malloc(sizeof( struct Node ));
    temp->tid = NULL;
    temp->number = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
    
};
void *thread(void *vargp);
void freetree(struct Node* current);
*/

