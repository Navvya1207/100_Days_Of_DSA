#include <stdio.h>
int main(){
    int n,a[100],target;
    printf("\n Enter size of array: ");
    scanf("%d", &n);
    printf("\n Input elements: ");
    for(int i=0;i<n;i++)
    scanf("%d", &a[i]);
    printf("\n Input target: ");
    scanf("%d", &target);
    for(int j=0;j<n;j++)
    {
    for(int i=0;i<n;i++)
    {
        if(j==i)
        continue;
        else if(a[j]+a[i]==target){
        printf("[%d,%d]",j,i);
        return 0;
        }
    }
}
return 0;
}