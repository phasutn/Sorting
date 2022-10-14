#include <iostream>
using namespace std;

void swap(int &a ,int &b) {
  int t;
	t=a;
  a=b;
  b=t;
}

void display(int *a,int argc){
  int i;
  for(i=1;i<argc;i++) {
    cout<<a[i-1]<<" ";
  }
}

void bubble(int *a,int N){
  int i,j,count=0,change=0;
  for(i=0;i<N-1;i++){
    int sorted =0;
    for(j=0;j<N-1;j++){
      if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
        sorted = 1;
        //change++;
      }
      //display(a, N+1);
      //count++;
      //cout<<endl;
    }
    //cout<<endl;
    if (sorted==0) break;
  }
  //cout<<count<<endl;
  //cout<<change<<endl;
}
