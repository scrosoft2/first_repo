#include<iostream>
#include<stdlib.h>
#include<conio.h>

#define N 5

using namespace std;

class stack{
	private:
		int stak[N],top;
		
	public:
		stack(){
			top = -1;
		}	
		
	void push(){
		int x;
		cout<<"Enter value you want to push to stack"<<endl;
		cin>>x;
		
		if(top == N-1)
		{
			cout<<"stack is already full overflow"<<endl;
			return;
		}
		else
		{
			top++;
			stak[top] = x;
			
			//cout<<stak[top];			
		}
		
		
	}
	void pop(){
		int item;
		if(top == -1){
			cout<<"under flow"<<endl;
		}
		else
		{
			item = stak[top];
			top--;
			cout<<"pop item is this:"<<item<<endl;
		}
	}
	void disp(){
		int show;
		for(show=top;show>=0;show--){
			
			cout<<stak[show]<<"stack is \n";
			
			
		}
	}
	
};




int main()
{
	stack obj;
	int i,j,k;
	for(i=0;i<4;i++){
		
	cout << "\nPlease select a course:" <<endl;
    cout<<"1. PUSH\n";
    cout<<"2. POP\n";
    cout<<"3. Display stack\n";
    cout<<"4. exit the code: ";
    cin >>j;
		switch(j){
		case 1:
			
			for(k=-1;k<=N;k++){
				obj.push();
			}
			
		
		break;
		
		case 2:
			obj.pop();
		break;
		
		case 3:
			obj.disp();
		break;
		
		case 4:
			exit(0);
		break;
			
		}
	
	}
	


}
