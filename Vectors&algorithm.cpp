#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    //creating a vector
    vector<int>a={10,4,1,2,7,22,9};

    //add an element to the vector
    a.push_back(34);
    cout<<"After inserting 34: ";
    for(size_t i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //Removing an element
    if(a.size()>3){
        a.erase(a.begin()+3);
    }
    cout<<"After removing elements at index 3: ";
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }

    //Sorting the vector
    sort(a.begin(), a.end());
    cout<<endl<<"After sorting in ascending order: ";
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //finding the minimum and maximum value
    int maxV, minV;
    maxV=*max_element(a.begin(), a.end());
    minV=*min_element(a.begin(), a.end());
    cout<<"The maximum value is: "<<maxV<<endl
        <<"The minimu value is: "<<minV<<endl;

    //Searching and finding the position of an element
    auto x=find(a.begin(), a.end(),10);
    int index=distance(a.begin(), x);
    if(x != a.begin()){
        cout<<"The position of value 10: "<<index<<endl;
    }else{
        cout<<"The position of value 10 is not found"<<endl;
    }

}

