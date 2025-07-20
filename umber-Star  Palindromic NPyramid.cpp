#include<iostream>
using namespace std;

/*umber-Star  Palindromic NPyramid
// 1  
// 2*2  
// 3*3*3  
// 4*4*4*4  
// 3*3*3  
// 2*2  
// 1
*/

int main(){
int n;
cin>>n;

for(int row=0;row<n;row++){
    for(int col=0;col<2*row+1;col++){
        if(col%2==1){
            cout<<"*";
        }
        else{
            cout<<row+1;
        }
    }
    cout<<endl;
}
for(int row=n-1;row>=1;row--){
    for(int col=0;col<2*row-1;col++){
        if(col%2==1){
            cout<<"*";
        }
        else{
            cout<<row;
        }
    }
        cout<<endl;
    }
    return 0;
}
