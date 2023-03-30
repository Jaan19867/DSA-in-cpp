#include<iostream>
using namespace std;
void printprefixes( char name[]){

    int k=0;
  while(name[k]){
    for( int i=0;name[i]!=0;i++){

      for (int j = 0; j <= i; j++) {
        cout << name[j];
      }
      cout << endl;
    }

    k++;
}
}
   

int main(){



    char name[100];
    cin>>name;
    printprefixes(name);
}
