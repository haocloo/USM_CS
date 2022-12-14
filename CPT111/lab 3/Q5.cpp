// 5. Last month Joe purchased some stock in Acme Software, Inc. Here are the details of the purchase:
//     The number of shares that Joe purchased was 1,000.
//     When Joe purchased the stock, he paid $45.50 per share.
//     Joe paid his stockbroker a commission that amounted to 2% of the amount he paid for the stock.

// Two weeks later Joe sold the stock. Here are the details of the sale:
//     The number of shares that Joe sold was 1,000.
//     He sold the stock for $56.90 per share.
//     He paid his stockbroker another commission that amounted to 2% of the amount he received for the stock.

// Write a program that displays the following information:
//     The amount of money Joe paid for the stock.
//     The amount of commission Joe paid his broker when he bought the stock.
//     The amount that Joe sold the stock for.
//     The amount of commission Joe paid his broker when he sold the stock.
//     Display the amount of profit that Joe made after selling his stock and paying the
//     two commissions to his broker. (If the amount of profit that your program displays is
//     a negative number, then Joe lost money on the transaction.)

#include <iostream>
using namespace std;

int main(){
    cout << "The amount of money Joe paid for the stock : " << 1000*45.5 << endl;
    cout << "The amount of money Joe paid for his broker : " << 1000*45.5*0.02 << endl;
    cout << "The amount that Joe sold the stock for : " << 1000*56.9 << endl;
    cout << "The amount of commission Joe paid his broker when he sold the stock : " << 1000*56.9*0.02 << endl;
    cout << "Profit that Joe made after selling his stock and paying the 2 commissions to his broker : " << (1000*56.9*0.98 - 1000*45.5*1.02);
}
