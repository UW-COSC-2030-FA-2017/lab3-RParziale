//Ryan Parziale
//COSC2030
//Lab3
//9-25-2017


//QUESTIONS OR WHAT THE HELL EVER

#include <iostream>
using namespace std;

//Reads and computes the sum of consecutive integers 1-n
//where the sum and n are type short
short sumShort(short &n)
{
	short sum = 0;

	for (short i = 0; i <= n; i++)
	{
		sum = sum + i;
	}

	return sum;
}


//Reads and computes the sum of consecutive integers 1-n
//where the sum and n are type long
long sumLong(long &n)
{
	long sum = 0;

	for (long i = 0; i <= n; i++)
	{
		sum = sum + i;
	}

	return sum;


}

//Reads and computes the factorial of n
//where the product is type float and n is type long
float factFloat(long &n)
{
	float productFloat = 1;

	for (long i = 1; i <= n; i++)
	{
		productFloat = productFloat * i;
	}


	return productFloat;
}



//Reads and computes the factorial of n
//where the product is type double and n is type long
double factDouble(long &n)
{
	double productDouble = 1;

	for (long i = 1; i <= n; i++)
	{
		productDouble = productDouble * i;
	}


	return productDouble;
}



//Reads and computes the sum of 1/n n number of times then minuses 1 (supposed to converge to 0)
//where the sum is type float and n is type long
float sumFracFloat(long &n)
{
	float sumFloat = 0;

	for (long i = 1; i <= n; i++)
	{
		sumFloat = sumFloat + (1 / n);
	}

	return (sumFloat - 1);

}




//Reads and computes the sum of 1/n n number of times then minuses 1 (supposed to converge to 0)
//where the sum is type double and n is type long
double sumFracDouble(long &n)
{
	double sumDouble = 0;

	for (long i = 1; i <= n; i++)
	{
		sumDouble = sumDouble + (1 / n);
	}

	return (sumDouble - 1);

}



int main()
{
	//Reads and computes the sum of consecutive integers 1-n n number of times then nimuses 1 (supposed to converge to 0)
	//where the sum and n are type long
	short n, sum;
	
	cout << "Pick a number. The sum from 1 - n will be computed (where the sum is a short)." << endl;
	cin >> n;
	
	sum = sumShort(n);
	
	cout << "n: " << n << " sum: " << sum << endl;
	//You can detect an overflow in this process when the summ becomes negative. The value of n that produces this is 256.




	//Reads and computes the sum of consecutive integers 1-n
	//where the sum and n are type long
	long sumL, nL;
	sumL = 0;

	cout << "\nPick a number. The sum from 1 - n will be computed (where sum is a long)." << endl;
	cin >> nL;

	sumL = sumLong(nL);

	cout << "n: " << nL << " sum: " << sumL << endl;
	//You can detect an overflow in this process when the sum becomes negative. The value of n that produces this is 9999986.



	//Reads and computes the factorial of n
	//where the product is type float and n is type long
	float productF;
	
	cout << "\nPick a number. The factorial will be computed (where product is a float)." << endl;
	cin >> nL;

	productF = factFloat(nL);

	cout << "n: " << nL << " product: " << productF << endl;
	//You can detect an overflow in this process when the product becomes inf. The value of n that produces this is 35.





	//Reads and computes the factorial of n
	//where the product is type double and n is type long
	double productD;

	cout << "\nPick a number. The factorial will be computed (where product is a double)." << endl;
	cin >> nL;

	productD = factDouble(nL);

	cout << "n: " << nL << " product: " << productD << endl;
	//You can detect an overflow in this process when the product becomes inf. The value of n that produces this is 171.




	//Reads and computes the sum of 1/n n number of times then minuses 1 (supposed to converge to 0)
	//where the sum is type float and n is type long
	float sumF;

	cout << "\nPick a number. The sum of 1/n - 1 will be computed (where the sum is a float)." << endl;
	cin >> nL;

	sumF = sumFracFloat(nL);
	cout << "n: " << nL << " sum: " << sumF << endl;
	//The expected value of this function is 0. But it's coming out to be -1 due to the precision of a float.





	//Reads and computes the sum of 1/n n number of times then minuses 1 (supposed to converge to 0)
	//where the sum is type double and n is type long
	double sumD;

	cout << "\nPick a number. The sum of 1/n - 1 will be computed (where the sum is a double)." << endl;
	cin >> nL;

	sumD = sumFracDouble(nL);
	cout << "n: " << nL << " sum: " << sumD << endl;
	//The expected value of this function is 0. But it's coming out to -1 and I have NO IDEA WHY AAAAHHHHHHHH.






	cout << "\nPuzzle where the numbers are stored as floats." << endl;
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	//The numerical error is that 4.4 is being printed out when it shouldn't be. This is due to the precision of floats.
	




	cout << "\nPuzzle where the numbers are stored as doubles." << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	//Now the numerical error no longer occurs because doubles are more precise than floats.

	return 0;

}