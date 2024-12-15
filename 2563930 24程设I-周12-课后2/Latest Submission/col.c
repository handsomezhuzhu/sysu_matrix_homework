void sortData(int data[], int len, int (*cmp)(const void*, const void*)){
    qsort(data, len, sizeof(int), cmp);
}
int cmpAsc(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}
int cmpDesc(const void* a, const void* b){
    return   *(int*)b-*(int*)a;
}