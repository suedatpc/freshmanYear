#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_SALESPERSON = 4;
const int NUM_PRODUCTS = 5;

int main() {
    int sales[NUM_PRODUCTS][NUM_SALESPERSON] = {0};

    for (int salesperson = 1; salesperson <= NUM_SALESPERSON; ++salesperson) {
        cout << "Enter sales data for salesperson " << salesperson << ":\n";
        for (int product = 1; product <= NUM_PRODUCTS; ++product) {
            cout << "Enter sales for product " << product << " (-1 to skip): ";
            int salesAmount;
            cin >> salesAmount;

            if (salesAmount == -1) { //-1 girilirse break yap çık 
                for (int p = product; p <= NUM_PRODUCTS; ++p) {
                    sales[p - 1][salesperson - 1] = 0;
                }
                break; 
            }

            sales[product - 1][salesperson - 1] = salesAmount;
        }
        cout << endl;
    }


    cout << setw(15) << "Product";
    for (int i = 1; i <= NUM_SALESPERSON; ++i) {
        cout << setw(15) << "Salesperson " << i;
    }
    cout << setw(15) << "Total" << endl;


    int grandTotal = 0;
    for (int i = 0; i < NUM_PRODUCTS; ++i) {
        int rowTotal = 0;
        cout << setw(15) << "Product " << i + 1;
        for (int j = 0; j < NUM_SALESPERSON; ++j) {
            cout << setw(15) << sales[i][j];
            rowTotal += sales[i][j];
        }
        cout << setw(15) << rowTotal << endl;
        grandTotal += rowTotal;
    }

    cout << setw(15) << "Total";
    for (int j = 0; j < NUM_SALESPERSON; ++j) {
        int columnTotal = 0;
        for (int i = 0; i < NUM_PRODUCTS; ++i) {
            columnTotal += sales[i][j];
        }
        cout << setw(15) << columnTotal;
    }
    cout << setw(15) << grandTotal << endl;

    return 0;
}
