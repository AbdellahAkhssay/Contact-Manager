#ifndef CONTACT_H
#define CONTACT_H
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct s_contact
{
    char name[50];
    char phone[20];
} t_contact;


void add_contact(t_contact contacts[], int *count);
void show_contacts(t_contact contacts[], int count);
void search_contact(t_contact contacts[], int count);
void delete_contact(t_contact contacts[], int *count);


#endif