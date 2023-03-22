// C program to calculates discounts depends shopping Prices
#include <stdio.h>  // This is a preprocessor directives

int main()
{
    float price, discount_price, paidamount;  // Declares float variables
    
	// Take input from the user and store into price variable 
    printf("Enter the Amount: ");
    scanf("%f", &price);  
    
    if (price >= 1000 && price <= 5000)  //checks price is between 1000 and 5000.
    {
        discount_price = (price * 20) / 100;  //calculates the discount price as 20% of the original price
        printf("Total Discount Price = %f \n", discount_price);  //prints the discount price
        paidamount = price - discount_price;  // calculates the final paid amount
        printf("Final amount is = %f \n", paidamount);  //prints the final paid amount
    }
    else if (price >= 500 && price <= 999)  //checks if price is between 500 and 999
    {
        discount_price = (price * 15) / 100;  // calculates the discount price as 15% of the original price
        printf("Total Discount Price = %f \n", discount_price);  // prints the discount price
        paidamount = price - discount_price;  // calculates the final paid amount
        printf("Final amount is = %f\n", paidamount);  // prints the final paid amount
    }
    else if (price >= 50 && price <= 499)  // checks price is between 50 and 499.
    {
        discount_price = (price * 10) / 100;  //calculates the discount price as 10% of the original price
        printf("Total Discount Price = %f\n", discount_price);  // prints the discount price
        paidamount = price - discount_price;  //calculates the final paid amount
        printf("Final amount is = %f\n", paidamount);  //prints the final paid amount
    }   
    else  // If the price is less than 50 or greater than 5000, this block will be executed
    {
        printf("No Discount Under 50 Rupees\n");  //prints a message no discount is available for prices below 50
    }
    
    return 0; 
}
