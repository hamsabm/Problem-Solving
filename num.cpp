#include <stdio.h>
int main() {
    int n; scanf("%d",&n);

    // upper half
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int j=1;j<=i;j++)
            printf((i==n||j==1||j==i)?"* ":"  ");
        printf("\n");
    }

    // lower half
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int j=1;j<=i;j++)
            printf((i==n||j==1||j==i)?"* ":"  ");
        printf("\n");
    }
}
