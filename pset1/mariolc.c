#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int h;
    int r;
    int l;
    int f;

   do
   {
       h = get_int ("Height: ");
   }
   while (h < 0 || h > 23);

   if (h > -1 && h < 24)
   {
     for ( r = 0, r < h, r++);
     {
        //int s = h - r - 1;
        //int f = 2 + r;
        for ( l = 0, l < h-1, l++);
        {
            printf(" ");
        }
        for ( f = 0, f < r + 2, f++);
        {
            printf("#");
        }
        printf("\n");
   }
}
