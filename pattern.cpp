#include<iostream>

using namespace std;

int main(){
    cout<<"Enter the Number:"<<endl;
    int n,i,j;
    cin>>n;
    for(i=0;i<(2*n);i++){
        if(i<n){
            for(j=0;j<(2*n)+1;j++){
                if(j<(n-i) || j>((2*n)-(n-i))){
                    // cout<<j<<"* ";
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
        else{
            for(j=0;j<(2*n)+1;j++){
                if(j<=(i-n) || j>=((2*n)-(i-n))){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
//added many comments