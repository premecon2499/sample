#include<iostream>

using namespace std;

int main(){
    cout<<"ENTER THE NUMBER:"<<endl;
    int n,i,j;
    char alpha;
    cin>>n;
    for(i=0;i<n;i++){
        alpha = 'A';
        for(j=0;j<(2*n);j++){
            if(j<n-1-i || j>n+i){
                cout<<" ";
            }
            else{
                if(j<n){
                    cout<<alpha++;
                }
                else{
                    cout<<j-(n-1);
                }
            }
        }
        cout<<endl;
    }
}