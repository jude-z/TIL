//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_BOOK_H
#define CPP_STUDY_BOOK_H


class Book {
private:
    char* title;
    char* isbn;
    int price;
public:
    Book(char* title, char* isbn, int price);
    void ShowBookInfo() const;
};


#endif //CPP_STUDY_BOOK_H