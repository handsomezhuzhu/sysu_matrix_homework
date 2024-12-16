#include "voxel.h"

// 初始化一个空闲的空间
void initSpace(Voxel space[SIZE][SIZE][SIZE]) {
    for (int x = 0; x < SIZE; x++) {
        for (int y = 0; y < SIZE; y++) {
            for (int z = 0; z < SIZE; z++) {
                space[x][y][z].x = x;
                space[x][y][z].y = y;
                space[x][y][z].z = z;
                space[x][y][z].status = 0;  // 空闲
            }
        }
    }
}

// 标记子正方体区域为“被占用”
void markOccupied(Voxel space[SIZE][SIZE][SIZE], int x, int y, int z, int size) {
    for (int i = x; i < x + size && i < SIZE; i++) {
        for (int j = y; j < y + size && j < SIZE; j++) {
            for (int k = z; k < z + size && k < SIZE; k++) {
                space[i][j][k].status = 1;  // 被占用
            }
        }
    }
}

// 查询某体素是否被占用
int isOccupied(Voxel space[SIZE][SIZE][SIZE], int x, int y, int z) {
    if (x < 0 || x >= SIZE || y < 0 || y >= SIZE || z < 0 || z >= SIZE) {
        printf("输入坐标超出空间范围！\n");
        return -1;  // 错误值
    }
    return space[x][y][z].status;
}