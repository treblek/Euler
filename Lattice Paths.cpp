#include "iostream"

using namespace std;

int calculateNumberOfDifferentWay(string);
void seperate(string sentEnteredSquareSize, int *sentSize);
int pow(int,int);
int stringSize(string);
int fact(int number);

class Convert
{
	public:
		int ToInt(string sentStringNumber)
		{
			int i, willReturn=0;
			for(i=stringSize(sentStringNumber)-1;i>=0;i--)
			{
				willReturn += (sentStringNumber[stringSize(sentStringNumber)-1-i]-48)*pow(10,i);
			}
			return willReturn;
		}
};
		
int main()
{
	string enteredSquareSize;
	cout<<"Please enter square size ex:(3x2)";
	cin>>enteredSquareSize;
	cout<<calculateNumberOfDifferentWay(enteredSquareSize);
	return -1;
}

int calculateNumberOfDifferentWay(string sentEnteredSquareSize)
{
	int  size[2];
	seperate(sentEnteredSquareSize, size);
	return fact(size[0]+size[1])/(fact(size[0])*fact(size[1]));
	
}


void seperate(string sentEnteredSquareSize, int *sentSize)
{
	Convert convert;
	int i=0;
	string values[2];
	while(sentEnteredSquareSize[i] != 'x')
	{
		values[0] +=sentEnteredSquareSize[i];
		i++;
	}
	i++;
	while(sentEnteredSquareSize[i] != '\0')
	{
		values[1] += sentEnteredSquareSize[i];
		i++;
	}
	sentSize[0] = convert.ToInt(values[0]);
	sentSize[1] = convert.ToInt(values[1]);
}


int stringSize(string sentStringNumber)
{
	int i=0;
	while(sentStringNumber[i] != '\0')
	i++;
	return i;
}
int pow(int num,int pow)
{
	int i=0;
	int willReturn=1;
	for(i=0;i<pow;i++)
	willReturn*=num;
	return willReturn;
	}
int fact(int number)
{
	int i = 1;
	while(number>0)
		i*=number--;
	return i;
}
		
