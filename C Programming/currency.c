#include<stdio.h> 

int main()                                                         
{ // Display greeting and brief introduction
    printf("\n\n\n*****Welcome to the Currency Conversion Calculator in C*****\n");
    printf("This program can convert between rupee, dollar, pound, euro, japanese yen, swiss frans.\n\n");
    
  float amount;                                                
  float rupee, dollar, pound, euro, Japanese  , Swiss ;                                 
  int choice, loop;

    do {                                                              
                                                                      
  printf("The choices are as follows:\n");        

  printf("\nEnter 1: Ruppe"); 
  printf("\nEnter 2: Dollar");                                         
  printf("\nEnter 3: Pound");                                          
  printf("\nEnter 4: Euro");
  printf("\nEnter 5: Japanese yen ");
  printf("\nEnter 6: Swiss francs ");

  printf("\nEnter your choice: ");                                    
  scanf("%d", &choice);                                             

  printf("Enter the amount you want to convert?\n");                         
  scanf("%f", &amount);

  switch (choice)
  {
    case 1: // Rupee Conversion
        dollar = amount / 82.29;
        printf("%.2f Rupee =  %.2f dollar", amount, dollar);

        pound = amount / 100;
        printf("\n%.2f Rupee =  %.2f pound", amount, pound);

        euro = amount / 86.77;
        printf("\n%.2f Rupee =  %.2f euro", amount, euro);

        Japanese = amount * 1.62;
        printf("\n%.2f Rupee = %.2f  japanese yen", amount, Japanese );
        
        Swiss  = amount * 0.011;
        printf("\n%.2f Rupee = %.2f  Swiss franc", amount, Swiss );

        break;

    case 2: // Dollar Conversion
        rupee = amount * 82.29;
        printf("\n%.2f Dollar =  %.2f rupee", amount, rupee);

        pound = amount *0.82;
        printf("\n%.2f Dollar =  %.2f pound", amount, pound);

        euro = amount *0.95;
        printf("\n%.2f Dollar =  %.2f euro", amount, euro);

        Japanese = amount *134.35;
        printf("\n%.2f Dollar = %.2f  japanese yen", amount, Japanese );
        
        Swiss  = amount *0.93;
        printf("\n%.2f Dollar = %.2f  Swiss franc", amount, Swiss );


        break;

    case 3: // Pound Conversion
        rupee = amount * 100.67;
        printf("\n%.2f Pound =  %.2f rupee", amount, rupee);


        dollar = amount *1.22;
        printf("\n%.2f Pound =  %.2f dollar", amount, dollar);

        euro = amount *1.16;
        printf("\n%.2f Pound =  %.2f euro", amount, euro);

        Japanese = amount *160.97;
        printf("\n%.2f Pound = %.2f  japanese yen", amount, Japanese );
        
        Swiss  = amount *1.11;
        printf("\n%.2f Pound = %.2f  Swiss franc", amount, Swiss );
        break;

    case 4: // Euro Conversion
        rupee = amount * 86.77;
        printf("\n%.2f Euro =  %.2f rupee", amount, rupee);

        dollar = amount *1.05;
        printf("\n%.2f Euro =  %.2f dollar", amount, dollar);

        pound = amount *0.86;
        printf("\n.2%f Euro =  %.2f pound", amount, pound);

        Japanese = amount *143.25;
        printf("\n%.2f Euro = %.2f  japanese yen", amount, Japanese );
        
        Swiss  = amount *0.99;
        printf("\n%.2f Euro = %.2f  Swiss franc", amount, Swiss );
        break;

    case 5: // Japanese yen Conversion
        rupee = amount * 0.62;
        printf("\n%.2f Japanese yen =  %.2f rupee", amount, rupee);

        dollar = amount *0.0074;
        printf("\n%.2f Japanese yen =  %.2f dollar", amount, dollar);

        pound = amount *0.0062;
        printf("\n%.2f Japanese yen =  %.2f pound", amount, pound);

        euro= amount *0.0070 ;
        printf("\n%.2f Japanese yen = %.2f  euro", amount, euro);
        
        Swiss  = amount *0.0069 ;
        printf("\n%.2f Japanese yen = %.2f  Swiss franc", amount, Swiss );
        break;

    case 6: // Swiss Franc Conversion
        rupee = amount * 89.35;
        printf("\n%.2f Swiss Franc =  %.2f rupee", amount, rupee);

        dollar = amount *1.08;
        printf("\n%.2f Swiss Franc =  %.2f dollar", amount, dollar);

        pound = amount *0.90;
        printf("\n%.2f Swiss Franc =  %.2f pound", amount, pound);

        euro = amount *1.01;
        printf("\n%.2f Swiss Franc = %.2f  euro", amount, euro);
        
        Japanese = amount *144.93;
        printf("\n%.2f Swiss Franc = %.2f  Japanese yen", amount, Japanese );
        break;

     //Default case
    default:
        printf("\nInvalid Input. Please try again.");
  }

    printf("\n\nEnter 1 to continue or 0 to exit:\n");
        scanf("%d", &loop);
    }  while (loop == 1);

    printf("\nHave a nice day!\n");

    return 0;
}

