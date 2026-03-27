//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_EBOOK_H
#define CPP_STUDY_EBOOK_H
#include "Book.h"

class EBook: public Book{
private:
    char* drm_key;
public:
    EBook(char* title, char* isbn, int price, char* drm_key);
    void ShowEBookInfo() const;
};


#endif //CPP_STUDY_EBOOK_H