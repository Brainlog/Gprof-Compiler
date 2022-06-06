#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_prime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int* random_array(int n, int maxVal)
{

    int*a = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        a[i] = 1 + (rand() % maxVal);
    }
    return a;
}

int largest_prime(int n, int *arr)
{
    int largest = -1;
    for(int i = 0; i < n; i++)
    {
        if(is_prime(*(arr+i)) && largest < *(arr+i))
        {
            largest = *(arr+i);
        }
    }
    return largest;
}

int main()
{
    int n, maxval;
    scanf("%d%d",&n,&maxval);
    srand(time(0));
    int *my = random_array(n, maxval);
    printf("%d\n",largest_prime(n, my));
    return 0;
   
    
    
  
}