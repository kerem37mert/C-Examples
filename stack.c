#include <stdio.h>

int myArray[5];
int top = -1;

void push(int item) {
    if (top != 4) {
        top++;
        myArray[top] = item;
        printf("%d Indexine Eleman eklendi\n", top);
    } else {
        printf("Stack Dolu\n");
    }
}

void pop() {\
    if(top != -1) {
        top--;
    printf("Eleman silindi\n");
    } else {
        printf("Silinecek eleman yok\n");
    }
}

int peek() {
    return myArray[top];
}

void cleanStack() {
    top = -1;
}


int main() {

    while(!0) {
        int select, numberItem;

        printf("**************\n");
        printf("-Push(1)\n-Pop(2)\n-Peek(3)\n-Clean-Stack(4)\n");
        scanf("%d",&select);

        switch(select) {
            case 1:
                printf("Stack'e eleman eklemek icin bir sayi gir\n");
                scanf("%d",&numberItem);
                push(numberItem);
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("%d\n", peek());
                break;
            default:
                printf("Lutfen gecerli bir secim yapiniz\n");
        }
    }
}