#include <iostream>

using namespace std;

int pow2(int x, int y) {

     int p = 1;

     for(int i = 1; i <= y; ++i) {

       p = p * x;
     }

     return p;
}

int GetCounts(int n) {
    int cnt = 0;
    while(n){
      cnt++;
      n /= 10;
    }
    return cnt;
}

void generateCyclic(int number) {

    int count = GetCounts(number),
        n = number;

     while(true) {

       cout<<n<<"\n";

       int rem = n % 10;
       int div = n / 10;
       n = (pow2(10,count-1)) * rem + div;
       if(n == number) {
         break;
       }
     }
}

int main(int argc, char const *argv[]) {

  int N;

  cout<<"N = ";
  cin>>N;

  generateCyclic(N);


  return 0;
}
