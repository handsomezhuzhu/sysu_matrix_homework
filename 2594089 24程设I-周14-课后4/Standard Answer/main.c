#include <stdio.h>
#include "voxel.h"

int main() {
    Voxel space[SIZE][SIZE][SIZE];

    // 初始化空间
    initSpace(space);

    // 输入子正方体的位置和大小
    int x, y, z, size;
    // printf("请输入子正方体的位置和大小 (x, y, z, size)：\n");
    scanf("%d %d %d %d", &x, &y, &z, &size);

    // 标记该区域为“被占用”
    markOccupied(space, x, y, z, size);

    // 输入查询体素的坐标
    int queryX, queryY, queryZ;
    // printf("请输入查询体素的坐标 (x, y, z)：\n");
    scanf("%d %d %d", &queryX, &queryY, &queryZ);

    // 判断该位置是否被占用
    int result = isOccupied(space, queryX, queryY, queryZ);
    if (result == 1) {
        printf("体素 (%d, %d, %d) 被占用", queryX, queryY, queryZ);
    } else if (result == 0) {
        printf("体素 (%d, %d, %d) 空闲", queryX, queryY, queryZ);
    }

    return 0;
}