#include <stdio.h>
struct complexNumber
{
   int realnumber, imaginarynumber;
};
int main()
{
   struct complexNumber x, y, z,p;
   printf("enter first complex number x and y\n");
   scanf("%d%d", &x.realnumber, &x.imaginarynumber);
   printf("enter second complex number z and p\n");
   scanf("%d%d", &y.realnumber, &y.imaginarynumber);
   z.realnumber =x.realnumber + y.realnumber;
   z.imaginarynumber =x.imaginarynumber +y.imaginarynumber;
   printf("Sum of the complex numbers: (%d) + (%di)\n", z.realnumber, z.imaginarynumber);
   return 0;
}