#define SIZE 20

typedef struct{
    int x,y,z;
    int status;
}Voxel;
void initSpace(Voxel space[SIZE][SIZE][SIZE]);
void markOccupied(Voxel space[SIZE][SIZE][SIZE], int x, int y, int z, int size);
int isOccupied(Voxel space[SIZE][SIZE][SIZE], int x, int y, int z);