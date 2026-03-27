//
// Created by admin on 2/28/26.
//

#include "EBook.h"
#include <iostream>
#include <cstring>
using namespace std;

EBook::EBook(char *title, char *isbn, int price, char *drm_key): Book(title,isbn,price) {
    this -> drm_key = new char(strlen(drm_key) + 1);
    strcpy(this -> drm_key, drm_key);
}

void EBook::ShowEBookInfo() const {
    ShowBookInfo();
    cout << "drm_key : " << drm_key << endl;
}
