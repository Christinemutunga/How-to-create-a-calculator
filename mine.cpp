//c++ program to make a calculator to add,subtract,multiply or divide using switch case.
# include<iostream>
using namespace std;

int main()
{
	char op;
	float num1, num2;
	
	cout<<"enter operator either + or - or * or / :";
	cin>>op;
	cout<<"enter two operands :";
	cin>>num1>>num2
	
	switch(op)
	{
		case'+':
			cout<<num1+num2;
			break;
		case'-':
			cout<<num1-num2;
			break;
		case'*':
			cou<<num1*num2;
			break;
			
		case'/'
		   cout<<num1/num2;
		   break;
		   
		   default:
//if the opator is other than +,-,* or /, error msg.is 
         cout<<"enter ! operator is not correct ";
         break;
	}
	return 0;
}
