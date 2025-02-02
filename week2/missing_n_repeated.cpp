#include <iostream>
using namespace std;
void findExtraAndMissingVal(int arr[], int n){
   int sumN = (n * (n + 1)) / 2;
   int sqSumN = (n * (n + 1) * (2 * n + 1)) / 6;
   int arrSum = 0, arrSqSum = 0, i;
   for (i = 0; i < n; i++) {
      arrSum += arr[i];
      arrSqSum += (arr[i]* arr[i]);
   }
   int y = (((arrSqSum - sqSumN) / (arrSum - sumN)) + sumN - arrSum) / 2;
   int x = arrSum - sumN + y;
   cout<<"The missing value from the array is "<<x;
   cout<<"\nThe value that occurs twice in the array is "<<y;
}
int main() {
   int arr[] = { 1, 2, 2, 3, 4 };
   int n = sizeof(arr)/sizeof(arr[0]);
   findExtraAndMissingVal(arr, n);
   return 0;
}
