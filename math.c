#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
  long double x, y, syahen, point, answer;
  long i;
  answer = 3.14159265358979323846;
  i = 0;
  point = 0.0;
  srand(time(NULL));
  while (i < 1000000000)
  {
    i++;
    //printf("%d番目の処理を始めます。\n",i);
    x = (long double)rand() / RAND_MAX;
    y = (long double)rand() / RAND_MAX;
    syahen = x * x + y * y;
    if (sqrt(syahen) < 1.0)
    {
      //printf("　距離は%fであるため入ります\nポイントプラス１\n",sqrt(syahen));
      point++;
      //}else{
      //printf("　距離は%fであるため入りません次の処理に進みます。\n",sqrt(syahen));
    }
    if (i % 1000000000 == 0)
    {
      printf("%ld回目：%20.19LF\n", i, 4 * point / i);
      printf("%ld回目：誤差%20.19LF\n", i, 4 * point / i - answer);
    }

    /* code */
  }
  long double kekka = 4 * point / i;
  printf("%ld回中%LF回入りました。したがって結果は\n", i, point);

  printf("%20.19LF\n", kekka);
}
