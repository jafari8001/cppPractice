#include <iostream>
using namespace std;

int main() {
   int num, binaryNum = 0, i = 1;
   cin >> num;

   while (num > 0) {
      binaryNum += (num % 2) * i;
      num /= 2;
      i *= 10;
   }

   cout << binaryNum;
   return 0;
}