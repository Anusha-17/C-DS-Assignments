void getbit(int n,int num)
{
	int bitStatus = (num >> n) & 1;
    printf("The %d bit is set to %d", n, bitStatus);
}
