#include <iostream>
#include "Header.h"
using namespace std;


int main() 
{
	cout << "tool made by Tsvetan ;) \n";
	cout << "ver: 0.0.1 \n";
	int choice;

	do {
		cout << endl
			<< "1)perimetyr \n"
			<< "2) lice \n"
			<< "3)Lice na prawilna piramida \n"
			<< "4)sin teorema \n"
			<< "5)formol lice 2 \n";
			cin >> choice;
			switch (choice)
			{
			case 1:
			{

				cout << "a= ";
				cin >> a;
				cout << "b= ";
				cin >> b;
				cout << "c= ";
				cin >> c;
				int area = (a + b + c) / 2;
				cout << "p= ";
				cout << area << endl;
			}
			break;

			case 2:
			{
				cout << "a=";
				cin >> a;
				cout << "h=";
				cin >> h;
				int area1 = (a * h) / 2;
				cout << "S=";
				cout << area1 << endl;
			}
			break;

			case 3:
			{
				cout << "k=";
				cin >> k;
				cout << "P=";
				cin >> p;
				int area2 = (p * k) / 2;
				cout << "S=";
				cout << area2 << endl;
			}
			break;
			case 4:
			{
				cout << "a=";
				cin >> a;
				cout << "alpha=";
				cin >> alpha;
				int area3 = a / sin(alpha);
				cout << "2R=";
				cout << area3 << endl;
			
			}
			break;
			case 5:
			{
				cout << "p=";
				cin >> p;
				cout << "a=";
				cin >> a;
				cout << "b=";
				cin >> b;
				cout << "c=";
				cin >> c;
				int area4 = sqrt(p*(p - a)*(p - b)*(p - c));
				cout << "S=";
				cout << area4 << endl;
			}
			break;
			}
		
		} while (choice != 5);
		return 0;
	}
		
	
