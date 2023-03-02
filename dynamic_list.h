/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: Voineag Diana-Ioana LOGIN 1: diana-ioana.voineag
 * AUTHOR 2: Parvana Vlad-Stefan LOGIN 2: parvana.vlad-stefan
 * GROUP: 6.1
 * DATE: 16/ 02 / 2023
 */
#ifndef DYNAMIC_LIST_H
#define DYNAMIC_LIST_H

#include "types.h"
#include <stdlib.h>

#define MAX_LENGTH 25
#define LNULL 0

typedef int tPosL;
typedef struct tList
{
    tItemL item;
    struct tList* next;
}* tListL;
/* Write your code here... */
tListL createEmptyList(tListL);
bool isEmptyList(tListL);
tPosL last (tListL);
tPosL first(tListL);
tPosL next (tPosL, tListL);
tPosL previous(tPosL,tListL);
bool insertItem (tItemL, tPosL, tListL*);
tListL deleteAtPosition(tPosL,tListL);
tItemL getItem(tPosL,tListL);
tListL updateItem(tItemL,tPosL,tListL);
tPosL findItem(tParticipantName,tListL);
#endif
