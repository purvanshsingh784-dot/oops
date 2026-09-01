#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>attendance={75,82,96,42,62,70,80};
    int count=0;
    for (auto percentage:attendance){
        cout<<percentage<<"%"<<endl;
        if(percentage>75){
            count++;
        }
    }
    cout<<"\nNumber of student having attendace more than 75: "<<count<<endl;
    return 0;
}
      
    //wrong
//     for(auto value:numbers){
//         cout<<value<<" ";
//         if(value<=75){
//             cout<<"short attendace"<<endl;
//         }
//         else{
//             cout<<value<<" ";
//         }
//     }
//      return 0;
// }
      