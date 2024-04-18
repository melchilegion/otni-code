// Online C compiler to run C program online
#include <stdio.h>

int main() {
    long long Binary_Number;
    int Decimal_Number = 0;
    int position = 1;
    
    printf("Enter your binary number: ");
    scanf("%lld", &Binary_Number);
    
    while(Binary_Number != 0 ){
        int last_digit = Binary_Number % 10;
        Decimal_Number += last_digit * position;
        position *= 2;
        Binary_Number /= 10;
    }
    printf("The Decimal Number is: %d", Decimal_Number );
    return 0;
}
