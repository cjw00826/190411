#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t pid1;
	pid_t pid2;
	pid_t pid3;
	pid_t pid4;
	pid_t pid5;
	pid_t pid6;
	pid_t pid7;
	pid_t pid8;

	int i;

	int sum1;
	int sum2;
	int sum3;
	int sum4;
	int sum5;
	int sum6;
	int sum7;
	int sum8;
	int sum9;
	int sum10;

	int total;

	if((pid1 = fork()) < 0)
	{
		perror("fork error");
	}
	else if(pid1 == 0)
	{
		if((pid2 = fork()) < 0)
		{
			perror("fork error");
		}
		else if(pid2 == 0)
		{
			if((pid3 = fork()) < 0)
			{
				perror("fork error");
			}
			else if(pid3 == 0)
			{
				if((pid4 = fork()) < 0)
				{
					perror("fork error");
				}
				else if(pid4 == 0)
				{
					if((pid3 = fork()) < 0)
					{
						perror("fork error");
					}
					else if(pid3 == 0)
					{
						if((pid4 = fork()) < 0)
						{
							perror("fork error");
						}
						else if(pid4 == 0)
						{
							if((pid5 = fork()) < 0)
							{
								perror("fork error");
							}
							else if(pid5 == 0)
							{
								if((pid6 = fork()) < 0)
								{
									perror("fork error");
								}
								else if(pid6 == 0)
								{
									if((pid7 = fork()) < 0)
									{
										perror("fork error");
									}
									else if(pid7 == 0)
									{
										if((pid8 = fork()) < 0)
										{
											perror("fork error");
										}
										else if(pid8 == 0)
										{
											for( i=901 ; i<=1000; i++ )
											{
												sum10 += i;
											}
										}
										else	//9th
										{
											for( i=801 ; i<=900; i++ )
											{
												sum9 += i;
											}
										}
									}
									else	//8th
									{
										for( i=701 ; i<=800; i++ )
										{
											sum8 += i;
										}
									}
								}
								else	//7th
								{
									for( i=601 ; i<=700; i++ )
									{
										sum7 += i;
									}
								}
							}
							else	//6th
							{
								for( i=501 ; i<=600; i++ )
								{
									sum6 += i;
								}
							}
						}
						else	//5th
						{
							for( i=401 ; i<=500; i++ )
							{
								sum5 += i;
							}
						}
					}
					else	//4th
					{
						for( i=301 ; i<=300; i++ )
						{
							sum4 += i;
						}
					}
				}
				else	//3rd
				{
					for( i=201 ; i<=300; i++ )
					{
						sum3 += i;
					}
				}
			}
			else	//2nd
			{
				for( i=101 ; i<=200; i++ )
				{
					sum2 += i;
				}
			}
		}
		else	//1st
		{
			for( i=1 ; i<=100; i++ )
			{
				sum1 += i;
			}
		}
	}
	else	//parent
	{
		total = sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10;

		printf("%d\n", total);
	}


	return 0;
}
