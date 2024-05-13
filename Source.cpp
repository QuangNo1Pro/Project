#include<iostream>
#include<string>
using namespace std;

int check(string a)
{
	if (a.empty())
	{
		return 0;
	}
	if (a == "10")
	{
		return 1;
	}
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] <'1' || a[i] > '9')
		{
			return 0;
		}

	}
	return 1;
}
void DeathLoop()
{
	string tamp;
	int check_int = 0;
	do{

	   cout << "Nhap so nguyen thuoc [1,10] : ";
	   getline(cin, tamp);

	   check_int= check(tamp);
	 
	   if (check_int == 0)
	   {
		   cout << "Nhap lai so nguyen thuoc [1,10] : ";
		   getline(cin, tamp);
		   check_int = check(tamp);
	   }
	} while (check_int==0);

	cout << "Gia tri sau khi nhap : " <<tamp;

}
int main()
{
	DeathLoop();

	return 0;
}