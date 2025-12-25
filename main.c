#include "contact.h"


int main(void)
{
    t_contact contacts[20];
    int count;
    int choice;

    count = 0;
    while (1)
    {
        printf("\n--- Contact Manager ---\n");
        printf("1. Add contact\n");
        printf("2. Show contacts\n");
        printf("3. Search contact\n");
        printf("4. Delete contact\n");
        printf("5. Exit\n");
        printf("Choose an option: ");

        scanf("%d", &choice);

        if (choice == 1)
            add_contact(contacts, &count);
        else if (choice == 2)
            show_contacts(contacts, count);
        else if (choice == 3)
            search_contact(contacts, count);
        else if (choice == 4)
            delete_contact(contacts, &count);
        else if (choice == 5)
        {
            printf("Goodbye!\n");
            break;
        }
        else
            printf("Invalid choice.\n");
    }
    return (0);
}
