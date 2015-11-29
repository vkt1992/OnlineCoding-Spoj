#include <iostream>
using namespace std;

int main () {

	int t;

	cin>>t;
	while(t--)
	{
char name[256], title[256];

  cout << "Enter your name: ";
  cin.getline (name,256);

  cout << "Enter your favourite movie: ";
  cin.getline (title,256);

  cout << name << "'s favourite movie is " << title;
  cout<<endl;

	}

  
  return 0;
}