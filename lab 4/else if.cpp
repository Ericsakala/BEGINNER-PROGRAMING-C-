#include <iostream>
using namespace std;
class Animal{
	public:
		void behaviour(){
			cout<<"the animal have the following behaviour\n";
		}
};
class dog:public Animal{
    public:
	void behaviour(){
			cout<<"the animal have the following behaviour\n";
  }

};
class goat:public Animal{
	public:
	void behaviour(){
cout<<"Goat: running up and down\n";
}
};




int main(){
int**mark= new int*[3];
for(int i=0;i<3;i++){
    mark=new int*[2];

}
for(int i=0;i<3;i++){
  for(int j=0;i<2;j++){
   cout<<"enter the mark: ";
    cin>>mark[i][j];
}
}
for(int i=0;i<2;i++){
  for(int j=0;i<1;j++){

    cout<<mark[i][j];
}
}
}
