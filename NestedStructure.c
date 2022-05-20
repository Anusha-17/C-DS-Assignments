#include<stdio.h>  
struct address   
{  
    char city[20];  
    int pin;  
    int phone;  
};  
struct employee  
{  
    char name[20];  
    struct address add;  
};  
void main ()  
{  
    struct employee emp;  
    printf("Enter employee information:\n");  
    scanf("%s %s %d %d",emp.name,emp.add.city, &emp.add.pin, &emp.add.phone);  
    printf("Printing the employee information....\n");  
    printf("Name: %s\nCity: %s\nPincode: %d\nPhone: %d",emp.name,emp.add.city,emp.add.pin,emp.add.phone);  
}  
