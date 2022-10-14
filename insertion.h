#include <iostream>
using namespace std;

void insertion(int *a,int N){
  int i,j,value,argc = N+1, count=0, change=0;
  for(i=1;i<N;i++){
    value = a[i];
    for(j=i-1;j>=0 && a[j]>value;j--){
      a[j+1] = a[j];
      //count++;
      //change++;
      //display(a, argc);
      //cout<<endl;
    }
    a[j+1] = value;
    //count++;
    //change++;
  }
  //cout<<count<<endl;
  //cout<<change<<endl;
}
