/*-------------------------------------------
// Course: COMP 150
// Last Name: Singh
// First Name: Rajveer
// Student ID: 300202522
// 
// File: productCost21_SinghRS
// Summary: Calculates total price of 3 computer products from different tech categories chosen by the user.
//			Total price includes the sum of all products, environmental fee, gst, and pst tax. 	           
//
*-------------------------------------------*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Storing prices and tax values
	double product1_price, product2_price, product3_price, 
		environmental_fee{0}, subtotal, gst_tax, pst_tax;
		
	// Storing user options 	
	int product1_option, product2_option, product3_option, 
		monitor_size, instrument_type;
	
	cout << "Welcome to RAJ electronics!\n" << endl;
	
	
	// Getting product 1 price and option  
	cout << "\nEnter the price for product 1: $";
	cin >> product1_price;
	
	cout << "\tChoose your option (1 for Monitors, 2 for Musical Instruments, 3 for Desktop Computers," 
			"\n\t4 for Laptops, 5 for Cellular Devices, and 6 for Telephones): ";
	cin >> product1_option;
	
	switch (product1_option)	// Adding environmental fee cost depending on product category
	{
		case 1:
			cout << "\n\tWhat size is your monitor? (1 for 29\" or smaller, 2 for 30\" - 45\", 3 for 46\" or larger): ";	// Determining monitor size
			cin >> monitor_size;
			
			if (monitor_size == 1)
			{
				environmental_fee += 6.00; 
			}
			else if (monitor_size == 2)
			{
				environmental_fee += 9.00;
			}
			else if (monitor_size == 3)
			{
				environmental_fee += 19.00;
			}
			else
			{
				cout << "\nERROR, program terminated. Only inputs 1, 2, and 3 allowed.";
				return 1;	
			}
			break;
			
		case 2:
			cout << "\n\tDoes your instrument have a battery or plug? (1 for battery, 2 for plug): ";	 // Determining the type of instrument
			cin >> instrument_type;
			
			if (instrument_type == 1)
			{
				environmental_fee += 0.35;
			}
			else if (instrument_type == 2)
			{
				environmental_fee += 1.10;
			}
			else
			{
				cout << "\nERROR, program terminated. Only inputs 1, 2, and 3 allowed.";
				return 1;
			}
			break;
			
		case 3:		// Desktop computers
			environmental_fee += 1.00;
			break;
			
		case 4:		// Laptops 
			environmental_fee += 0.80;
			break;
			
		case 5:		// Cellular devices
			environmental_fee += 0.07;
			break;
			
		case 6:		// Telephones
			environmental_fee += 0.45;
			break;
		
		default:	// Checking if user option is valid
			cout << "\nERROR, program terminated. Only inputs 1, 2, 3, 4, 5, and 6 allowed.";
			return 1;
	}
	
	
	// Getting Product 2 price and option
	cout << "\n\nEnter the price for product 2: $";
	cin >> product2_price;
	
	cout << "\tChoose your option (1 for Monitors, 2 for Musical Instruments, 3 for Desktop Computers," 
			"\n\t4 for Laptops, 5 for Cellular Devices, and 6 for Telephones): ";
	cin >> product2_option;
	
	switch (product2_option)	// Adding environmental fee cost depending on product category
	{
		case 1:
			cout << "\n\tWhat size is your monitor? (1 for 29\" or smaller, 2 for 30\" - 45\", 3 for 46\" or larger): ";	// Determining monitor size
			cin >> monitor_size;
			
			if (monitor_size == 1)
			{
				environmental_fee += 6.00; 
			}
			else if (monitor_size == 2)
			{
				environmental_fee += 9.00;
			}
			else if (monitor_size == 3)
			{
				environmental_fee += 19.00;
			}
			else
			{
				cout << "\nERROR, program terminated. Only inputs 1, 2, and 3 allowed.";
				return 1;	
			}
			break;
			
		case 2:
			cout << "\n\tDoes your instrument have a battery or plug? (1 for battery, 2 for plug): ";	 // Determining the type of instrument
			cin >> instrument_type;
			
			if (instrument_type == 1)
			{
				environmental_fee += 0.35;
			}
			else if (instrument_type == 2)
			{
				environmental_fee += 1.10;
			}
			else
			{
				cout << "\nERROR, program terminated. Only inputs 1, 2, and 3 allowed.";
				return 1;
			}
			break;
			
		case 3:		// Desktop computers
			environmental_fee += 1.00;
			break;
			
		case 4:		// Laptops
			environmental_fee += 0.80;
			break;
			
		case 5:		// Cellular devices
			environmental_fee += 0.07;
			break;
			
		case 6:		// Telephones
			environmental_fee += 0.45;
			break;
		
		default:	// Checking if user option is valid
			cout << "\nERROR, program terminated. Only inputs 1, 2, 3, 4, 5, and 6 allowed.";
			return 1;	
	}
	
	
	// Product 3 information
	cout << "\n\nEnter the price for product 3: $";
	cin >> product3_price;
	
	cout << "\tChoose your option (1 for Monitors, 2 for Musical Instruments, 3 for Desktop Computers," 
			"\n\t4 for Laptops, 5 for Cellular Devices, and 6 for Telephones): ";
	cin >> product3_option;
	
	switch (product3_option)	// Adding environmental fee cost depending on product category
	{
		case 1:
			cout << "\n\tWhat size is your monitor? (1 for 29\" or smaller, 2 for 30\" - 45\", 3 for 46\" or larger): ";	// Determining monitor size
			cin >> monitor_size;
			
			if (monitor_size == 1)
			{
				environmental_fee += 6.00; 
			}
			else if (monitor_size == 2)
			{
				environmental_fee += 9.00;
			}
			else if (monitor_size == 3)
			{
				environmental_fee += 19.00;
			}
			else
			{
				cout << "ERROR";	
			}
			break;
			
		case 2:
			cout << "\n\tDoes your instrument have a battery or plug? (1 for battery, 2 for plug): ";	 // Determining the type of instrument
			cin >> instrument_type;
			
			if (instrument_type == 1)
			{
				environmental_fee += 0.35;
			}
			else if (instrument_type == 2)
			{
				environmental_fee += 1.10;
			}
			else
			{
				cout << "ERROR";
			}
			break;
			
		case 3:		// Desktop computers
			environmental_fee += 1.00;
			break;
			
		case 4:		// Laptops
			environmental_fee += 0.80;
			break;
			
		case 5:		// Cellular devices
			environmental_fee += 0.07;
			break;
			
		case 6:		// Telephones
			environmental_fee += 0.45;
			break;
		
		default:	// Checking if user option is valid
			cout << "\nERROR, program terminated. Only inputs 1, 2, 3, 4, 5, and 6 allowed.";
			return 1;	
	}
	
	// Outputting total cost and tax calculation summary 
	subtotal = product1_price + product2_price + product3_price;
	gst_tax = (subtotal + environmental_fee) * 0.05;
	pst_tax = (subtotal + environmental_fee) * 0.07;
	
	cout << fixed << setprecision(2) << "\n\nItem Subtotal: $" << subtotal  << "\nEnvironmental fee is $" 
		<< environmental_fee << "\nBC GST Tax: $"  << gst_tax << "\nBC Sales Tax: $" << pst_tax 
		<< "\n----------------------------" << "\nTotal: $" << subtotal + gst_tax + pst_tax << "\n";
	
	return 0;
}
