void setbit(int n,int num)
{
	int newNum = (1 << n) | num;
	printf("Bit set successfully.\n\n");
    printf("Number before setting %d bit: %d \n", n, num);
    printf("Number after setting %d bit: %d \n", n, newNum);
}
