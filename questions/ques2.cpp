#include<bits/stdc++.h>
using namespace std;
class Product{
    private:
        int productId;
        string productName;
        double price;
    public:
        Product(int productId, string productName, double price) {
            this->productId = productId;
            this->productName = productName;
            this->price = price;
        }
        Product(int )
        void display() {
            cout << "Product ID: " << productId << endl;
            cout << "Product Name: " << productName << endl;
            cout << "Price: $" << price << endl;
        }
};