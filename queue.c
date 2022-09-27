#include <stdio.h>
#include <stdlib.h>
#define size 5
int front = -1, rear = -1;
void enqueue(int s[])
{
    if (rear == size - 1)
    {
        printf("Queue is full");
    }
    else
    {
        int x;
        printf("Enter Element to Enqueue");
        scanf("%d", &x);
        rear = rear + 1;
        s[rear] = x;
    }
}
void dequeue(int s[])
{
    if (front == rear && rear == -1)
    {
        printf("Queue Is Empty.Dequeue Not Possible");
    }
    else
    {
        printf("Dequeue Element : %d ", s[front + 1]);
        front = front + 1;
    }
}
void display(int s[])
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty.\n");
    }
    else
    {
        printf("Current Queue : \n");
        for (int i = front + 1; i <= rear; i++)
        {
            printf("%d\t", s[i]);
        }
    }
}
int main()
{
    int choice;
    int queue[size];
    printf("\nOperations Available \n");
    printf("1.Enqueue \n2.Dequeue \n3.Display\n 4.Exit\n");
    while (1)
    {
        printf("\nEnter Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue(queue);
            break;
        case 2:
            dequeue(queue);
        case 3:
            display(queue);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Choice. \n");
        }
    }
}
