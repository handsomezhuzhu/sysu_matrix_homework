#include <stdio.h>
#include <string.h>

// 定义日期结构体
struct Date {
    int year;
    int month;
    int day;
};

// 定义图书结构体
struct Book {
    char title[40];  // 书名
    char author[25]; // 作者
    struct Date pub_date; // 出版日期
    float price; // 价格
};

// 函数：按价格从低到高排序图书
void sortBooks(struct Book books[], int n) {
    int i, j;
    struct Book temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (books[j].price > books[j + 1].price) {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

// 主函数
int main() {
    int n;
    scanf("%d", &n);

    struct Book books[n];

    // 输入图书信息
    for (int i = 0; i < n; i++) {
        getchar(); // 清除输入缓冲区中的换行符
        
        // 输入书名
        scanf("%[^\n]%*c", books[i].title);

        // 输入作者
        scanf("%[^\n]%*c", books[i].author);

        // 输入出版日期
        scanf("%d %d %d", &books[i].pub_date.year, &books[i].pub_date.month, &books[i].pub_date.day);

        // 输入价格
        scanf("%f", &books[i].price);
    }

    // 调用排序函数
    sortBooks(books, n);

	 // 输出排序后的图书信息
    printf("%-40s %-25s %-15s %-10s\n", "Title", "Author", "Publish Date", "Price");

    for (int i = 0; i < n; i++) {
        // 输出书籍信息
        printf("%-40s %-25s %-4d-%02d-%02d%5s %-10.2f\n",
            books[i].title,
            books[i].author,
            books[i].pub_date.year,
            books[i].pub_date.month,
            books[i].pub_date.day,
			"",
            books[i].price);
    }

    return 0;
}
