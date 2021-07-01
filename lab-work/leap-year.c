#include <stdio.h>
#include <stdlib.h>
// Enter a start year and end year to get all leap years between them i.e 1990 2021 (cammand line input)
int leapYears(int yr) 
{

   if (((yr % 4 == 0) && (yr % 100 != 0)) || (yr % 400 == 0)) 
   {
      return 1;
   }
   return 0;
}

int main(int argc, char const *argv[]) 
{
   int startYear = atoi(argv[1]);
   int endYear = atoi(argv[2]);
   int yearSpan = endYear - startYear;
   int i = 0;

   while(i <= yearSpan) 
   {
      if( leapYears( startYear + i)) 
      {
         printf("%d\n", startYear + i);
      }

      i++;
   }

   return 0;
}

