#include <iostream>
using namespace std; 
class st
{ 
char* och; 
char* group; 
char* FIO; 
public: st(char* _name,char* _group,char* _Och)
{ 
FIO=_name; 
group=_group; 
och=_Och; 
} 
char* 
getName() 
{
return FIO;
}
char* getGroup() {return group;}
char* getOch() 
{
return och;
} 
}; 
int main()
{
st a("Denis","'K-741'","'15'");
cout<<a.getName(); 
cout<<" Gruppa"; 
cout<<a.getGroup(); 
cout<<" Ochenca"; 
cout<<a.getOch(); 
cout<<"\n"; 
st b("Olya","'K-741;","'5'"); 
cout<<b.getName(); 
cout<<" Gruppa"; 
cout<<b.getGroup(); 
cout<<" Ochenca"; 
cout<<b.getOch(); 
cout<<"\n"; 
st c("Vasya","'K-741;","'3'"); 
cout<<c.getName(); 
cout<<" Gruppa"; 
cout<<c.getGroup(); 
cout<<" Ochenca"; 
cout<<c.getOch(); 
cout<<"\n"; 
st d("Vova","'K-741;","'2'"); 
cout<<d.getName(); 
cout<<" Gruppa"; 
cout<<d.getGroup(); 
cout<<" Ochenca"; 
cout<<d.getOch(); 
cout<<"\n"; 
st e("Sasha","'K-741;","'5'"); 
cout<<e.getName(); 
cout<<" Gruppa"; 
cout<<e.getGroup(); 
cout<<" Ochenca"; 
cout<<e.getOch(); 
cout<<"\n";
system("pause"); 
}