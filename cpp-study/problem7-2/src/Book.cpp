//
// Created by admin on 2/28/26.
//

#include "Book.h"
#include <iostream>
#include <cstring>
using namespace std;

Book::Book(char *title, char *isbn, int price): price(price) {
    this -> title = new char(strlen(title) + 1);
    this -> isbn = new char(strlen(isbn)  + 1);
    strcpy(this -> title, title);
    strcpy(this -> isbn, isbn);
}

void Book::ShowBookInfo() const {
    cout << "title : " << this -> title << endl;
    cout << "isbn : " << this -> isbn << endl;
    cout << "price : " << price << endl;
}
