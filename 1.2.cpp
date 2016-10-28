 # include <iostream>
#include <conio.h>
 using namespace std;
  void main()
  {
  int n,c,i;
  c=0;
  i=0;
  scanf("%d",&n);
     while(i<n)
     {
    i=i++;
    if(i % 2 == 0)
    c=c+i; 
     }
  print("%d",c);
  system("pause");
  
  }