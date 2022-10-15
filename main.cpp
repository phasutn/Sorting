#include <iostream>
#include "bubble.h"
#include "insertion.h"
#include "selection.h"

using namespace std;


int main(int argc,char** argv) {
 int i,*a;
    //./a.out 10 20 30
  a=new int [argc-1];
  for(i=1;i<argc;i++) {
  /* transfer the value from argv into a*/
    a[i-1] = atoi(argv[i]);
    cout<<a[i-1]<<endl;
  }
  
  cout<<"Before sorted: ";
  display(a, argc);
  cout<<endl;  
  
  //bubble(a, argc-1);
  
  //insertion (a,argc-1);

  //selection(a,argc-1);
  
  cout<<"After sorted: ";
  display(a, argc);
  cout<<endl;
  
}