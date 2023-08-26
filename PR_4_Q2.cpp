#include<iostream>
using namespace std;

class Hasti
{
	private:
		int h;
		
	public:
		set()
		{
			cout << "Enter the value : ";
			cin >> this->h;
		}
		
		Hasti operator+(Hasti p)
		{
			Hasti H;
			
			H.h = this->h + p.h;
			
			return H;
		}
		
		get()
		{
			cout << "Sum of given values : " << this->h;
		}
	
};

int main()
{
	Hasti h1,h2,h3;
	
	h1.set();
	h2.set();
	
	h3 = h1 + h2;
	
	h3.get();
	
	return 0;
	
}
