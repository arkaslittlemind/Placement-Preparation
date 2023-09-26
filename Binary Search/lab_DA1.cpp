#include<stdio.h>

int bubble_sort(int arr[], int n)
{
    int comp=0;
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - i ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                comp++;
            }
        }
    }
    return comp;
}

void count_multiple(int x[], int n){
    for (int i=0;i<n;i++) {
        if(i!=0 && x[i-1]!=x[i]){
            int count=1;
        for (int j=i+1;j<=n;j++) { 
            if (x[i]==x[j]) 
                count++;
        }
        if(count!=1){
            printf("\nThe number %d is repeated %d times.",x[i], count);
        }
        }
    }
}
void display(int arr[], int n){
    for(int i=0;i<=n;i++){
        printf("%d\t", arr[i]);
    }
}
int main(){
   
    int input[100];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %dth value: ",i+1);
        scanf("%d",&input[i]);
    }
    int output1[15];
    int top1=-1;
    int output2[15];
    int top2=-1;
    for(int i=0;i<15;i++){
        if(input[i]<0){
            output1[++top1]=input[i];
        }
        else{
            output2[++top2]=input[i];
        }
    }

    display(output1, top1);
    int comp1=bubble_sort(output1, top1);
    printf("\nThe number of comparison is %d.\n",comp1);
    display(output1, top1);
    count_multiple(output1,top1);
    
    printf("\n-------------------------------------\n");
    display(output2, top2);
    int comp2=bubble_sort(output2, top2);
    printf("\nThe number of comparison is %d.\n",comp2);
    display(output2, top2);
    count_multiple(output2,top2);
}