#include<iostream>
using namespace std;

class msg
{
	private:
		string h = "Hasti";
		string p;
		
	public:
		print()
		{
			cout << this->h << endl;
		}
		
		print(string p)
		{
			cout << this->h << ","<< p << endl;
		}
		
};

int main()
{
	string p;
	     	cout << "Enter any msg : ";
			cin >> p;
	
	msg H;
	
	H.print();
	H.print(p);
	
	
	return 0;
	
}
