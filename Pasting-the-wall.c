#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#define M 101
#define N 101
#define K 101

bool cmp(char wall_copy[], char wallpaper[], int cur_wallpaper, int k)
{
    for (int i = 0; i < k - cur_wallpaper; i++)
    {
        if (wall_copy[i] == '*')
            continue;
        if (wall_copy[i] != wallpaper[cur_wallpaper + i])
            return false;
    }

    return true;
}

int8_t check(char wall[M][N], char wallpaper[], int8_t exist[M][N], int m, int n, int k)
{
    int cur_row, cur_col;
    bool found = true;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (exist[i][j] == 0)
            {
                cur_row = i;
                cur_col = j;
                found = false;
                break;
            }
        }
    }
    if (found)
    {
        return 1;
    }

    // horizontal
    char wall_copy[K] = {};
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k - i; j++)
        {
            wall_copy[j] = wall[cur_row][cur_col + j];
        }

        if (cmp(wall_copy, wallpaper, i, k))
        {
            for (int j = 0; j < k - i && cur_col + j < n; j++)
            {
                exist[cur_row][cur_col + j] = 1;
            }
            break;
        }
    }
    if (exist[cur_row][cur_col])
        return check(wall, wallpaper, exist, m, n, k);

    //  vertical
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k - i; j++)
        {
            wall_copy[j] = wall[cur_row + j][cur_col];
        }

        if (cmp(wall_copy, wallpaper, i, k))
        {
            for (int j = 0; j < k - i; j++)
            {
                exist[cur_row + j][cur_col] = 1;
            }
            break;
        }
    }
    if (exist[cur_row][cur_col])
        return check(wall, wallpaper, exist, m, n, k);

    return 0;
}

int main()
{
    int m = 0, n = 0, k = 0;
    scanf("%d %d %d", &m, &n, &k);
    getchar();

    char wall[M][N] = {};
    for (int i = 0; i < m; i++)
    {
        gets(*(wall + i));
        if (wall[i][strlen(wall[i]) - 1] == '\n')
            wall[i][strlen(wall[i]) - 1] = '\0';
    }

    char wallpaper[K] = {};
    gets(wallpaper);
    if (wallpaper[strlen(wallpaper) - 1] == '\n')
        wallpaper[strlen(wallpaper) - 1] = '\0';

    int8_t exist[M][N] = {0};

    printf("%d", check(wall, wallpaper, exist, m, n, k));

    return 0;
}