#include <stdio.h>

int main() {
    int arr[10];
    int choice, x, pos, i;

    printf("Enter the array elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("Choose the Operation:\n");
        printf("Options:\n 1. Traversal\n 2. Insertion\n 3. Deletion\n 4. Break\n");
        printf("Choose Option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Traversal \n");
                printf("Enter index position: ");
                scanf("%d", &x);
                if (x >= 0 && x < 10) {
                    printf("Element at position %d is: %d\n", x, arr[x]);
                } else {
                    printf("Invalid index!\n");
                }
                break;

            case 2:
                printf("Insertion\n");
                printf("Enter the element to insert: ");
                scanf("%d", &x);
                for (int i = 9; i > 0; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[0] = x;
                printf("Element inserted at index 0.\n");
                printf("Array after insertion:\n");
                for (int i = 0; i < 10; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Deletion\n");
                printf("Enter the index to delete: ");
                scanf("%d", &pos);
                if (pos >= 0 && pos < 10) {
                    for (int i = pos; i < 9; i++) {
                        arr[i] = arr[i + 1];
                    }
                    printf("Element at index %d deleted.\n", pos);
                    printf("New Array:\n");
                    for (int i = 0; i < 9; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Invalid index!\n");
                }
                break;

            case 4:
                printf("Breaking\n");
                break;

            default:
                printf("Invalid choice!\n");
                break;
        }

        if (choice == 4) {
            break; // Exit the while loop
        }
    }

    return 0;
}

