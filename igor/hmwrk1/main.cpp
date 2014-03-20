#include <iostream>
#include <conio.h>

using namespace std;

unsigned long evklid(int);
void arrays(int *, int);
void arraymove(int *,int,int);

void main()
{
	int a=0;
	int arr[]={1,3,9,27,31};
	int len=sizeof(arr)/sizeof(arr[0]);
	int shift=0;

	cout << "Type one of the following numbers: 71, 72, 73, 91, 92" << endl;
	cin >> a;

	switch(a)
	{
	case 71:
	case 72:
	case 73:
		cout << endl << "NOD = " << evklid(a%10) << endl;
		break;
	case 91:
		cout << endl << " in: ";
		for(int i=0;i<len;++i)
		{
			cout << arr[i] << "\t";
		}

		arrays(arr,len);

		cout << endl << "out: ";
		for(int i=0;i<len;++i)
		{
			cout << arr[i] << "\t";
		}
		break;
	case 92:
		cout << "shift = ";
		cin >> shift;
		cout << endl << " in: ";
		for(int i=0;i<len;++i)
		{
			cout << arr[i] << "\t";
		}

		arraymove(arr,len,shift);

		cout << endl << "out: ";
		for(int i=0;i<len;++i)
		{
			cout << arr[i] << "\t";
		}
		break;
	default:
		cout << "Nothing happened" << endl;
	}
	
getch();
}

unsigned long evklid(int n)
{
	int c=0;
	unsigned long a=0,b=0;

	cout << endl << "Euclidean algorithm:";
	cout << endl << "number 1 = ";
	cin >> a;
	cout << endl << "number 2 = ";
	cin >> b;

	switch(n)
	{
	case 1:
		while(a!=b)		(a>b) ? a-=b : b-=a;	// вычитанием
		break;
	case 2:
		while(!(a==0 || b==0))		(a>b) ? a%=b : b%=a;	// делением по модулю
		if(a==0) a=b;
		break;
	case 3:
		while(a>1 && b>1 && a!=b)
		{
			if(a&1)	
			{	// а нечетное
				if(b&1)	
				{	// б нечетное
					(a>b) ? a=(a-b)>>1 : b=(b-a)>>1;
				}
				else	
				{	// б четное
					b>>=1;
				}
			}
			else
			{	// а четное
				if(b&1)	
				{	// б нечетное
					a>>=1;
				}
				else	
				{	// б четное
					a>>=1;
					b>>=1;
					++c;
				}
			}
		}

		if(a>b)		// a, b  = 0, 1 , NOD  ?
		{
			if(b==1) a=1;
		}
		else
		{
			if(a==0) a=b;
		}

		a<<=c;	// рез-тат
		break;
	default:
		cout << "Nothing happened" << endl;
	}

	return a;
}

void arrays(int *a, int l)
{
	int first=a[0];
	
	for(int i=0;i<l-2;++i)
	{
		a[i]=(a[i]+a[i+2])/2;
	}

	for(int i=l-2;i>0;--i)
	{
		a[i]=a[i-1];
	}
	a[0] = first;
}

void arraymove(int *a, int l, int n)
{
	int c, k=1;
	n%=l;
	if(n!=0)
	{
		while(k<=l/n)
		{
			for(int i=n-1;i>=0;--i)
			{
				c=a[i];
				a[i]=a[(i+n*k)%l];
				a[(i+n*k)%l]=c;
			}
			++k;
		}
	}
}