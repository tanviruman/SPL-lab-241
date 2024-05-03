#include <stdio.h>
int main() {
    int n, i, search_key, found = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter the number to search: ");
    scanf("%d", &search_key);

    printf("Enter the integers:\n   ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        if (array[i] == search_key) {
            found = 1;
            break;
        }
    }

  if(found==1){
     printf("FOUND at index position:");
    for(int i=0; i<found; i++)
        printf("%d, ", array[i]);
 }else
 printf("NOT FOUND");

    return 0;
}
