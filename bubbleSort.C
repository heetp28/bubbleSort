#include <stdio.h>
#include <string.h>

int main() {
    int i,num,swap;
    char option[11];
    while (1) {
        printf("How many elements: ");
        scanf("%d", &num);

        int array[num];

        for(i=0;i<num;i++) {
            printf("Enter element %d: ",i+1);
            scanf("%d",&array[i]);
        }
        printf("Array Elements: \n[");

        for(i=0;i<num;i++) {
            printf("%d ",array[i]);
        }
        printf("]\n");

        printf("Ascending or Descending (a/d): ");
        option[0] = getchar();
        fgets(option, 11, stdin);
        strlwr(option);

        //Ascending
        if (option[0] == 'a' || option == "ascending") {
            for(int l1 = 0; l1 < num-1;l1++) {
                for(int l2 = 0; l2 < num - l1 -1;l2++) {
                    if (array[l2] > array[l2+1]) { // greater than symbol for ascending
                        swap = array[l2];
                        array[l2] = array[l2 + 1];
                        array[l2+1] = swap;
                    }
                }
            }
        } else if (option[0] == 'd' || option == "descending") { //Descending
            for(int l1 = 0; l1 < num - 1;l1++) {
                for(int l2 = 0; l2 < num - l1 -1;l2++) {
                    if (array[l2] < array[l2+1]) { //less than symbol for descending
                        swap = array[l2];
                        array[l2] = array[l2 + 1];
                        array[l2+1] = swap;
                    }
                }
            }
        } else {
            printf("Exiting");
            break;
        }
        
        for(i=0;i<num;i++) {
            printf("%d ",array[i]);
        }
        printf("\n");

    }
    
    return 0;
}
