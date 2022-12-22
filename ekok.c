int main()
{
    int sayi1 = 2;
    int sayi2 = 12;
    
    int i=1;
    int ekok;
    
    while(1)
    {
        if(i % sayi1 == 0 && i % sayi2 == 0)
        {
            ekok = i;
            break;
        }
        i++;
    }
    printf("%d",ekok);

    return 0;
}