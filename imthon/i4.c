#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int *korsatkich = &n;
  *korsatkich = 25;

  printf("Yangi qiymat: %d\n", n);
}