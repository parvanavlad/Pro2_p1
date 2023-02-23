/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: Voineag Diana-Ioana LOGIN 1: diana-ioana.voineag
 * AUTHOR 2: Parvana Vlad-Stefan LOGIN 2: parvana.vlad-stefan
 * GROUP: 6.1
 * DATE: 16/ 02 / 2023
 */
#include "static_list.h"
#include "string.h"

/* Write your code here... */
tListL createEmptyList(tListL l)
{
   l.nrItems=0;
   l.item[l.nrItems].EUParticipant='\0';
   l.item[l.nrItems].numVotes=0;
   //l.item[l.nrItems].participantName=null;
   return l;
}
bool isEmptyList(tListL l)
{
    if(l.nrItems == 0)
        return 1;
}
tPosL last (tListL l)
{
    if(!isEmptyList(l))
        return l.nrItems;
}
tPosL first(tListL l)
{
    if(!isEmptyList(l))
        return 0;
}
tPosL next (tPosL pos, tListL l)
{
   if(pos++<MAX_LENGTH && pos>=0)
      return pos;
   return LNULL;
}
tPosL previous(tPosL pos,tListL l)
{
    if(pos-->=0||pos<MAX_LENGTH)
        return pos;
    return LNULL;
}
bool insertItem (tItemL item, tPosL pos, tListL l)
{
    if(pos<MAX_LENGTH && pos>=0)
    {
        l.nrItems++;
        for(int i=pos;i<=l.nrItems;i++)
            l.item[i]=l.item[i-1];
        l.item[pos-1]=item;
            return true;
    }
    if(pos == LNULL)
    {
        l.item[l.nrItems++]=item;
        if(!isEmptyList(l))
            return true;
    }
    return false;


}
tListL deleteAtPosition(tPosL pos,tListL l)
{
    if(pos>=0&&pos<MAX_LENGTH)
        for(int i = pos-1;i < l.nrItems; i++)
            l.item[i]=l.item[i+1];
    l.nrItems--;
    return l;
}
tItemL getItem(tPosL pos,tListL l)
{
    if(pos>=0&&pos<MAX_LENGTH)
        return l.item[pos];
}
tListL updateItem(tItemL item ,tPosL pos,tListL l)
{
    if(pos>=0&&pos<MAX_LENGTH)
        l.item[pos]=item;
    return l;
}
tPosL findItem(tParticipantName name,tListL l)
{
   for(int i=0;i<last(l);i++)
       if(*strstr(l.item[i].participantName,name)==name)
           return i;
   return LNULL;

}
