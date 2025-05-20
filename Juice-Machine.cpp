#include <iostream>
using namespace std;
int main(){
    int start;
    cout<<"Press 1 to make purchase and 0 to exit: ";
    cin>>start;
    while(start!=0){
        string juices[]={"Orange", "Apple","Mango","Strawberry","banana"};
            double price[]={10.00, 14.00, 13.00, 11.00, 15.00};
            int id[]={1,2,3,4,5};

            cout<<"Juice Products: "<<endl<<endl;
            for(int i=0; i<5; i++){
                cout<<id[i]<<" - "<<juices[i]<<" Juice"<<endl;
            }

            cout<<endl;
            int select;
            cout<<"Which Juice Do You Want"<<endl;
            cout<<"Enter the number of juice: ";
            cin>>select;

            int cash;

            switch(select){
            case 1:
                cout<<juices[0]<<" Juice is R"<<price[0]<<endl;
                cout<<"Enter amount: ";
                cin>>cash;
                cout<<"Great, your purchase for "<<juices[0]<<" Juice is successful";        break;
            case 2:
                cout<<juices[1]<<" Juice is R"<<price[1]<<endl;
                cout<<"Enter amount: ";
                cin>>cash;
                cout<<"Great, your purchase for "<<juices[1]<<" Juice is successful";
                break;
            case 3:
                cout<<juices[2]<<" Juice is R"<<price[2]<<endl;
                cout<<"Enter amount: ";
                cin>>cash;
                cout<<"Great, your purchase for "<<juices[2]<<" Juice is successful";
                break;
            case 4:
                cout<<juices[3]<<" Juice is R"<<price[3]<<endl;
                cout<<"Enter amount: ";
                cin>>cash;
                cout<<"Great, your purchase for "<<juices[3]<<" Juice is successful";        break;
            case 5:
                cout<<juices[4]<<" Juice is R"<<price[4]<<endl;
                cout<<"Enter amount: ";
                cin>>cash;
                cout<<"Great, your purchase for "<<juices[4]<<" Juice is successful";        break;
            default:
                cout<<"Invalid Entry";
            }
            cout<<endl;
            cout<<"Press 1 to make another purchase and 0 to exit: ";
            cin>>start;
    }
    cout<<endl;
    cout<<"THANK YOU FOR USING ME"<<endl;

    return 0;
}
