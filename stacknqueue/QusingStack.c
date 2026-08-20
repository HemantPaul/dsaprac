// Implement a queue using two stack

#include <stdio.h>
#define max 100

int stack1[max], stack2[max];
int top1 = -1, top2 = -1;

void push1(int x){
stack1[++top1]=x;
}
void push2(int x){
stack2[++top2]=x;
}


int pop1(){
    return stack1[top1--];
}

int pop2(){
    return stack2[top2--];
}


void enqueue(int x){
    push1(x);
}

int dequeue(){
    if (top1 == -1) {
        printf("Queue is Empty\n");
        return -1;
    }
while(top1!=-1){
    push2(pop1());
}
int result = pop2();
while(top2!=-1){
    push1(pop2());
}

return result;

}

void display() {
    if (top1 == -1) {
        printf("Queue is Empty\n");
        return;
    }

    for (int i = 0; i <= top1; i++) {
        printf("%d ", stack1[i]);
    }
    printf("\n");
}





int main()
{
  enqueue(1);
    enqueue(2);
    enqueue(3);

    display();

    printf("Dequeued: %d\n", dequeue());

    display();

    return 0;
}

// // Dequeue (Optimized)-ONLY if stack2 is empty → transfer elements from stack1
// int dequeue() {
//     if (top1 == -1 && top2 == -1) {
//         printf("Queue is Empty\n");
//         return -1;
//     }

//     // Transfer only if stack2 is empty
//     if (top2 == -1) {
//         while (top1 != -1) {
//             push2(pop1());
//         }
//     }

//     return pop2();
// }

