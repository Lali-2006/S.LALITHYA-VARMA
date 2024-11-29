#include <stdio.h>
int a[2][2];
int b[2][2];
int c[2][2];
int main() {
int a[2][2]={{2,3},{4,9}};
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
printf(" %d ",a[i][j]);
}
printf("\n");
}

int b[2][2]={{9,8},{6,3}};
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
printf(" %d ",b[i][j]);
}
printf("\n");
}

c[0][0]=a[0][0]+b[0][0];
c[0][1]=a[0][1]+b[0][1];
c[1][0]=a[1][0]+b[1][0];
c[1][1]=a[1][1]+b[1][1];
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
printf(" %d ",c[i][j]);
}
printf("\n");
}
}
