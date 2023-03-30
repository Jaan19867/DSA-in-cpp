#include<iostream>
using namespace std;
class ComplexNumbers{
int realPart;
int ComplexPart;


public:
ComplexNumbers(int realPart,int ComplexPart){
    this->realPart=realPart;
    this->ComplexPart=ComplexPart;}

    void Print(){ cout<<realPart<<"+"<<ComplexPart<<"i";}

void plus(ComplexNumbers const &c2){
    realPart=this->realPart+c2.realPart;
    ComplexPart=this->ComplexPart+c2.ComplexPart;
}
void multiply(ComplexNumbers const &c2){
   int  realPart1=this->realPart*c2.realPart-this->ComplexPart*c2.ComplexPart;
    int ComplexPart2=this->realPart*c2.ComplexPart+ this->ComplexPart*c2.realPart;
this->realPart=realPart1;
this->ComplexPart=ComplexPart2;



//    void multiply(ComplexNumbers const &c2){
//     int realPart1 =this->realPart*c2.realPart - this->ComplexPart*c2.ComplexPart;
//     int ComplexPart1 =this->realPart*c2.ComplexPart+ this->ComplexPart*c2.realPart;
    
//     realPart = realPart1;
//     ComplexPart = ComplexPart1;

}

};




int main(){

int real1,imaginary1,real2,imaginary2;
cin>>real1>>imaginary1;

cin>>real2>>imaginary2;
ComplexNumbers c1(real1,imaginary1);
c1.Print();
cout<<endl;
ComplexNumbers c2(real2,imaginary2);
c2.Print();
cout<<endl;
int choice;
cin>>choice;
if(choice==1){c1.plus(c2);
c1.Print();}
else if(choice!=1){ c1.multiply(c2);
c1.Print();}


}

