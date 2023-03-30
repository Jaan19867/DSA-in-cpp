#include<iostream>
using namespace std;
class Fraction{
private:
int numerator;
int denominator;
public: 
Fraction( int numerator,int denominator){

    this->numerator=numerator;
    this->denominator=denominator;

}
 void print(){  cout<< this->numerator<<"/"<< this->denominator<<endl;}
void add(Fraction f2){  int lcm= denominator*f2.denominator;
int x=lcm/denominator;
int y= lcm/f2.denominator;
int num=numerator*x + (f2.numerator*y);
int den=denominator*f2.denominator;
this->numerator=num;
this->denominator=den;
}
void simplify(){
    int gcd;
    int j=min(this->denominator,this->numerator);
    for(int i=1;i<=j;i++){  if((this->denominator%i==0)&&(this->numerator%i==0)){
gcd=i;}
    }
    this->numerator=this->numerator/gcd;
    this->denominator=this->denominator/gcd;

}
void multliply(Fraction const &f2){
numerator=this->numerator*f2.numerator;
denominator=this->denominator*f2.denominator;
simplify();

}

};


int main(){
Fraction f1(10,2);
f1.print();
cout<<endl;
Fraction f2(15,4);
f2.print();
cout<<endl;
f1.add( f2);
cout<<endl;
f1.print();
f1.simplify();
f1.print();
f1.multliply(f2);
f1.print();






}