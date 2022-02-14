/* Chuong trinh tim so lon nhat su dung ham */
#include <stdio.h>
#include <conio.h>
#define MAX 20
//Khai bao prototype
int max(int, int);
//ham tim so lon nhat trong mang 1 chieu
int max(int ia[], int in)
{
int i, imax;
imax = ia[0]; //cho phan tu dau tien la max
for (i = 1; i < in; i++)
if (imax < ia[i]) //neu so dang xet > max
imax = ia[i]; //gan so nay cho max
return imax; //tra ve ket qua so lon nhat
}
int main(void)
{
int ia[MAX];
int i = 0, inum;
do
{
printf("Nhap vao mot so: ");
scanf("%d", &ia[i]);
} while (ia[i++] != 0);
i--;
inum = max(ia, i);
printf("So lon nhat la: %d.\n", inum);
getch();
}