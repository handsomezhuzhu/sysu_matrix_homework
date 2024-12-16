#include<stdio.h>
#define SIZE 10  // 定义空间的大小为 10x10x10

// 定义正方体体素结构体
typedef struct {
    int x;
    int y;
    int z;
    int status;  // 0: 空闲, 1: 被占用
} Voxel;

void initSpace(Voxel space[SIZE][SIZE][SIZE]);

void markOccupied(Voxel space[SIZE][SIZE][SIZE], int x, int y, int z, int size);

int isOccupied(Voxel space[SIZE][SIZE][SIZE], int x, int y, int z);