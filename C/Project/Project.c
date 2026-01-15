#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Book
{
    int id;
    char name[50];
    char author[50];
    float price;
    float rating;
} Book;

void addBook(Book *, int);
void displayAllBooks(Book *, int);
void searchBook(Book *, int);
int searchById(int, int, Book *);
int searchByName(char *, int, Book *);
int searchByAuthor(char *, int, Book *);
void updateBook(Book *, int);
void sortByPrice(Book *, int);
void sortByRating(Book *, int);
void topThree(Book *, int);
void display(Book *, int);
int deleteBook(Book *, int *);

void main()
{
    printf("\t--- WELCOME TO BOOK MANAGEMENT SYSTEM ---");

    int size, choice;
    printf("\nHow many books you want to store ? ");
    scanf("%d", &size);

    Book *bookArr = (Book *)malloc(sizeof(Book) * size);

    do
    {
        printf("\n\n1.Add Book");
        printf("\n2.Search Book");
        printf("\n3.Update Book");
        printf("\n4.Display All Books");
        printf("\n5.Sort by Price");
        printf("\n6.Sort by Rating");
        printf("\n7.Top 3 by Rating");
        printf("\n8.Delete Book");

        printf("\n10.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook(bookArr, size);
            break;
        case 2:
            searchBook(bookArr, size);
            break;
        case 3:
            updateBook(bookArr, size);
            break;
        case 4:
            displayAllBooks(bookArr, size);
            break;
        case 5:
            sortByPrice(bookArr, size);
            break;
        case 6:
            sortByRating(bookArr, size);
            break;
        case 7:
            topThree(bookArr, size);
            break;
        case 8:
            deleteBook(bookArr, &size);
            break;

        case 10:
            printf("\nBye Bye !!!");
            break;
        default:
            printf("\n--- INVALID CHOICE ---");
        }
    } while (choice != 10);
}

void addBook(Book *ptr, int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\n--- Book %d Info ---", i + 1);
        printf("\nEnter ID : ");
        scanf("%d", &ptr[i].id);

        printf("Enter Name : ");
        scanf(" %[^\n]", ptr[i].name);

        printf("Enter Author : ");
        scanf(" %[^\n]", ptr[i].author);

        printf("Enter Price : ");
        scanf("%f", &ptr[i].price);

        printf("Enter Rating : ");
        scanf("%f", &ptr[i].rating);
    }
}

void displayAllBooks(Book *ptr, int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        display(ptr, i);
    }
}

void searchBook(Book *ptr, int s)
{
    int ch, tId;
    char temp[50];

    do
    {
        printf("\n--- Search Menu ---");
        printf("\n1.Search by ID");
        printf("\n2.Search by Name");
        printf("\n3.Search by Author");
        printf("\n4.Back");
        printf("\nEnter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            scanf("%d", &tId);
            searchById(tId, s, ptr);
            break;

        case 2:
            scanf(" %[^\n]", temp);
            searchByName(temp, s, ptr);
            break;

        case 3:
            scanf(" %[^\n]", temp);
            searchByAuthor(temp, s, ptr);
            break;
        }
    } while (ch != 4);
}

int searchById(int tId, int s, Book *ptr)
{
    int i;
    for (i = 0; i < s; i++)
    {
        if (ptr[i].id == tId)
        {
            display(ptr, i);
            return i;
        }
    }
    printf("\nBook Not Found");
    return -1;
}

int searchByName(char *name, int s, Book *ptr)
{
    int i;
    for (i = 0; i < s; i++)
    {
        if (strcasecmp(ptr[i].name, name) == 0)
        {
            display(ptr, i);
            return i;
        }
    }
    printf("\nBook Not Found");
    return -1;
}

int searchByAuthor(char *author, int s, Book *ptr)
{
    int i;
    for (i = 0; i < s; i++)
    {
        if (strcasecmp(ptr[i].author, author) == 0)
        {
            display(ptr, i);
            return i;
        }
    }
    printf("\nBook Not Found");
    return -1;
}

void updateBook(Book *ptr, int s)
{
    int id, ch;
    printf("Enter Book ID : ");
    scanf("%d", &id);

    int index = searchById(id, s, ptr);

    if (index != -1)
    {
        do
        {
            printf("\n1.Update Price");
            printf("\n2.Update Rating");
            printf("\n3.Back");
            scanf("%d", &ch);

            if (ch == 1)
                scanf("%f", &ptr[index].price);
            else if (ch == 2)
                scanf("%f", &ptr[index].rating);

        } while (ch != 3);
    }
}

void sortByPrice(Book *ptr, int s)
{
    Book temp;
    int i, j;
    for (i = 0; i < s - 1; i++)
        for (j = i + 1; j < s; j++)
            if (ptr[i].price > ptr[j].price)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
}

void sortByRating(Book *ptr, int s)
{
    Book temp;
    int i, j;
    for (i = 0; i < s - 1; i++)
        for (j = i + 1; j < s; j++)
            if (ptr[i].rating < ptr[j].rating)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
}

void topThree(Book *ptr, int s)
{
    sortByRating(ptr, s);
    int i;
    for (i = 0; i < 3 && i < s; i++)
        display(ptr, i);
}

int deleteBook(Book *ptr, int *s)
{
    int id, index, i;
    printf("Enter Book ID to delete : ");
    scanf("%d", &id);

    index = searchById(id, *s, ptr);

    if (index != -1)
    {
        for (i = index; i < (*s) - 1; i++)
        {
            ptr[i] = ptr[i + 1];
        }
        (*s)--;
        printf("\nBook Deleted Successfully");
        return 1;
    }
    else
    {
        printf("\nBook Not Found");
        return 0;
    }
}

void display(Book *ptr, int i)
{
    printf("\n--- Book Details ---");
    printf("\nID : %d", ptr[i].id);
    printf("\nName : %s", ptr[i].name);
    printf("\nAuthor : %s", ptr[i].author);
    printf("\nPrice : %.2f", ptr[i].price);
    printf("\nRating : %.1f\n", ptr[i].rating);
}
