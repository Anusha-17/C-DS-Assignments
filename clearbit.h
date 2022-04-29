void clearbit(int n,int num)  
{
	int newNum = num & (~(1 << n));
    printf("Bit cleared successfully.\n\n");
    printf("Number before clearing %d bit: %d\n", n, num);
    printf("Number after clearing %d bit: %d\n", n, newNum);
}  

