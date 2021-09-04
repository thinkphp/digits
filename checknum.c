/*
Se citeste de la tastatura un numar natural. Sa se verifice daca 
numarul are cifrele in ordine:
- crescatoare
- descrescatoare
- unordered
*/
#include <stdio.h>

int main(int argc, char const *argv[]) {

  long long num;

      printf("num = ");

      scanf("%lld", &num);

      int ord, asc, c, r;

      //12345

      r = num % 10;

      while(r == num/10%10) num/=10;

      if(num % 10 > num / 10 % 10) {

        asc = 1;

      } else {

        asc = 0;
      }

      if( asc ) {
          ord = 1;
          while(num/10) {

            r = num % 10;

            printf("%d < %lld ? %d\n", r, num /10%10, r < num /10%10);

            if(r < num /10 % 10) ord = 0;

            num /= 10;
          }
          if(ord) printf("Ascending Ordered.");
                else
                  printf("Unordered.");
      } else if(asc == 0) {

        ord = 1;

        while(num/10) {

          r = num % 10;

          printf("%d < %lld ? %d\n", r, num /10%10, r < num /10%10);

          if(r > num /10 % 10) ord = 0;

          num /= 10;
        }

        if(ord==1) printf("Descending Ordered.");

              else

                printf("Unordered.");
      }

  return 0;
}
