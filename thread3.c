#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#define max 16
#define Th_max 4

int a[max] ={1,34,5,7,232,64,232,6745,574,123,1234,643,43,45,2432,464};
int max_num[Th_max] = { 0 }; 
int thread_no = 0; 

void maximum(void* arg) 
{ 
    int i, num = thread_no++; 
    int maxs = 0; 
  
    for (i = num * (max / 4); i < (num + 1) * (max / 4); i++) { 
        if (a[i] > maxs) 
            maxs = a[i]; 
    } 
  
    max_num[num] = maxs; 
} 
 
int main() 
{ 
    int maxs = 0; 
    int i; 
    pthread_t threads[Th_max]; 
  
    for (i = 0; i < Th_max; i++) 
        pthread_create(&threads[i], NULL,maximum, (void*)NULL); 
  
    for (i = 0; i < Th_max; i++) 
        pthread_join(threads[i], NULL); 
  
    for (i = 0; i < Th_max; i++) { 
        if (max_num[i] > maxs) 
            maxs = max_num[i]; 
    } 
  
    printf("Maximum Element is : %d", maxs); 
  
    return 0; 
} 
