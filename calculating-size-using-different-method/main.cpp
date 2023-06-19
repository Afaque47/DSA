#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	char str1[] = { 'G', 'e', 'e', 'k' };
	char str2[] = "Geek";
	string str3 = "Geek";


	// This method works fine
	cout << "The length of str1 using sizeof(): "
		<< sizeof(str1) <<endl;

	// This method Works fine
	cout << "The length of str2 using strlen(): "
		<< strlen(str2)<< endl;

	// This method works fine
	cout << "The length of str3 using size(): "
		<< str3.length()<< endl;                          //str3.size();
}

