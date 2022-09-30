#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Simple Mobile Store Program by Mohamed Mostafa - All User Input Validations Implemented :)

// Functions Decalaration
void ui(void);
void phones(void);
void payment(int t);
void rerun(void);
void discount(int t);

// Struct
typedef struct 
{
    string brand;
    int id;
    string brand_name;
    string availability;
    int quantity;
    int price;
}valar1;

// Main Function
int main(void)
{
    int select;
    ui();
    do
    {
        select = get_int("\n[.] Select: ");
        if(select > 2 || select < 1)
        {
            printf("\n\n[.] Invalid Selection, Please Choose (1 Or 2).\n");
        }
        if(select == 1)
        {
            phones();
        }
        else if(select == 2)
        {
            printf("\n\n Valar Mobile Store Has Been Terminated.\n");
            return 0;
        }
    } while (select < 1 || select > 2);
        
}


void ui(void)
{
    printf("\t\t\t\t\t------------------------------------------------------------------\n");
    printf("\t\t\t\t\t|\t\t\t\t\t\t\t\t  |\n");
    printf("\t\t\t\t\t|\t\t\t\t\t\t\t\t  |\n");
    printf("\t\t\t\t\t|\t\t\t\t\t\t\t\t  |\n");
    printf("\t\t\t\t\t|\t\t\t\t\t\t\t\t  |\n");
    printf("\t\t\t\t\t| O\t\t\t Valar Mobile Store\t\t      (O)\n");
    printf("\t\t\t\t\t|\t\t\t\t\t\t\t\t  |\n");
    printf("\t\t\t\t\t|\t\t\t\t\t\t\t\t  |\n");
    printf("\t\t\t\t\t|\t\t\t\t\t\t\t\t  |\n");
    printf("\t\t\t\t\t|\t\t\t\t\t\t\t\t  |\n");
    printf("\t\t\t\t\t-------------------------------------------------------------------\n");
    printf("\n\n(1)- Display Phones. |_|\n\n(2)- Exit |.|\n\n");
}

// Re Run Prompt Function
void rerun(void)
{
    char q1;
    do
    {
        q1 = get_char("\n\n[?] Do You Wanna Order Something Else? (Y = Continue / N = Exit): ");
        if(q1 == 'Y' || q1 == 'y')
        {
            main();
        }
        else if(q1 == 'N' || q1 == 'n')
        {
            printf("\n\n[*] Valar Mobile Store Has Been Terminated.\n");
            return;
        }
    } while(q1 != 'Y' && q1 != 'y' && q1 != 'N' && q1 != 'n');
}

// Phones Menu && Conditions
void phones(void)
{
    valar1 phones[8];int user_choice;int choice;int choice_quantity;int total = 0;int select1;
    phones[0].brand = "Realme";phones[0].brand_name = "Realme GT Neo 3T";phones[0].id = 1;phones[0].availability = "Available";phones[0].quantity = 6;phones[0].price = 559;
    phones[1].brand = "Samsung";phones[1].brand_name = "Galaxy S22 Ultra";phones[1].id = 2;phones[1].availability = "Available";phones[1].quantity = 5;phones[1].price = 699;
    phones[2].brand = "Apple";phones[2].brand_name = "IPhone 14 Pro Max";phones[2].id = 3;phones[2].availability = "Available";phones[2].quantity = 8;phones[2].price = 2199;
    phones[3].brand = "Xiaomi";phones[3].brand_name = "Redmi Note 11 Pro";phones[3].id = 4;phones[3].availability = "Available";phones[3].quantity = 7;phones[3].price = 273;
    phones[4].brand = "Google";phones[4].brand_name = "Pixel 6a";phones[4].id = 5;phones[4].availability = "Available";phones[4].quantity = 3;phones[4].price = 339;
    phones[5].brand = "Huawei";phones[5].brand_name = "Huawei Mate 50 RS";phones[5].id = 6;phones[5].availability = "Not Available";phones[5].quantity = 0;phones[5].price = 1880;
    phones[6].brand = "Oppo";phones[6].brand_name = "Oppo Reno 8 Pro";phones[6].id = 7;phones[6].availability = "Available";phones[6].quantity = 4;phones[6].price = 678;
    phones[7].brand = "Oneplus";phones[7].brand_name = "One Plus 10 Pro";phones[7].id = 8;phones[7].availability = "Not Available";phones[7].quantity = 0;phones[7].price = 1200;

    printf("\n\n--------------------------------------------------------------------------------------------------------------\n");
    printf("| ID\tBrand\t\tBrand Name\t\tAvailability\tQuantity\t\tPrice \t\t     |\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("| %i\t%s\t\t%s\t%s\t %i\t\t\t%i$\t\t     |\n",phones[0].id,phones[0].brand,phones[0].brand_name,phones[0].availability,phones[0].quantity,phones[0].price);
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("| %i\t%s\t\t%s\t%s\t %i\t\t\t%i$\t\t     |\n",phones[1].id,phones[1].brand,phones[1].brand_name,phones[1].availability,phones[1].quantity,phones[1].price);
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("| %i\t%s\t\t%s\t%s\t %i\t\t\t%i$\t\t     |\n",phones[2].id,phones[2].brand,phones[2].brand_name,phones[2].availability,phones[2].quantity,phones[2].price);
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("| %i\t%s\t\t%s\t%s\t %i\t\t\t%i$\t\t     |\n",phones[3].id,phones[3].brand,phones[3].brand_name,phones[3].availability,phones[3].quantity,phones[3].price);
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("| %i\t%s\t\t%s\t\t%s\t %i\t\t\t%i$\t\t     |\n",phones[4].id,phones[4].brand,phones[4].brand_name,phones[4].availability,phones[4].quantity,phones[4].price);
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("| %i\t%s\t\t%s\t%s\t %i\t\t\t%i$\t\t     |\n",phones[5].id,phones[5].brand,phones[5].brand_name,phones[5].availability,phones[5].quantity,phones[5].price);
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("| %i\t%s\t\t%s\t\t%s\t %i\t\t\t%i$\t\t     |\n",phones[6].id,phones[6].brand,phones[6].brand_name,phones[6].availability,phones[6].quantity,phones[6].price);
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("| %i\t%s\t\t%s\t\t%s\t %i\t\t\t%i$\t\t     |\n",phones[7].id,phones[7].brand,phones[7].brand_name,phones[7].availability,phones[7].quantity,phones[7].price);
    printf("--------------------------------------------------------------------------------------------------------------\n");

    do
    {
        user_choice = get_int("\n\n[.] How Many Devices You Wanna Buy? (Max: 8): ");
    } while (user_choice < 1 || user_choice > 8);

    for(int x = 0; x < user_choice;x++)
    {
        do
        {
            choice = get_int("\n\n[.] Enter Device ID (1 ~ 8): ");
            if(choice == 1)
            {
                if(strcmp(phones[0].availability,"Available") == 0)
                {
                    do
                    {
                        choice_quantity = get_int("\n\n[.] How Many %s ?: ",phones[0].brand_name);
                        if(choice_quantity > 6)
                        {
                            printf("\n\n[!] Sorry, There is only %i %s In Stock.\n",phones[0].quantity,phones[0].brand_name);
                        }
                        else if(choice_quantity < 1)
                        {
                            printf("\n\n[!] Invalid Quantity, Please Enter A Correct Quantity, Ex.(1 ~ 6).\n");
                        }
                        else
                        {
                            total += choice_quantity * phones[0].price;
                        }
                    } while (choice_quantity < 1 || choice_quantity > 6);
                }
                else
                {
                    printf("\n\n[!] Sorry, %s Is Unavailable At The Moment.\n",phones[0].brand_name);
                }
            }
            else if(choice == 2)
            {
                if(strcmp(phones[1].availability,"Available") == 0)
                {
                    do
                    {
                        choice_quantity = get_int("\n\n[.] How Many %s ?: ",phones[1].brand_name);
                        if(choice_quantity > 5)
                        {
                            printf("\n\n[!] Sorry, There is only %i %s In Stock.\n",phones[1].quantity,phones[1].brand_name);
                        }
                        else if(choice_quantity < 1)
                        {
                            printf("\n\n[!] Invalid Quantity, Please Enter A Correct Quantity, Ex.(1 ~ 5).\n");
                        }
                        else
                        {
                            total += choice_quantity * phones[1].price;
                        }
                    } while (choice_quantity < 1 || choice_quantity > 5);
                }
                else
                {
                    printf("\n\n[!] Sorry, %s Is Unavailable At The Moment.\n",phones[1].brand_name);
                }
            }
            else if(choice == 3)
            {
                if(strcmp(phones[2].availability,"Available") == 0)
                {
                    do
                    {
                        choice_quantity = get_int("\n\n[.] How Many %s ?: ",phones[2].brand_name);
                        if(choice_quantity > 8)
                        {
                            printf("\n\n[!] Sorry, There is only %i %s In Stock.\n",phones[2].quantity,phones[2].brand_name);
                        }
                        else if(choice_quantity < 1)
                        {
                            printf("\n\n[!] Invalid Quantity, Please Enter A Correct Quantity, Ex.(1 ~ 8).\n");
                        }
                        else
                        {
                            total += choice_quantity * phones[2].price;
                        }
                    } while (choice_quantity < 1 || choice_quantity > 8);
                }
                else
                {
                    printf("\n\n[!] Sorry, %s Is Unavailable At The Moment.\n",phones[2].brand_name);
                }
            }
            else if(choice == 4)
            {
                if(strcmp(phones[3].availability,"Available") == 0)
                {
                    do
                    {
                        choice_quantity = get_int("\n\n[.] How Many %s ?: ",phones[3].brand_name);
                        if(choice_quantity > 7)
                        {
                            printf("\n\n[!] Sorry, There is only %i %s In Stock.\n",phones[3].quantity,phones[3].brand_name);
                        }
                        else if(choice_quantity < 1)
                        {
                            printf("\n\n[!] Invalid Quantity, Please Enter A Correct Quantity, Ex.(1 ~ 7).\n");
                        }
                        else
                        {
                            total += choice_quantity * phones[3].price;
                        }
                    } while (choice_quantity < 1 || choice_quantity > 7);
                }
                else
                {
                    printf("\n\n[!] Sorry, %s Is Unavailable At The Moment.\n",phones[3].brand_name);
                }
            }
            else if(choice == 5)
            {
                if(strcmp(phones[4].availability,"Available") == 0)
                {
                    do
                    {
                        choice_quantity = get_int("\n\n[.] How Many %s ?: ",phones[4].brand_name);
                        if(choice_quantity > 3)
                        {
                            printf("\n\n[!] Sorry, There is only %i %s In Stock.\n",phones[4].quantity,phones[4].brand_name);
                        }
                        else if(choice_quantity < 1)
                        {
                            printf("\n\n[!] Invalid Quantity, Please Enter A Correct Quantity, Ex.(1 ~ 7).\n");
                        }
                        else
                        {
                            total += choice_quantity * phones[4].price;
                        }
                    } while (choice_quantity < 1 || choice_quantity > 7);
                }
                else
                {
                    printf("\n\n[!] Sorry, %s Is Unavailable At The Moment.\n",phones[4].brand_name);
                }
            }
            else if(choice == 6)
            {
                if(strcmp(phones[5].availability,"Available") == 0)
                {
                    do
                    {
                        choice_quantity = get_int("\n\n[.] How Many %s ?: ",phones[5].brand_name);
                        if(choice_quantity > 7)
                        {
                            printf("\n\n[!] Sorry, There is only %i %s In Stock.\n",phones[5].quantity,phones[5].brand_name);
                        }
                        else if(choice_quantity < 1)
                        {
                            printf("\n\n[!] Invalid Quantity, Please Enter A Correct Quantity, Ex.(1 ~ 7).\n");
                        }
                        else
                        {
                            total += choice_quantity * phones[4].price;
                        }
                    } while (choice_quantity < 1 || choice_quantity > 7);
                }
                else
                {
                    printf("\n\n[!] Sorry, %s Is Unavailable At The Moment.\n",phones[5].brand_name);
                }
            }
            else if(choice == 7)
            {
                if(strcmp(phones[6].availability,"Available") == 0)
                {
                    do
                    {
                        choice_quantity = get_int("\n\n[.] How Many %s ?: ",phones[6].brand_name);
                        if(choice_quantity > 4)
                        {
                            printf("\n\n[!] Sorry, There is only %i %s In Stock.\n",phones[6].quantity,phones[6].brand_name);
                        }
                        else if(choice_quantity < 1)
                        {
                            printf("\n\n[!] Invalid Quantity, Please Enter A Correct Quantity, Ex.(1 ~ 7).\n");
                        }
                        else
                        {
                            total += choice_quantity * phones[6].price;
                        }
                    } while (choice_quantity < 1 || choice_quantity > 7);
                }
                else
                {
                    printf("\n\n[!] Sorry, %s Is Unavailable At The Moment.\n",phones[6].brand_name);
                    return;
                }
            }
            else if(choice == 8)
            {
                if(strcmp(phones[7].availability,"Available") == 0)
                {
                    do
                    {
                        choice_quantity = get_int("\n\n[.] How Many %s ?: ",phones[7].brand_name);
                        if(choice_quantity > 7)
                        {
                            printf("\n\n[!] Sorry, There is only %i %s In Stock.\n",phones[7].quantity,phones[7].brand_name);
                        }
                        else if(choice_quantity < 1)
                        {
                            printf("\n\n[!] Invalid Quantity, Please Enter A Correct Quantity, Ex.(1 ~ 7).\n");
                        }
                        else
                        {
                            total += choice_quantity * phones[7].price;
                        }
                    } while (choice_quantity < 1 || choice_quantity > 7);
                }
                else
                {
                    printf("\n\n[!] Sorry, %s Is Unavailable At The Moment.\n",phones[7].brand_name);
                    return;
                }
            }
        } while (choice < 1 || choice > 8);
    }
    discount(total);
    rerun();
}
// Discount Function
void discount(int t)
{
    char discount_prompt;
    do
    {
        discount_prompt = get_char("\n\n[.] Do You Have A Discount Voucher Code? (y / n): ");
        if(discount_prompt == 'y' || discount_prompt == 'Y')
        {
            string voucher = get_string("\n\n[.] Enter Voucher Code To Get 20 Percent OFF!: ");
            if(strcmp(voucher,"Valar0x01") == 0)
            {
                int discount = t * (100-20)/100;
                printf("\n---------------------------------------------------------------------------------------------------\n");
                printf("| [.] VALID Voucher Code, You've Successfully Claimed Your Discount, Going To Payment Center...   |\n");
                printf("---------------------------------------------------------------------------------------------------\n");
                printf("\n-----------------------------------------\n");
                printf("| Total After Discount: %i$\t\t|",discount);
                printf("\n-----------------------------------------\n");
                payment(discount);
            }
            else if(strcmp(voucher,"Valar0x01") != 0)
            {
                printf("\n----------------------------------\n");
                printf("| [!] INVALID Voucher Code.\t |\n");
                printf("----------------------------------\n");
                discount(t);
            }
        }
        else if(discount_prompt == 'n' || discount_prompt == 'N')
        {
            payment(t);
        }
    } while (discount_prompt != 'y' && discount_prompt != 'Y' && discount_prompt != 'n' && discount_prompt != 'N');
}
// Payment Function
void payment(int t)
{
    int payment_select;int credit_card = 147852369;int credit_ccv = 225;long credit_in;int ccv_in;int credit_balance = 10000;
    printf("\n\n(*) Select Payment Method:\n\n(1) Cash.\n\n(2) Credit Card.\n");
    do
    {
        payment_select = get_int("\n[.] Select: ");
        if(payment_select == 1)
        {
            printf("\n\n[$] Total: %i$. Happy Shopping In Valar Mobile Store. See You Next Time.",t);
            return;
        }
        else if(payment_select == 2)
        {
            credit_in = get_int("\n\n[.] Enter Credit Card Number: ");
            ccv_in = get_int("\n\n[.] Enter Credit Card CCV: ");
            if(credit_card == credit_in && credit_ccv == ccv_in && credit_balance >= t)
            {
                credit_balance -= t;
                printf("\n----------------------------------------------------------------------------------------------------------------------\n");
                printf("[$] Payment Done Successfully.\n\n[$] Your Credit Card Balance After Payment %i$\n",credit_balance);
                printf("----------------------------------------------------------------------------------------------------------------------\n");

            }
            else if(credit_card != credit_in || credit_ccv != ccv_in)
            {
                printf("\n----------------------------------------------------------------------------------------------------------------------\n");
                printf("[!] Payment Failed, Check Your Credit Card Information, And Try Again.\n");
                printf("----------------------------------------------------------------------------------------------------------------------\n");
            }
            else if(credit_balance < t)
            {
                printf("\n----------------------------------------------------------------------------------------------------------------------\n");
                printf("[!] Insufficient Balance, Please Check Your Credit Card Balance, And Try Again.\n");
                printf("----------------------------------------------------------------------------------------------------------------------\n");
            }
        }
    } while (payment_select < 1 || payment_select > 2);
}

