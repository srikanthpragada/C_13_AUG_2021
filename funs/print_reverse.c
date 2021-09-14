
void print_reverse(int num)
{
 int digit;

    digit = num % 10;
    printf("%d", digit);
    num /= 10;
    if (num > 0)
        print_reverse(num); // Recursion
}

void main()
{
     print_reverse(1250);
}
