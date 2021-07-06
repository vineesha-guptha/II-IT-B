#include <stdio.h>
int main()
{
    // P0, P1, P2, P3, P4 are the Process names here
  
    int n, m, i, j, k, avail[10];
    printf("enter no. of resources: ");
    scanf("%d", &m);
    printf("enter total allocation of resources: ");
    for(i = 0; i < m; i++)
    	scanf("%d", &avail[j]);
    printf("enter no. of processes: ");
    scanf("%d", &n);
	int alloc[n][m],  max[n][m], need[n][m];
    printf("enter initial allocation matrix: ");
    for(i = 0; i < n; i++)
    {
    	for(j = 0; j < m; j++)
    	{
    		scanf("%d", &alloc[i][j]);
		}
	}
	printf("enter max allocation matrix: ");
    for(i = 0; i < n; i++)
    {
    	for(j = 0; j < m; j++)
    	{
    		scanf("%d", &max[i][j]);
		}
	}
  	printf("need matrix is\n");
    int f[n], ans[n], ind = 0;
    for (k = 0; k < n; k++) {
        f[k] = 0;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }
    int y = 0;
    for (k = 0; k < 5; k++) {
        for (i = 0; i < n; i++) {
            if (f[i] == 0) {
                int flag = 0;
                for (j = 0; j < m; j++) {
                    if (need[i][j] > avail[j]){
                        flag = 1;
                         break;
                    }
                }
  
                if (flag == 0) {
                    ans[ind++] = i;
                    for (y = 0; y < m; y++)
                        avail[y] += alloc[i][y];
                    f[i] = 1;
                }
            }
        }
    }
    printf("Following is the SAFE Sequence\n");
    for (i = 0; i < n - 1; i++)
        printf(" P%d ->", ans[i]);
    printf(" P%d", ans[n - 1]); 
    return 0;
}
