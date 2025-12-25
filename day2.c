#include <stdio.h>
#define MAX_TASKS 35
#define MAX_LEN 50
struct task {
    char name[MAX_LEN];
};
struct task Tasks[MAX_TASKS];
int main() {
    int choice, count = 0, task;
    printf("=== SIMPLE TO-DO LIST APPLICATION ===\n");
    do {
        printf("\n1. Add Task");
        printf("\n2. View Tasks");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("How many tasks do you want to add? ");
                scanf("%d", &task);
                getchar(); // clear newline

                for(int k = 0; k < task; k++) {
                    if(count >= MAX_TASKS) {
                        printf("\nTask list is full!\n");
                        break;
                    }
                    printf("Enter task %d: ", count + 1);
                    fgets(Tasks[count].name, MAX_LEN, stdin);
                    count++;
                }
                break;

            case 2:
                printf("\n--- TO DO LIST ---\n");
                if(count == 0) {
                    printf("No tasks added yet.\n");
                } else {
                    for(int j = 0; j < count; j++) {
                        printf("%d. %s", j + 1, Tasks[j].name);
                    }
                }
                printf("------------------\n");
                break;

            case 3:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 3);

    return 0;
}
