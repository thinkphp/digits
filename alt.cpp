/*
Se citeste un numar natural nenul N. Sa se verifice daca cifrele pare si cifrele
impare alterneaza.

Input -> N = 1234
Output -> YES

Input -> N = 1223
Output -> NO

Input -> N = 4729
Output -> YES

Input -> N = 81
Output -> YES

Input -> N = 82
Output -> NO

*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int n, //input number
      flag, //for test
      c,//for contor
      x; //is used to see if on an odd position we have even digit

  cin>>n;

  if(n%10%2 == 0) x = 0;//that means we have even digits on odd positions

         else
                  x = 1;//thats means we have odd digits on odd positions

  c = 1;

  if(x == 0) {

      while(n) {

        if(c % 2 != 0 && n % 10 % 2 != 0) flag = 0;

        if(c % 2 == 0 && n % 10 % 2 == 0) flag = 0;

        n /=10;

        c++;
      }

  } else {

    while(n) {

      if(c % 2 != 0 && n % 10 % 2 == 0) flag = 0;

      if(c % 2 == 0 && n % 10 % 2 != 0) flag = 0;

      n /=10;
      c++;
    }

  }

  if(!flag) cout<<"Not Alternate!";

        else

             cout<<"It's Okay!";
  return 0;
}
