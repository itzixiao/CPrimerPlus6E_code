//
// Created by Lenovo on 2024/3/1.
//
#include <stdio.h>

// 定义一个结构体
typedef struct {
    int x;
    int y;
} Point;

int main() {
    // 创建一个Point类型的结构体实例
    Point p = {10, 20};

    // 创建一个指向Point类型的指针，并让它指向p
    Point *ptr = &p;

    // 使用箭头操作符通过指针访问结构体的成员
    printf("Point coordinates: (%d, %d)\n", ptr->x, ptr->y);

    return 0;
}