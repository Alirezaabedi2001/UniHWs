#include <iostream>

using namespace std;

int main()
{


    int a;
    cout << "please enter a even number: ";
    cin >> a;

    cout<< "\n";

    //up,right
    for(int i =0; i<a;i++){
        for(int j=0;j<i;j++)
        cout << "*";
    cout << "*\n";
    }
    cout << "\n";

    //up,left
    for(int i=1; i<=a;i++){
        for(int j=a;j>i;j--)
            cout<<" ";
            for(int k=1;k<=i;k++)
                cout<<"*";
        cout<<"\n";
   }
    cout<<"\n";

    //up
    for(int i=1;i<=a;i++){
        for(int j=i;j<a+a;j++)
            cout<<" ";
             for(int u=0;u<2*i-1;u++)
                cout<<"*";
             cout<<"\n";
    }
    cout << "\n";

    //midlle of star,left part
    for(int i=0;i<(a/2);i++){
         for(int j=0;j<=i;j++)
            cout<<" ";
            for(int d=(2*a-1*i)-2;d>0;d--)
                cout<<"*";
            cout<<"\n";
      }
    cout << "\n";

    //midlle of star,right part
    for(int i=1; i<=(a/2);i++){
        for(int j=(2*a-1*i);j>i;j--)
            cout<< "*";
        cout<<"*\n";
    }
    cout<< "\n";

     //all midlle of star
     for(int i=0;i<=(a/2);i++){
         for(int j=0;j<=i;j++)
            cout<<" ";
            for(int d=(4*a-2*i-4);d>0;d--)
                cout<<"*";
            cout<<"\n";
      }
      cout << "\n";

    //left leg of star
    for(int i=1; i<=a;i++){
        for(int j=a;j>i;j--)
            cout<< "*";
        cout<<"*\n";
    }
    cout<< "\n";

    //right leg of star
    for(int i=0;i<a;i++){
         for(int j=0;j<=i;j++)
            cout<<" ";
            for(int d=(a-1*i);d>0;d--)
                cout<<"*";
            cout<<"\n";
      }
      cout<<"\n";

    for(int i=0 ;i<a;i++){
        for(int j=0;j<(a)+(a-i-1);j++)
        cout <<" ";
          for(int m=0;m<(2*i+1);m++)
                cout<<"*";
            cout<<"\n";
    }
     for(int i=0;i<(a/2);i++){
         for(int j=0;j<=i;j++)
            cout<<" ";
            for(int d=(4*a-2*i-4);d>0;d--)
                cout<<"*";
            cout<<"\n";
      }
      for(int i=0;i<a;i++){
         for(int j=0;j<=i;j++)
            cout<<" ";
            for(int d=(a-1*i);d>0;d--)
                cout<<"*";
            cout<<"\n";
      }
}
