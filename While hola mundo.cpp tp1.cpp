#include <iostream>
#include <string>
using namespace std;
int main ()
{
	int i=0; //Va a aparecer el numero 1000, ya que el while se interpreta como falso.
	
	//for(i =100 ; i>=1; i--) ==> es igual que el FOR , pero el while es mas simple y corto.
	
		while(i<=100)
	
	{
	cout<<"hola mundo"<<i<<endl;
	
	i++;
		
	}
	

	
	return 0;
}