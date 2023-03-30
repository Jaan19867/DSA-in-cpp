#include<iostream>
using namespace std;


bool checkPalindrome(char str[]) {
    // Write your codint ne here
int n=0;
for( int i=0;str[i]!='\0';i++){ n++;}


 for(int i=0;i<=(n-1)/2;i++)
 
 
 {   if(str[i]!=str[n-i-1]){ return false;} 
}

return true;


}
int main(){


    char str[100];
    cin>>str;
    cout<<endl;
   cout<<checkPalindrome( str);

}