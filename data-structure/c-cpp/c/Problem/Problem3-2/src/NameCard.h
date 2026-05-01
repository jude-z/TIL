#ifndef NAME_CARD_H
#define NAME_CARD_H

#define NAME_LEN 30
#define PHONE_LEN 30

typedef struct _nameCard {
    char name[NAME_LEN];
    char phone[PHONE_LEN];
} NameCard;

NameCard* makeNameCard(char* name, char* phone);
void showNameCardInfo(NameCard* name_card);
int nameCompare(NameCard* name_card, char* name);
void changePhoneNum(NameCard* name_card, char* phone);
#endif
