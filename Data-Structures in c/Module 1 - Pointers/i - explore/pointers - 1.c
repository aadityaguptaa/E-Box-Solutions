#include<stdio.h>
#include<math.h>
int main()
{
    int arr[5],i,sum=0;
    float n = 5.0;
    float standarddeviation=0, mean=0;

    //Assigning array to pointer
    int *ptr=arr;

    printf("\nEnter array elements :\n");
    for (i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    //sum of elements of array using pointer
    for (i=0;i<n;i++)
    {
    sum+=*ptr;
    ptr+=1;
    }
    printf("The sum is: %d\n", sum);

    mean=sum/n;
    printf("The Mean is: %.2f\n", mean);
    for(i = 0; i < n; i++){
        standarddeviation += pow((float)arr[i] - mean, 2);
    }
    printf("The Standard Deviation: %.2f\n", standarddeviation);
}
