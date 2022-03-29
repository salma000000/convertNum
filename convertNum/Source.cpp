#include <iostream>
using namespace std;

//Deciml To
int DeToBin(int nDec)

{
	int solution = 0;
	int x = 1;
	while (nDec != 0) {
		int rem;
		rem = nDec % 2;

		solution += rem * x;

		nDec /= 2;
		x *= 10;
	}
	return solution;
}


int DetOct(int nDec) {
	int solution = 0;
	int x = 1;
	while (nDec != 0) {
		int rem;
		rem = nDec % 8;

		solution += rem * x;

		nDec /= 8;
		x *= 10;
	}
	return solution;
}
int DetoHex(int nDec) {
	int solution = 0;
	int x = 1;
	while (nDec != 0) {
		int rem;
		rem = nDec % 16;

		solution += rem * x;

		nDec /= 16;
		x *= 10;
	}
	return solution;
}


// Binary To
int BinToDe(int nBin)
{
	int solu = 0;
	int x = 1;

	while (nBin != 0)
	{
		int rem = nBin % 2;
		solu += rem * x;
		nBin /= 10;
		x *= 2;
	}
	return solu;
}
int BinTOct(int nBin) {

	int dec = BinToDe(nBin);
	int oct = DetOct(dec);
	return oct;

}
int BinToHex(int nBin) {
	int dec = BinToDe(nBin);
	int hex = DetoHex(dec);
	return hex;

}



// Oct to
int OcToDec(int nOct)
{
	int solution = 0;
	int x = 1;
	while (nOct) {
		int rem = nOct % 10;
		solution += rem * x;
		nOct /= 10;
		x *= 8;

	}
	return solution;
}

int OcToBin(int nOct)
{
	int dec = OcToDec(nOct);
	int Bin = DeToBin(dec);
	return Bin;
}


int OcToHex(int nOct)
{
	int dec = OcToDec(nOct);
	int Hex = DetoHex(dec);
	return 0;
}

// HexTo 
int  HexToDec(int nHex) {
	int solution = 0;
	int x = 1;
	while (nHex) {
		int rem = nHex % 10;
		solution += rem * x;
		nHex /= 10;
		x *= 16;

	}
	return solution;
}

int  HexToBin(int nHex) {
	int dec = HexToDec(nHex);
	int Bin = DeToBin(dec);
	return Bin;
}

int  HexToOct(int nHex) {
	int dec = HexToDec(nHex);
	int Oct = DetOct(dec);
	return Oct;
}


int main()
{
#include <iostream>
	using namespace std;

	//Deciml To
	int DeToBin(int nDec)

	{
		int solution = 0;
		int x = 1;
		while (nDec != 0) {
			int rem;
			rem = nDec % 2;

			solution += rem * x;

			nDec /= 2;
			x *= 10;
		}
		return solution;
	}


	int DetOct(int nDec) {
		int solution = 0;
		int x = 1;
		while (nDec != 0) {
			int rem;
			rem = nDec % 8;

			solution += rem * x;

			nDec /= 8;
			x *= 10;
		}
		return solution;
	}
	int DetoHex(int nDec) {
		int solution = 0;
		int x = 1;
		while (nDec != 0) {
			int rem;
			rem = nDec % 16;

			solution += rem * x;

			nDec /= 16;
			x *= 10;
		}
		return solution;
	}


	// Binary To
	int BinToDe(int nBin)
	{
		int solu = 0;
		int x = 1;

		while (nBin != 0)
		{
			int rem = nBin % 2;
			solu += rem * x;
			nBin /= 10;
			x *= 2;
		}
		return solu;
	}
	int BinTOct(int nBin) {

		int dec = BinToDe(nBin);
		int oct = DetOct(dec);
		return oct;

	}
	int BinToHex(int nBin) {
		int dec = BinToDe(nBin);
		int hex = DetoHex(dec);
		return hex;

	}



	// Oct to
	int OcToDec(int nOct)
	{
		int solution = 0;
		int x = 1;
		while (nOct) {
			int rem = nOct % 10;
			solution += rem * x;
			nOct /= 10;
			x *= 8;

		}
		return solution;
	}

	int OcToBin(int nOct)
	{
		int dec = OcToDec(nOct);
		int Bin = DeToBin(dec);
		return Bin;
	}


	int OcToHex(int nOct)
	{
		int dec = OcToDec(nOct);
		int Hex = DetoHex(dec);
		return 0;
	}

	// HexTo 
	int  HexToDec(int nHex) {
		int solution = 0;
		int x = 1;
		while (nHex) {
			int rem = nHex % 10;
			solution += rem * x;
			nHex /= 10;
			x *= 16;

		}
		return solution;
	}

	int  HexToBin(int nHex) {
		int dec = HexToDec(nHex);
		int Bin = DeToBin(dec);
		return Bin;
	}

	int  HexToOct(int nHex) {
		int dec = HexToDec(nHex);
		int Oct = DetOct(dec);
		return Oct;
	}


	int main()
	{

		return 0;


	}

}