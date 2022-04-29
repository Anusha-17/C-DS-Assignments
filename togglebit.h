void togglebit(int n,int num)
{
	int newNum = num^(1 << n);
    printf("Bit toggled successfully.\n\n");
    printf("Number before toggling %d bit: %d\n",n,num);
    printf("Number after toggling %d bit: %d\n",n,newNum);
}
