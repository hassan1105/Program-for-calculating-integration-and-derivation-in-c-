
#include <iostream>
#include <stdio.h>
#include <math.h>
#include<string>
using namespace std;

int main()

{

	char x;
	int arr[1000], arrr[1000];

	int n;
	string trigono;
	int choice = 1,choice1=1;
	int power=1;
	int base = 1;
	int de;
	
	char angle = 'x';
	//for main menue
	do
	{
		cout << "\t\t\t************************************" << endl;
		cout << "\t\t\t***************welcome****************" << endl;
		cout << "\t\t\t**************************************" << endl;
		cout << "\t\t\tenter 1 for derivation" << endl;
		cout << "\t\t\tenter 2 for integration" << endl;
		cout << "\t\t\tenter 3 for trigonomatric simple derviation" << endl;
		cout << "\t\t\tenter 4 for trigonomatric simple integration" << endl;
		cout << " \t\t\tenter any key to exit" << endl;
		cout << "\t\t\tenter your choice  :" << endl;

		cin >> choice;
		//enter choice 1 for derivation 
		if (choice == 1)

		{
			do{
				cout << "\t\t\tpress 1 for singal term" << endl;
				cout << "\t\t\tpress 2 for multiple terms" << endl;
				cin >> choice1;
				//for singal term
				if (choice1 == 1)
				{
					system("cls");
					system("color 4A");
					cout << "enter the base ";
					cin >> base;
					cout << "enter the varible  ";
					cin >> x;
					if (isalpha(x))
					{
						cout << "enter the power";
						cin >> power;
						de = power - 1;
						system("cls");
						cout << base << x << "^" << power << endl;

						cout << "************************************" << endl;
						cout << "***************Derivative****************" << endl;
						cout << "**************************************" << endl;
						cout << power*base << x << "^" << de << endl;
					}
					else
					{
						cout << "variable should be character not a number" << endl;
					}
				}
				//for multiple term
				 if (choice1 == 2)
				{
					system("cls");
					system("color 4A");
					cout << "enter the varible for terms  ";
					cin >> x;
					if (isalpha(x)){
						cout << "enter the number of term  :";
	cin >> n;
	
	for (int i = 0; i < n; i++)

	{
		cout << "enter the value of base :";
		cin >> arr[i];
		cout << "enter the value of power :";
		cin >> arrr[i];

		}
	for (int i = 0; i < n; i++)
	{
		cout << "+" << arr[i] << x<<"^" << arrr[i];
	}cout << endl;
	cout << "$$$$$$$$$$$$$$::derivation is::$$$$$$$$$$$$$"<<endl;
	for (int i = 0; i < n; i++)
	{
		
		cout << "+"<<arr[i] * arrr[i] << x << "^" << arrr[i]-1 ;
	}
					}
					else
						cout << "variable must be character not number" << endl;
				}
				else
					cout << "wrong choice" << endl;
			}
			 while (choice1 != 3);
		}
		// for integration
		if (choice == 2)
		{
			system("cls");
			system("color f4");
		
			do
			{
				cout << "enter 1 for single term integration" << endl;
				cout << "enter 2   for multiple term integration" << endl;
				cin >> choice1;
				// for singal term
				if (choice1 == 1)
				{
					cout << "enter the base ";
					cin >> base;
					cout << "enter the varible  ";
					cin >> x;
					if (isalpha(x))
					{
						cout << "enter the power";
						cin >> power;
						de = power + 1;
						system("cls");
						cout << base << x << "^" << power << endl;
						cout << "************************************" << endl;
						cout << "***************Integration****************" << endl;
						cout << "**************************************" << endl;
						cout << base << x << "^" << de << "/" << de << "+" << "c" << endl;
					}
					else
					{
						cout << "variable should be character not a number" << endl;
					}
				}
				//for multiple term
				if (choice1 == 2)
				{
					system("cls");
					system("color 4A");
					cout << "enter the varible for terms  ";
					cin >> x;
					if (isalpha(x))
					{
						cout << "enter the number of term  :";
						cin >> n;

						for (int i = 0; i < n; i++)

						{
							cout << "enter the value of base :";
							cin >> arr[i];
							cout << "enter the value of power :";
							cin >> arrr[i];

						}
						for (int i = 0; i < n; i++)
						{
							cout << "+" << arr[i] << x << "^" << arrr[i];
						}cout << endl;
						cout << "$$$$$$$$$$$$$$::integration is::$$$$$$$$$$$$$" << endl;
						for (int i = 0; i < n; i++)
						{

							cout << "+" << arr[i] << x << "^" << arrr[i] + 1 << "/" << arrr[i] + 1;
						}
						cout << "+c";
						cout<<endl;
					}
					else
					{cout << "variable must be character not number" << endl;
				}
				}
			}
			while (choice1 != 3);
		} 
		//for trigonometric function
		if (choice == 3)
		{
			system("cls");
			system("color fc");
			cout << "************************************" << endl;
			cout << "***************Derivation****************" << endl;
			cout << "**************************************" << endl;
			cout << "enter the base ";
			cin >> base;
			cout << "enter the trigonometric function(i.e cos,tan,sin) :";
			cin >> trigono;

			cout << "\nenter the angle of  :";
			cin >> angle;
			//cout << "enter the power";
			//cin >> power;
			de = power + 1;
			system("cls");
			if (trigono == "cos")
			{
				cout << "the derivative of the cos is :";
				cout << "-" << base << "sin" << angle << endl;
			}
			else if (trigono == "sin")
			{
				cout << "the derivative of the sin is :";
				cout << base << "cos" << angle << endl;

				}
				else if (trigono == "tan")
				{
				cout << "the derivative of the tan is :";
				cout << base << "sec^2" << angle << endl;

				}
				else if (trigono == "sec")
				{
				cout << "the derivative of the sec is :";
				cout << base << "sec" << angle << "tan" << angle << endl;

				}
				else if (trigono == "cosec")
				{
				cout << "the derivative of the cosec is :";
				cout << base << "-cosec" << angle << "cot" << angle << endl;

				}
				else if (trigono == "ln")
				{
				cout << "1 /" << angle;
				}
				else
				cout << "invalid input" << endl;
				}
				//integration
				if (choice == 4)
				{

				system("cls");
				system("color f4");
				cout << "************************************" << endl;
				cout << "***************Integration****************" << endl;
				cout << "**************************************" << endl;
				cout << "enter the base ";
				cin >> base;
				cout << "enter the trigonometric function(i.e cos,tan,sin) :";
				cin >> trigono;
				cout << "enter the angle of  :";
				cin >> angle;
				//	cout << "enter the power";
				//cin >> power;
				//de = power + 1;
				system("cls");
				if (trigono == "cos")
				{
				cout << "the Integration of the cos is :";
				cout << base << "sin" << angle << "+c" << endl;
				}
				else if (trigono == "sin")
				{
				cout << "the Integration of the sin is :";
				cout << base << "-cos" << angle << "+c" << endl;
				}
				else if (trigono == "sec")
				{
				cout << "the Integration of the sin is :";
				cout << base << "ln|secx+tanx|"  << "+c" << endl;
				}
				else if (trigono == "cosec")
				{
				cout << "the Integration of the cosec is :";
				cout  << base << "ln|cosecx-cotx|" << "+c" << endl;
				}
				else if (trigono == "tan")
				{
					cout << "the Integration of the tan is :";
					cout  << base << "ln|secx|" << "+c" << endl;
				}
				else if (trigono == "cot")
				{
				cout << "the Integration of the cot is :";
				cout << base << "ln|sinx|" << "+c" << endl;
				}

				else
				cout << "invalid input" << endl;
				}
				} while (choice != 6);

				system("pause");
				return 0;

				}
