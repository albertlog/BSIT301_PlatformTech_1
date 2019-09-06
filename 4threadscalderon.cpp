#include <iostream>
#include <thread>
#include <string>
 using namespace std;
 
void BERT (int x){
	int i=0;
	for(i=0; i < x; i++){
		cout << "This is Thread 1 \n";
	}
}

void JC(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this is thread 2 \n";
	}
}
void JIAN(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this is thread 3 \n";
	}
}

void BASA(int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "this is thread 4 \n";
	}
}
.

int main() {
	
	int i = 0;
	thread th1(BERT, 4);
	thread th2(JC, 4);
	thread th3(JIAN, 4);
	thread th4(BASA, 4);
    
    for(i = 0; i< 10; i++) {
    	cout << "this print is from Main Method \n" ;
	}
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();
     return 0;

}

void countdown(int n)
{
	cout << n << endl;
	n--;
	if(n > 0)
	{
		countdown(n); 
	}
}

int main()
{
	countdown(10); 

	return 0;
}
