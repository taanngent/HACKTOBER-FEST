//CF88
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class box 
{ 
 float length, breadth, height;
  
 public:
  box()
  {length=2.1;
   breadth=3.2;
   height=3.3;
   cout<<"In default const";
  }
  
  box(float l, float b, float h)
  {length=l;
   breadth=b;
   height=h;
   cout<<"In argument const";
  }
  
  box(box &b)
  {length=b.length;
   breadth=b.breadth;
   height=b.height;
   cout<<"In copy const";
  }
  
  void volume()
  {cout<<"volume ="<<length*breadth*height<<endl;
  }
  
  ~box()
  {cout<<"destructor invoked";
  }
};
  

int main()
{ clrscr();
 int ch;
 float l1, b1, h1;
 char rep='y';
 cout<<"prgrm using const overloading";
 while(rep=='y')
 {box bo;
  cout<<"1. default 2. parameter 3. copy";
  cout<<"enter your choice: ";
  cin>>ch;
  switch(ch)
  {case 1: box ob1;
           ob1.volume(); break;
   case 2: {cout<<"enter values of l,b,h:";
            cin>>l1>>b1>>h1;
            box ob2(l1,b1,h1);
            ob2.volume; break;
           }
   case 3: box ob3(bo);
           ob3.volume();
  }
  cout<<"\n Continue? ";
  cin>>rep;
 }
 getch();
}
