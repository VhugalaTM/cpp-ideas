#include <iostream>
using namespace std;
int main(){
    //Residential
    double billPros_r=4.50,
    serviceFee_r=20.50,
    channels_r=7.50;

    //business
    double billPros_b=15.00,
    serviceFee_b=75.00,
    channels_b=50.00;

    int accountNo;
    char customerType;
    cout<<"Enter Account No.: ";
    cin>>accountNo;
    cout<<"Enter customer type: ";
    cin>>customerType;
    if(customerType == 'r' or customerType == 'R'){
        cout<<accountNo<<endl;
        cout<<"For a residential customer"<<endl;
        int channelNo;
        cout<<"How many channels are you paying for: ";
        cin>>channelNo;
        cout<<"The bill for "<<channelNo<<" channels is "
        <<billPros_r+serviceFee_r+channelNo*channels_r;
    }else if(customerType=='b' or customerType=='B'){
        cout<<accountNo<<endl;
        cout<<"For a business customer"<<endl;
        int basicfee, channelNo_b;
        cout<<"Enter the number of basic service connection: ";
        cin>>basicfee;
        cout<<"Enter number of channels: ";
        cin>>channelNo_b;
        if(basicfee<=10){
            cout<<"The bill is "<<billPros_b+serviceFee_b+channelNo_b*channels_b;
        }else{
            cout<<"The bill is "<<billPros_b+(basicfee-10)*serviceFee_b+channelNo_b*channels_b;
        }

    }else{
        cout<<"invalid customer type";
    }
    return 0;
}
