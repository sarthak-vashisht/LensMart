#include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i = 1;i<=n;){
        for(int j=1;j<=n;){
            cout<<j;
            j++;
        }
        // cout<<i<<endl;
        cout<<endl;
        i++;
    }
    return 0;
}