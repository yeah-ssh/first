#include<iostream>
using namespace std;
using std :: string;
 class AbstractEmployee{
    virtual void promotion()=0;
 };
 
 class Employee:AbstractEmployee{
    private:
    string Name;
    string Company;
    int Age;
    
    public:
    void setName(string name){
        Name=name;}
    void setCompany(string company){
        Company=company;}
     void setAge( int age){
        Age=age;}
      string getName(){
        return Name;
      }  
      string getCompany(){
        return Company;
      }
      int getAge(){
        return Age;
      }
        
     void Introduce_yourself(){

        cout<<"Name is "<<Name<<endl;
        cout<<"Company is "<<Company<<endl;
        cout<<"Age is  "<<Age<<endl;
    }
          Employee(string name,string company,int age){
        Name=name;
        Company=company; 
        Age=age;
    }
    void promotion(){

        if(Age>20){
            cout<<Name<<" got promoted"<<endl;}
         else{
         cout<<Name<<" is not promoted"<<endl;
        }
    }
};
class Developer:Employee{  //developer saari details inherit kar raha hai employee class se toh iske liye base class hai employee 
                           //aur child class developer toh jo info saari employee mai hai vo developer mai store ho jayegi 
  public:
  string Lang;
  Developer(string name,string company,int age,string lang)
  :Employee(name,company,age)
    { 
        Lang=lang;
  }
  void print(){
    cout<<getName()<<" fixed bug using "<<Lang;
}
};
int main(){

Developer d=Developer("Yash","Zoop",18,"C++");
d.print();
 return 0;


}