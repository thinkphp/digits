/*
Se citeste un numar natural n. Sa se verifice daca suma
cifrelor diametral opuse este constanta.
n = abcd -> a + d = b + c
n = abcde -> a + e = b + d
Exemplu:
n = 4512 , avem 4 + 2 = 1 + 5
Output -> YES
n = 22422, avem 2 + 2 = 2 + 2 = 4
Output -> YES
n = 12315, avem 1 + 5 != 2 + 1 != 3
Output -> NO
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  unsigned int n = 1237456, counter = 0, n2, num;

  n2 = n;

  num = 0;

  while(n2!=0) {

     num = num * 10 + n2 % 10;
     n2 /= 10;
     counter++;
  }

  unsigned int s = n % 10 + num % 10;

  if(counter % 2 == 0) {
        cout<<"case#1\n";
        int flag = 1;
        while(num!=0){
           if(s != n % 10 + num % 10) {
               flag = 0;
           }
           num /= 10;
           n /= 10;
        }
        if(flag == 1) {
          cout<<"YES!";
        } else {
          cout<<"NO!";
        }
  } else {
        cout<<"case#2\n";
        int i = 1,
            flag = 1;

        while(n!=0) {

           if(i == (counter / 2 + 1) ) {

               if(2 * s != n % 10 + num % 10)

                  flag = 0;

           } else {

                  if(s != n % 10 + num % 10)

                  flag = 0;
           }

           i++;
           n /= 10;
           num /= 10;
        }

        if(flag == 1) {
          cout<<"YES!";
        }else {
          cout<<"NO!";
        }
  }


  return 0;
}
