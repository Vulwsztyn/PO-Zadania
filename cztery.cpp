#include <iostream>
using namespace std;
class myString{ 
    private:
        string a;
    public:
    myString(string x){
        a=x;
    }
    string content(){
        return a;
    }
    void clear(){
        a="";
    }
}; 
void clearContent(myString &a) {
a.clear();
}
void clearntContent(myString a) {
    //does nothing
a.clear();
}
int main() 
{
    myString A("ABC");
    cout<<A.content()<<endl;
    clearntContent(A);
    cout<<A.content()<<endl;
    clearContent(A);
    cout<<A.content()<<endl;
    cout<<"FIN"<<endl;
    return 0;
}