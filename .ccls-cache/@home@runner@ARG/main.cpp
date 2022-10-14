#include <iostream>
using namespace std;
void swap(int &a ,int &b) {
	int t;
	t=a;
 a=b;
 b=t;
}


int main(int argc,char** argv) {
 int i,*a;
    //./a.out 10 20 30
  a=new int [argc-1];
  for(i=1;i<argc;i++) {
  /* transfer the value from argv into a*/
    a[i-1] = atoi(argv[i]);
    cout<<a[i-1]<<endl;
  }

  int N=argc-1,j;

  for(i=0;i<N-1;i++){
    
    //check neighbour
    ///swap if it's not right
    
  }

  

  
}