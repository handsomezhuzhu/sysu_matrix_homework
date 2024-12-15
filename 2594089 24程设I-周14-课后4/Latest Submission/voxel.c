#include "voxel.h"
void initSpace(Voxel space[SIZE][SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            for (int k = 0; k < SIZE; ++k) {
                space[i][j][k].status = 0;
            }
        }
    }
}
void markOccupied(Voxel space[SIZE][SIZE][SIZE], int x, int y, int z, int size) {
    for (int i = x; i < x + size; ++i) {
        for (int j = y; j < y + size; ++j) {
            for (int k = z; k < z + size; ++k) {
                space[i][j][k].status = 1;
            }
        }
    }
}

int isOccupied(Voxel space[SIZE][SIZE][SIZE], int x, int y, int z) {
    if (x < 0 || x >= SIZE || y < 0 || y >= SIZE || z < 0 || z >= SIZE) {
        return 1;
    } else if (space[x][y][z].status == 1) {
        return 1;
    } else {
        return 0;
    }
}

