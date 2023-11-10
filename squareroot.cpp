#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int i=0;
    int ans=0;
    while(i<=num){
        long sq=(long)i*i;

        if(sq==num){
            ans=i;
            break;
        }
        else if(sq>num){
            ans=i-1;
            break;
        }
        else{
            i++;
        }
    }
    cout<<"The square root of "<<num<<" is:"<<ans;
}
