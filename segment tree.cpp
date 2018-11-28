#include<bits/stdc++.h>
using namespace std;
#define MAX 600000
int main() {
int n;
scanf("%d", &n);
int* arr = (int*)malloc(sizeof(int) * MAX);
memset(arr, 0, sizeof(int) * MAX);
int l, h, p, c, x;
for (int i = 0; i < n; i++) {
scanf("%d %d %d %d %d", &l, &h, &p, &c, &x);
int max = -1;
for (int j = 0; j < l; j++) {
if (max < arr[x + j]) max = arr[x + j];
}
if (c) {
for (int j = 0; j < l; j++) {
arr[x + j] = max + 1;
}
arr[x + p - 1] += h;
} else {
if (max < arr[x + p - 1] + h) max = arr[x + p - 1] + h;
for (int j = 0; j < l; j++) {
arr[x + j] = max + 1;
}
}
}
int max = -1;
for (int i = 0; i < MAX; i++) {
if (max < arr[i]) max = arr[i];
}
printf("%d\n", max);
free(arr);
return 0;
}
