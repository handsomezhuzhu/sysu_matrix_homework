#include<stdio.h>
#include <string.h>
struct Date {
    int day;
    int month;
    int year;
};

struct Book {
    char title[40];
    char author[20];
    struct Date date;
    double price;
};

struct Book books[10];
void printkongge(int n){
    for(int i = 0; i < n; i++){
        printf(" ");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    int count = 0;
    for(int i = 0; i < n; i++){
        count++;
        gets(books[i].title);
        gets(books[i].author);
        //scanf("%[^\n]", books[i].title);
        //scanf("%[^\n]", books[i].author);
        scanf("%d %d %d", &books[i].date.year, &books[i].date.month, &books[i].date.day);
        scanf("%lf", &books[i].price);
        getchar();
    }

    printf("Title");
    printkongge(40-strlen("Title")+1);
    printf("Author");
    printkongge(20);
    printf("Publish Date");
    printkongge(4);
    printf("Price");
    printkongge(5);
    printf("\n");
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (books[j].price > books[j + 1].price) {
                struct Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%s", books[i].title);
        printkongge(40-strlen(books[i].title)+1);
        printf("%s", books[i].author);
        printkongge(20-strlen(books[i].author)+6);
        printf("%d", books[i].date.year);
        printf("-");
        if(books[i].date.month < 10){
            printf("0%d", books[i].date.month);
        }else{
            printf("%d", books[i].date.month);
        }
        printf("-");
        if(books[i].date.day < 10){
            printf("0%d", books[i].date.day);

        }else{
            printf("%d", books[i].date.day);
        }
        printkongge(6);
        printf("%.2lf", books[i].price);
        if(books[i].price < 100){
            printf(" ");
        }
        printkongge(4);
        printf("\n");
    }
    return 0;
}