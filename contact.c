#include "contact.h"

void add_contact(t_contact contacts[], int *count)
{
    int i;
    char name[50];

    if (*count >= 20)
    {
        printf(RED"Contact list is full!\n"RESET);
        return;
    }

    printf("Enter your name: ");
    scanf("%49s", name);

    i = 0;
    while (i < *count)
    {
        if (strcmp(contacts[i].name, name) == 0)
        {
            printf(RED"Contact already exists!\n"RESET);
            return;
        }
        i++;
    }

    strcpy(contacts[*count].name, name);

    printf("Enter your phone number: ");
    scanf("%19s", contacts[*count].phone);

    (*count)++;
    printf(GREEN "Contact added successfully!\n" RESET);
}


void show_contacts(t_contact contacts[], int count)
{
    if (count == 0)
    {
        printf(RED"No contacts found.\n"RESET);
        return;
    }
    int i = 0;
    while(i < count)
    {
        printf("contact number [%d] %s || %s\n",i, contacts[i].name,contacts[i].phone);
        i++;
    }
}

void search_contact(t_contact contacts[], int count)
{
    char name[50];
    int i = 0;

    if (count == 0)
    {
         printf(RED"no contact in this faile: "RESET);
         return ;
    }
    printf("entre your contact do you need find it: ");
    scanf("%49s",name);
    
    while (i < count)
    {
        if(strcmp(name , contacts[i].name) == 0)
        {
            printf(GREEN "Contact found!\n" RESET);
            printf("Name : %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            return;
        }
        i++;
    }
    printf(RED"Contact not found."RESET);
}

void delete_contact(t_contact contacts[], int *count)
{
    char name[50];
    int i;

    if (*count == 0)
    {
        printf(RED"No contacts found."RESET);
        return;
    }
    printf("entre your contact do you need delete it: ");
    scanf("%49s",name);

    while(i < (*count))
    {
        if (strcmp(name , contacts[i].name )== 0)
        {
            int j = i;
            while (j < *count - 1 )
            {
                contacts[j] = contacts[j + 1];
                j++;
            }
            (*count)--;
            printf(GREEN "Contact deleted successfully.\n" RESET);
        return;
        }
        i++;
    }
    printf(RED"Contact not found.\n"RESET);
}