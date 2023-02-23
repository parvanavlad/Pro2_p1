/*
 * TITLE: PROGRAMMING II LABS
 * SUBTITLE: Practical 1
 * AUTHOR 1: Voineag Diana-Ioana LOGIN 1: diana-ioana.voineag
 * AUTHOR 2: Parvana Vlad-Stefan LOGIN 2: parvana.vlad-stefan
 * GROUP: 6.1
 * DATE: 16/ 02 / 2023
 */
#include <stdio.h>
#include "dynamic_list.h"
#include <string.h>

tListL createEmptyList(tListL root)
{
    root=NULL;
    return root;
}
bool isEmptyList(tListL root)
{
    return root==NULL;
}
tPosL last (tListL root){
    int i=0;
    tListL p=root;
    while(p)
    {
        i++;
        p=p->next;
    }
    return i;
}
tPosL first(tListL root)
{
    return root==NULL;
}

tPosL next (tPosL pos , tListL root)
{
    int i=1;
    tListL p=root;
    while(i<pos) {
        i++;
        p = p->next;
    }
    if(p)
        return i+1;
    else
        return LNULL;
}

tPosL previous(tPosL pos,tListL root)
{
    if(pos==1)
        return LNULL;
    else
        return pos-1;
}

bool insertItem (tItemL insIt, tPosL pos, tListL root)
{
    bool status=false;
    tListL iter=root;
    tListL p=NULL;
    p=malloc(sizeof(tListL));
    if(p==NULL)
    {
        fprintf(stderr,"Alocation error");
        exit(EXIT_FAILURE);
    }
    p->item=insIt;
    if(pos==LNULL)
    {
        if(iter) {
            while (iter->next)
                iter = iter->next;
        }
        iter->next=p;
        p->next=NULL;
        status=true;
    }
    else
    {
        int i=1;
        while(i<pos) {
            i++;
            iter=iter->next;
        }
        p->next=iter->next->next;
        iter->next=p;
        status=true;
    }
    return status;
}

tListL deleteAtPosition(tPosL pos ,tListL root)
{
    tListL p=root;

    int i=1;
    if(pos==1)
    {
        root=root->next;
        return root;
    }


    i++;
    while(i<pos)
    {
        p=p->next;
        i++;
    }
    tListL r=p->next;
    p->next=r->next;
    free(r);
    return root;

}

tItemL getItem(tPosL pos ,tListL root)
{
    tListL p=root;
    int i=1;
    while(i<pos)
    {
        i++;
        p=p->next;
    }
    return p->item;

}
tListL updateItem(tItemL insIt,tPosL pos ,tListL root)
{
    tListL p=root;
    int i=1;
    while(i<pos)
    {
        i++;
        p=p->next;
    }
    p->item=insIt;
    return root;

}
tPosL findItem(tParticipantName name,tListL root)
{
    tListL p=root;
    int i=1;
    while(p)
    {
        if(strcmp(name,p->item.participantName)==0){
            return i;
        }
        p=p->next;
    }
    if(p==NULL)
        return LNULL;
}
/* Write your code here... */