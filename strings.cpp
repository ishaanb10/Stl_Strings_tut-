#include<bits/stdc++.h>
using namespace std;

class String_funcs
{
    private:

    char *strings;  
    string base;
    string arrow_seperated;

    public:

    String_funcs(string,string,char*);

string get_base()
{
  return this->base;
}

char * get_strings(){
return this->strings;
  
  
}
string arrow_seperated_string(){
  return this->arrow_seperated;
}


void String_operations(){
string eg=this->base;
string str2;
  


  
}
  



};




String_funcs :: String_funcs(string a,string b,char *c){
this->base=a;
this->arrow_seperated=b;
// this->strings=new char[10];
  this->strings=c;

  
}





int main(){
String_funcs s("someString","arrow->seperated->string","cStyleString");

cout<<s.get_base()<<" "<<s.get_strings()<<" "<<" ";
return 0;  
}
