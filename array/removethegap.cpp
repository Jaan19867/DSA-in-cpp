#include <iostream>
#include <cstring>
using namespace std;

void  trimSpaces(char input[]) {
    // int n;
    // for( int i=0;input[i]!='\0';i++){n++;}
    // char input1[n]; int j=0;
    // for( int i=0;input[i]!='\0';i++){
    //     if(input[i]!=' '){ input1[j]=input[i];
    //     j++;};
    // }
    // input1[j]='\0';
    // return input1[j];

int i=0; int j=0;
while(input[i]){
    if(input[i]!=' '){ input[j]=input[i];
   
    j++;}
    i++;
}
input[j]='\0';

}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    // cout<<trimSpaces(input)<< endl;
    cout<<input;
}