#include <iostream>
using namespace std;
class myString{ 
    private:
        string a;
    public:
    myString(string x){
        a=x;
    }
    int len(){
        return a.length();
    }
    int operator+(myString b){
        return a.length()+b.len();
    }
}; 

int main() 
{
    myString A("ABC");
    myString B("qqryq");
    cout<<A+B<<endl;
    return 0;
}