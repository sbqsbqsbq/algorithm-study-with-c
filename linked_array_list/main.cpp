#include <stdio.h>
#include <stdlib.h>
#define INF 10000

int arr[INF];
int count = 0;

void addBack(int data) {
    arr[count] = data;
    count++;
} // 특정 데이터를 배열 뒤에 담기

void addFirst(int data) {
    for (int i = count; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = data;
    count++;
} // 특정 데이터를 배열 맨 앞에 담기

void removeAt(int index) {
    for (int i = index; i < count - 1; i++) {
        arr[i] = arr[i + 1];
    }
    count--;
} // 특정 데이터를 지우는 함수

void show() {
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
}

int main(void) {
    addFirst(4);
    addFirst(5);
    addFirst(1);
    addBack(7);
    addBack(6);
    addBack(8);
    show();
    system("pause");
    return 0;
}