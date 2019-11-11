#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter two numbers a and b for which you want to find gcd"<<endl;
  cin>>a>>b;
  int r1,r2,r,q,s1=1,s2=0,s,t1=0,t2=1,t;
  if(a>b)
  {
  	r1=a;
  	r2=b;
  	
  }
  else 
  {
  	r1=b;
  	r2=a;
  }
  
  cout<<"q	"<<"r1	"<<"r2	"<<"r	"<<"s1	"<<"s2	"<<"s	"<<"t1	"<<"t2	"<<"t	"<<endl;
  while(r2>0)	
  {
     q=r1/r2;
	 r=r1-q*r2;
	 s=s1-q*s2;
	 t=t1-q*t2;
	 cout<<q<<"	"<<r1<<"  "<<r2<<"	"<<r<<"	 "<<s1<<"	"<<s2<<"	"<<s<<"	 "<<t1<<"  "<<t2<<"	 "<<t<<"   "<<endl;
	 r1=r2;
	 r2=r;  	
  	
  	 s1=s2;
  	 s2=s;
  	
  	 t1=t2;
  	 t2=t;
  	
  }
  cout<<" s1 t1"<<s1<<"  "<<t1<<endl;
  int y;
  y=a*s1+b*t1;
   cout<<"gcd for "<<a<<"  "<<b<<"is "<<r1<<endl;
   	cout<<"y"<<y;
	
}
