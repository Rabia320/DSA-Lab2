#include <iostream>
using namespace std;

void analyze_pointer(int *ptr){
    
    cout<<"The memory address pointed towards "<< ptr<< endl;

    cout<<"The actual value pointed towards "<< *ptr <<endl;
}
int main() {
   
    //on the stack
   int iValue= 5;
   int *p= &iValue;
   analyze_pointer(p);


   //on the heap
   
   int *val = new int ;
   *val= 4;

 analyze_pointer(val);

 delete val;

}