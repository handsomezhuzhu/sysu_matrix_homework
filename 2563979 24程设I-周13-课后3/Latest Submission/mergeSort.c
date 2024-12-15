void merge(int *arr, int start, int mid, int end){
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int left[n1], right[n2];
    for(int i = 0; i < n1; i++){
        left[i] = arr[start + i];
    }
    for(int i = 0; i < n2; i++){
        right[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0,s = start;
    while (i < n1 && j < n2){
        if(left[i] <= right[j]){
            arr[s] = left[i];
            i++;
        }else{
            arr[s] = right[j];
            j++;
        }
        s++;
    }
    while (i < n1){
        arr[s] = left[i];
        i++;
        s++;
    }
    while(j<n2){
        arr[s] = right[j];
        j++;
        s++;
    }
}
void mergeSort(int *arr, int start, int end){
    if(start<end){
        int mid=(start+end)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}