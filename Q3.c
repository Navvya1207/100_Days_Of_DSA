/*Delete an Element from an Array

Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left*/
#include <stdio.h>
int main(){
    int n,a[100],pos;
    printf("\n Enter size of array: ");
    scanf("%d", &n);
    printf("\n Enter array elements: ");
    for(int i=0;i<n;i++)
    scanf("%d", &a[i]);
    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);
    if(pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 0;
    }
    for(int i = pos-1; i <= n; i++) {
        a[i] = a[i + 1];
    }
    n--;  
    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}