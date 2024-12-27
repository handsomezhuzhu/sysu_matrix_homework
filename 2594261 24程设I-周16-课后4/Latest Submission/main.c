#include <stdio.h>
#include <stdlib.h>


//代码来自：https://www.luogu.com.cn/user/215368


int n, m, p, node[100000][2], cnt;

long long ans;

int main() {
    while (scanf("%d%d", &n, &m) == 2) {
        p = 0; ans = 0;
        node[0][p] = 1; node[0][p ^ 1] = n;
        for (int i = 1; i <= n; ++i) {
            node[i][p] = i + 1;
            node[i][p ^ 1] = i - 1;
        }
        node[n][p] = 0;
        while (m--) {
            int opt;
            scanf("%d", &opt);
            if (opt == 1) {
                int x, y;
                scanf("%d%d", &x, &y);
                node[node[x][p ^ 1]][p] = node[x][p];
                node[node[x][p]][p ^ 1] = node[x][p ^ 1];
                node[x][p] = y;
                node[x][p ^ 1] = node[y][p ^ 1];
                node[node[y][p ^ 1]][p] = x;
                node[y][p ^ 1] = x;
            } else if (opt == 2) {
                int x, y;
                scanf("%d%d", &x, &y);
                node[node[x][p ^ 1]][p] = node[x][p];
                node[node[x][p]][p ^ 1] = node[x][p ^ 1];
                node[x][p ^ 1] = y;
                node[x][p] = node[y][p];
                node[node[y][p]][p ^ 1] = x;
                node[y][p] = x;
            } else if (opt == 3) {
                int x, y;
                scanf("%d%d", &x, &y);
                if (node[x][p] == y || node[x][p ^ 1] == y) {
                    if (node[x][p ^ 1] == y) {
                        int temp = x;
                        x = y;
                        y = temp;
                    }
                    node[node[x][p ^ 1]][p] = y;
                    node[y][p ^ 1] = node[x][p ^ 1];
                    node[node[y][p]][p ^ 1] = x;
                    node[x][p] = node[y][p];
                    node[x][p ^ 1] = y;
                    node[y][p] = x;
                    continue;
                }
                int pre = node[x][p ^ 1], suc = node[x][p];
                node[node[x][p ^ 1]][p] = y;
                node[node[x][p]][p ^ 1] = y;
                node[x][p ^ 1] = node[y][p ^ 1];
                node[x][p] = node[y][p];
                node[node[y][p ^ 1]][p] = x;
                node[node[y][p]][p ^ 1] = x;
                node[y][p ^ 1] = pre;
                node[y][p] = suc;
            } else if (opt == 4) {
                p ^= 1;
            }
        }
        int u = node[0][p], num = 0;
        while (u) {
            ++num;
            if (num & 1) {
                ans += u;
            }
            u = node[u][p];
        }
        printf("%lld\n",ans);
    }
    return 0;
}