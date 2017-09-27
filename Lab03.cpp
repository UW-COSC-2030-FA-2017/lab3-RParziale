//Ryan Parziale
//COSC2030
//Lab3
//9-27-2017


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
float sumFracFloat(float &n)
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
double sumFracDouble(double &n)
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
	float sumF, nF;

	cout << "\nPick a number. The sum of 1/n - 1 will be computed (where the sum is a float)." << endl;
	cin >> nF;

	sumF = sumFracFloat(nF);
	cout << "n: " << nF << " sum: " << sumF << endl;
	//The expected value of this function is 0. The value comes out to 0 for small n, but, as the value of n gets larger, the output value becomes larger too, becoming a number very close to zero, but not quite zero.
	//This is due to the precision of a floating point number. Since sone fractions have infinite decimals, floats only store a certain number of significant digits.
	//This truncation causes the sum to become inccaurate as the value of n gets higher.





	//Reads and computes the sum of 1/n n number of times then minuses 1 (supposed to converge to 0)
	//where the sum is type double and n is type long
	double sumD, nD;

	cout << "\nPick a number. The sum of 1/n - 1 will be computed (where the sum is a double)." << endl;
	cin >> nD;

	sumD = sumFracDouble(nD);
	cout << "n: " << nL << " sum: " << sumD << endl;
	//The expected value of this function is 0. The value comes out to 0 for small n, but, as the value of n gets larger, the output value becomes larger too, becoming a number very close to zero, but not quite zero.
	//This is due to the precision of a double. Since sone fractions have infinite decimals, doubles only store a certain number of significant digits.
	//This truncation causes the sum to become inccaurate as the value of n gets higher. However, doubles are more precise than floats, so their output will be closer to zero with larger n.






	cout << "\nPuzzle where the numbers are stored as floats." << endl;
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	//The numerical error is that 4.4 is being printed out when it shouldn't be. This is due to the precision of floats only storing and looking at a certain number of significant digits.
	//When i stores 4.4, despite it not being less than 4.4, i is still printed out anyway. It is only after i is incrememnted again that it is no longer printed out.
	




	cout << "\nPuzzle where the numbers are stored as doubles." << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	//Now the numerical error no longer occurs because doubles are more precise than floats. So, when i stores 4.4, this time it is recognized that this value is not less than 4.4,
	//so i is not being printed out when it shouldn't be.

	


	return 0;

}