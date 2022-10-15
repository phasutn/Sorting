#include <iostream>
using namespace std;

void selection(int *a, int N){
  int i, j, argc = N+1;
  for(i=0;i<N-1;i++){
    //min = a[i];
    int value = i;
    for(j=i;j<N;j++){
      if(a[j] < a[value]){
        //min = a[j];
        value = j;
        //display(a, argc);
      }
    }
    swap(a[value],a[i]);
    //display(a, argc);
    //cout<<endl;
  }
}