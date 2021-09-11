// User-defined function
void factors(int num)
{
 int i;

    for(i = 2; i <= num/2; i ++)
        if (num % i == 0)
             printf("%5d", i);
}

void main()
{
    printf("Factors of 255 : ");
    factors(255);

    printf("\nFactors of 3050 : ");
    factors(3050);

}
