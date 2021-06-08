#include <stdio.h>
#define PI 3.14
int
main ()
{
  int d, t;
  double r, v;

  scanf ("%d%d", &d, &t);

  if (d >= 1 && t <= 100)
    {
      r = (double) d / 2;
      v = PI * r * r * t;
      printf ("%0.2lf cm^3\n", v);
    }
  return 0;

}
