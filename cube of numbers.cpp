#include<iostream>
using namespace std;
class a
{
	protected:
		int n;
	public:
		int cube()
		{
			cout<<"enter the number :"<<endl;
			cin>>n;
			for(int i=0; i<n; i++)
			{
				cout<<" cube of "<<i<<" is "<<"="<<(i*i*i)<<endl;
			}
		}
};
int main()
{
	a obj;
	obj.cube();

}
