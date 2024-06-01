#include <iostream>
#include <ctime>
using namespace std;
int main(){
	time_t current_time=time(0);
	char*showtime=ctime(&current_time);
	cout<<showtime;
}