#include <iostream>          // Include input/output stream library
#include <string>            // Include string manipulation library
#include <iomanip>           // Include input/output manipulators
#include <sstream>           // Include string stream library
#include <ctime>             // Include time handling library
#include <cstring>           // Include C-style string handling library
#include <unistd.h>          // Include sleep functionality

using namespace std;

// Constants for maximum array sizes
const int MAX_SALESPEOPLE = 10;         // Maximum number of salespeople
const int MAX_PRODUCTS = 10;            // Maximum number of products
const int MAX_SALES_SLIPS = 100;        // Maximum number of sales slips
const int MAX_DAYS = 365;               // Maximum number of days
const int MAX_MONTHS = 12;              // Maximum number of months

// 2D array to store sales data
double salesData[MAX_DAYS][MAX_SALESPEOPLE][MAX_PRODUCTS] = {0}; 

// 2D array to store total sales for each salesperson
double totalSales[MAX_DAYS][MAX_SALESPEOPLE] = {0};

// 2D array to store total products sold
double totalProducts[MAX_DAYS][MAX_PRODUCTS] = {0};

// Arrays to store details of sales slips
int salespersonNumbers[MAX_SALES_SLIPS];       // Salesperson numbers
int productNumbers[MAX_SALES_SLIPS];          // Product numbers
double salesValues[MAX_SALES_SLIPS];          // Sales values
string salesDates[MAX_SALES_SLIPS];           // Sales dates
int quantities[MAX_SALES_SLIPS];              // Quantities sold
double unitPrices[MAX_SALES_SLIPS];           // Unit prices
int salesCount = 0;                           // Count of sales slips

// Array to store unit prices for daily sales of products
double dailyUnitPrices[MAX_PRODUCTS] = {0};

// Arrays to store salesperson details
string salespersonNames[MAX_SALESPEOPLE];    // Names of salespeople
string salespersonSex[MAX_SALESPEOPLE];      // Sex (M/F) of salespeople
string salespersonAddresses[MAX_SALESPEOPLE]; // Addresses of salespeople
int numSalespeople = 4;                      // Number of salespeople
int numProducts = 5;                         // Number of products

int main(){
    // Initializing sample salesperson details
    salespersonNames[0] = "Sofi";
    salespersonNames[1] = "Soli";
    salespersonNames[2] = "Yeab";
    salespersonNames[3] = "Yasmin";
    salespersonSex[0] = "M";
    salespersonSex[1] = "F";
    salespersonSex[2] = "F";
    salespersonSex[3] = "F";
    salespersonAddresses[0] = "Address1";
    salespersonAddresses[1] = "Address2";
    salespersonAddresses[2] = "Address3";
    salespersonAddresses[3] = "Address4";
    int choice;
    cout << "************Welcome to sales tracker system****************";
    while (true) {
        cout << "\nSales Tracker System Menu:\n";
        cout << "1. Record Sales Slip\n";
        cout << "2. Generate End of Day Report\n";
	cout << "3. Search Salesperson Record\n";
        cout << "4. Search Product Record\n";    
	cout << "5. View Top and Least Selling Salesperson\n";
        cout << "6. Generate Monthly Report\n";
	cout << "7. Add Salesperson\n";
        cout << "8. Add Product\n";   
        line:
        cout << "Enter your choice: ";
        cin >> choice;
        #ifdef _WIN32
        system("CLS");  // Clear screen on Windows
        #else
        system("clear");  // Clear screen on Unix-based systems
        #endif
        if (cin.fail()) {
            cin.clear();  // Clear input error state
            cin.ignore(); // Ignore erroneous input
            cout << "Please enter the correct number\n";
            goto line;  // Go back to input
        }
        if (choice == 1) {
            if (salesCount < MAX_SALES_SLIPS) {
                string date;
                cout << "Enter date (YYYY-MM-DD): ";
                cin >> date;
                int year, month, day;
                sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
                int dayIndex = (month - 1) * 30 + (day - 1); 
                // Ask for the unit prices for each product
                for (int product = 0; product < numProducts; product++) {
                    cout << "Enter unit price for product " << product + 1 << ": ";
                    cin >> dailyUnitPrices[product];
                }
                for (int salesperson = 0; salesperson < numSalespeople; salesperson++) {
                    cout << "Recording for Salesperson " << salespersonNames[salesperson] << ":\n";
                    for (int product = 0; product < numProducts; product++) {
                        int quantity;
                        double value;
                        cout << "Product " << product + 1 << ":\n";
                        cout << "Enter quantity: ";
                        cin >> quantity;
                        double unitPrice = dailyUnitPrices[product];
                        value = quantity * unitPrice;
                        cout << "The sales value is: " << value << "\n";

                        salespersonNumbers[salesCount] = salesperson + 1;
                        productNumbers[salesCount] = product + 1;
                        salesValues[salesCount] = value;
                        quantities[salesCount] = quantity;
                        unitPrices[salesCount] = unitPrice;
                        salesDates[salesCount] = date;
                        salesData[dayIndex][salesperson][product] += value;
                        totalSales[dayIndex][salesperson] += value;
                        totalProducts[dayIndex][product] += value;
                        salesCount++;
                    }
                }
            } else {
                cout << "Sales slip limit reached.\n";
            }
        } else if (choice == 2) {
        	float total=0;
            string date;
             cout << "Enter date (YYYY-MM-DD) for the end of day report: ";
             cin >> date;
             int year, month, day;
             sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
             int dayIndex = (month - 1) * 30 + (day - 1);  
             cout << "\nEnd of Day Report for " << date << ":\n";
             cout << setw(10) << "Product \\ Salesperson |";
             for (int i = 0; i < numSalespeople; i++) {
                 cout << setw(10) << salespersonNames[i]<<" |";
             }
                cout << setw(10) << "Total" << "\n";
             for (int i = 0; i < numProducts; i++) {
                 cout<<setw(12)<<"";
                cout << setw(10) << "Product " + to_string(i + 1) + " |";
                   for (int j = 0; j < numSalespeople; j++) {
                    cout << setw(10) << fixed << setprecision(2) << salesData[dayIndex][j][i]<<" |";
                   }
                   cout << setw(10) << fixed << setprecision(2) << totalProducts[dayIndex][i] << "\n";
            }
            cout<<setw(13)<<"";
            cout << setw(10) << "Total |";
            for (int i = 0; i < numSalespeople; i++) {
            	cout << setw(10) << fixed << setprecision(2) << totalSales[dayIndex][i]<<" |";
                total+= totalProducts[dayIndex][i];
            }
            cout << setw(10) << fixed << setprecision(2) << total;
            cout << "  \n";
            } else if (choice == 3) {
            int salesperson;
            cout << "Enter salesperson number (1-" << numSalespeople << ") to search: ";
            cin >> salesperson;
            if (salesperson >= 1 && salesperson <= numSalespeople) {
                cout << "Salesperson " << salespersonNames[salesperson - 1] << " Record:\n";
                cout << "Sex: " << salespersonSex[salesperson - 1] << "\n";
                cout << "Address: " << salespersonAddresses[salesperson - 1] << "\n";
                cout << "\nSales for the Previous Month:\n";
                for (int i = 0; i < numProducts; i++) {
                    double total = 0;
                    for (int day = 0; day < MAX_DAYS; day++) {
                        total += salesData[day][salesperson - 1][i];
                    }
                    cout << "Product " << i + 1 << ": " << total << "\n";
                }
                double totalSalesPerson = 0;
                for (int day = 0; day < MAX_DAYS; day++) {
                    totalSalesPerson += totalSales[day][salesperson - 1];
                }
                cout << "Total Sales: " << totalSalesPerson << "\n";
                cout << "Bonus: " << totalSalesPerson * 0.05 << "\n";
            } else {
                cout << "Invalid salesperson number.\n";
            }
        } else if (choice == 4) {
            int product;
            cout << "Enter product number (1-" << numProducts << ") to search: ";
            cin >> product;
            if (product >= 1 && product <= numProducts) {
                cout << "Product " << product << " Record:\n";
                for (int i = 0; i < numSalespeople; i++) {
                    double total = 0;
                    for (int day = 0; day < MAX_DAYS; day++) {
                        total += salesData[day][i][product - 1];
                    }
                    cout << "Salesperson " << salespersonNames[i] << ": " << total << "\n";
                }
                double totalProduct = 0;
                for (int day = 0; day < MAX_DAYS; day++) {
                    totalProduct += totalProducts[day][product - 1];
                }
                cout << "Total Sales: " << totalProduct << "\n";
            } else {
                cout << "Invalid product number.\n";
            }
	    }else if (choice == 5) {
            int topSalesperson = 0, leastSalesperson = 0;
            double maxSales = 0, minSales = 1e9;

            for (int i = 0; i < numSalespeople; i++) {
                double total = 0;
                for (int day = 0; day < MAX_DAYS; day++) {
                    total += totalSales[day][i];
                }
                if (total > maxSales) {
                    maxSales = total;
                    topSalesperson = i;
                }
                if (total < minSales) {
                    minSales = total;
                    leastSalesperson = i;
                }
            }
            cout << "Top Selling Salesperson: " << salespersonNames[topSalesperson] << " with sales " << maxSales << "\n";
            cout << "Least Selling Salesperson: " << salespersonNames[leastSalesperson] << " with sales " << minSales << "\n";
      } else if (choice == 6) {
    string month;
    cout << "Enter month (MM): ";
    cin >> month;
    int monthIndex = stoi(month) - 1;  // Convert MM to month index (0-11)
    cout << "\nMonthly Report for " << month << ":\n";
    // Display table header
    cout << setw(10) << "Salesperson |";
    for (int i = 0; i < numSalespeople; i++) {
        cout << setw(10) << salespersonNames[i]<<" |";
    }
    cout << setw(10) << "Total" << "\n";
    // Display sales data
    for (int i = 0; i < numProducts; i++) {
        cout<<setw(2)<<"";
        cout << setw(10) << "Product " + to_string(i + 1) + " |";
        double productTotal = 0;
        for (int j = 0; j < numSalespeople; j++) {
            double monthlyTotal = 0;
            for (int day = 0; day < 30; day++) {
                monthlyTotal += salesData[monthIndex * 30 + day][j][i];
            }
            cout << setw(10) << fixed << setprecision(2) << monthlyTotal<<" |";
            productTotal += monthlyTotal;
        }
        cout << setw(10) << fixed << setprecision(2) << productTotal<<endl;
         }
        cout << "\n";
        }
else if (choice == 7) {
            // Add new salesperson
            if (numSalespeople < MAX_SALESPEOPLE) {
                cout << "Enter new salesperson details:\n";
                cout << "Name: ";
                cin >> salespersonNames[numSalespeople];
                cout << "Sex (M/F): ";
                cin >> salespersonSex[numSalespeople];
                cout << "Address: ";
                cin >> salespersonAddresses[numSalespeople];
                sleep(1);
                cout<<"Salesperosn added sucessfuly.\n";
                cout<<"Salesperson number is: "<<numSalespeople+1;
                numSalespeople++;
            } else {
                cout << "Salesperson limit reached.\n";
            }
        } else if (choice == 8) {
            // Add new product
            if (numProducts < MAX_PRODUCTS) {
                cout << "Enter new product number: ";
                cin >> productNumbers[numProducts];
				sleep(1);
                cout<<"Product added sucessfuly.";
                numProducts++;
            }else{
            	cout<<"Product limit reached.\n";
			}
	        } else if (choice == 9) {
            // Modify salesperson details
            int salesperson;
            cout << "Enter salesperson number to modify: ";
            cin >> salesperson;

            if (salesperson >= 1 && salesperson <= numSalespeople) {
                cout << "Modifying Salesperson " << salespersonNames[salesperson - 1] << " details:\n";
                cout << "Name: ";
                cin >> salespersonNames[salesperson - 1];
                cout << "Sex (M/F): ";
                cin >> salespersonSex[salesperson - 1];
                cout << "Address: ";
                cin >> salespersonAddresses[salesperson - 1];
                sleep(1);
                cout<<"Salesperson modified sucsessfuly.";
            } else {
                cout << "Invalid salesperson number.\n";
            }
        } else if (choice == 10) {
            // Exit the system
            cout << "Exiting the system. Goodbye!!!\n";
            sleep(2);
            break;
        } else {
            // Invalid choice
            cout << "Invalid choice. Please try again.\n";
        }
         cout<<endl;
        sleep(2);
    }
	return 0;
}
