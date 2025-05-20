#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    vector<int>table;
    table.push_back(0);
    table.push_back(1);
    if(n==0){
        cout<<n<<endl;
    }else if(n==1){
        cout<<n<<endl;
    }else{
        for(int i=2; i<=n; i++){
            table.push_back(table[i-1]+table[i-2]);
            cout<<table[i]<<" ";
        }
    }

}
