#include<stdio.h>
#include<math.h>

// 设置皇后总数
#define N 4

/*判断第k个皇后目前放置位置是否与前面的皇后冲突*/
/*k:表示第几个皇后*/
int isplace(int pos[], int k) {
    int i;
    for (i = 1; i < k; i++) {
        // 同列冲突：pos[i] == pos[k]表示第 i 个皇后与第 k 个皇后在同一列（列号相同）。
        // 对角线冲突：abs(i - k) == abs(pos[i] - pos[k])
        if (pos[i] == pos[k] || abs(i - k) == abs(pos[i] - pos[k])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i, j, count = 1;
    // pos[i]表示第i个皇后放置在第i行的具体位置
    // 放置1-4
    int pos[N + 1];

    // 初始化位置
    for (i = 1; i <= N; i++) {
        pos[i] = 0;
        printf("第%d个皇后的值%d\n", i, pos[i]);
    }
    j = 1;
    printf("\ni的值：%d，j的值：%d，count的值:%d", i, j, count);
    while (j >= 1) {
        pos[j] = pos[j] + 1;
        /*尝试摆放第i个皇后*/
        while (pos[j] <= N && !isplace(pos, j)) {
            pos[j] = pos[j] + 1;
        }
        /*得到一个摆放方案*/
        if (pos[j] <= N && j == N) {
            printf("方案%d：", count++);
            for (i = 1; i <= N; i++) {
                printf("%d ", pos[i]);
            }
            printf("\n");
        }
        /*考虑下一个皇后*/
        if (pos[j] <= N && j < N) {
            j = j + 1;
        } else {
            pos[j] = 0;
            j--;
        }
    }
}
