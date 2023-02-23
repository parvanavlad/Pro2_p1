/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: Voineag Diana-Ioana LOGIN 1: diana-ioana.voineag
 * AUTHOR 2: Parvana Vlad-Stefan LOGIN 2: parvana.vlad-stefan
 * GROUP: 6.1
 * DATE: 16/ 02 / 2023
 */

#ifndef STATIC_LIST_H
#define STATIC_LIST_H

#include "types.h"

#define LNULL -1
#define MAX_LENGTH 25

typedef int tPosL;
typedef struct tListL
{
   tItemL item[MAX_LENGTH];
   tPosL nrItems;

} tListL;

tListL createEmptyList(tListL);
bool isEmptyList(tListL);
tPosL last (tListL);
tPosL first(tListL);
tPosL next (tPosL, tListL);
tPosL previous(tPosL,tListL);
bool insertItem (tItemL, tPosL, tListL);
tListL deleteAtPosition(tPosL,tListL);
tItemL getItem(tPosL,tListL);
tListL updateItem(tItemL,tPosL,tListL);
tPosL findItem(tParticipantName,tListL);

#endif
