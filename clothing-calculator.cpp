#include <iostream>
using namespace std;
double height(double h){
    return h*3.26084;
}
int meter(int m){
    return m*2.20462;
}
void a(int x, double y){
    int x1;
    double x2;
    x=meter(x1);
    y=height(x2);
    if((x>=5.2 and x<=5.6) and (y>=50 and y<=55)){
        cout<<"Small";
    }else if((x>=5.7 and x<=5.8) and (y>=56 and y<=65)){
        cout<<"Medium";
    }else if((x>=5.9 and x<=6.2) and (y>=65 and y<=75)){
        cout<<"Large";
    }else if((x>=6.3 and x<=6.5) and (y>=75 and y<=85)){
        cout<<"Extra Large";
    }else if(x>=6.5 and (y>=86 and y<=95)){
        cout<<"Extra Large 2";
    }else{
        cout<<"Size not available";
    }
}
int main(){
    double a1;
    cout<<"Enter height: ";
    cin>>a1;
    int a2;
    cout<<"Enter Weight: ";
    cin>>a2;

    double a3=height(a1);
    int a4=meter(a2);

    cout<<"Height: "<<a3<<endl
        <<"Weight: "<<a4<<endl;
    cout<<"Your size is: ";
    a(a3, a4);

    return 0;
}
