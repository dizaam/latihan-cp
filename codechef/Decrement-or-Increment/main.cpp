#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if((a%4)==0){
        cout<<++a;
    }else {
        cout<<--a;
    }

    return 0;
}
