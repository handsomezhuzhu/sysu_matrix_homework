int maxFood(int a[], int len){  
    int max1= a[0];  
    int max2 = a[0];  
  
    for (int i = 1; i < len; i++) {  

        if (max2 + a[i] > a[i])  
            max2 += a[i];  
        else  
            max2 = a[i];  
 
        if (max1< max2)  
            max1 = max2;  
    }  
    return max1;  
}