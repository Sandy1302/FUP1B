#include<stdio.h>
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int j;
int main ()
{
	printf("Dame un 10 numeros y te digo cual es el mayor y cual es menor\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	scanf("%d",&g);
	scanf("%d",&h);
	scanf("%d",&i);
	scanf("%d",&j);
	
	if (a>=b && a>=c && a>=d && a>=e && a>=f && a>=g && a>=h && a>=i && a>=j)
		{
			printf("El numero mayor es...%d\n",a);
		}
		else
		{
			if(b>=a && b>=c && b>=d && b>=e && b>=f && b>=g && b>=h && b>=i && b>=j)
			{
				printf("El numero mayor es...%d\n",b);
			}
			else
			{
				if(c>=a && c>=b && c>=d && c>=e && c>=f && c>=g && c>=h && c>=i && c>=j)
				{
					printf("El numero mayor es...%d\n",c);
				}
				else
				{
					if(d>=a && d>=b && d>=c && d>=e && d>=f && d>=g && d>=h && d>=i && d>=j)
					{
						printf("El numero mayor es...%d\n",d);
					}
				}
				
				{
					if(e>=a && e>=b && e>=c && e>=d && e>=f && e>=g && e>=h && e>=i && e>=j)
					{
						printf("El numero mayor es...%d\n",e);
					}
					else
					{
						if(f>=a && f>=b && f>=c && f>=d && f>=e && f>=g && f>=h && f>=i && f>=j)
						{
							printf("El numero mayor es...%d\n",f);
						}
						else
						{
							if(g>=a && g>=b && g>=c && g>=d && g>=e && g>=f && g>=h && g>=i && g>=j)
							{
								printf("El numero mayor es...%d\n",g);
							}
							else
							{
								if(h>=a && h>=b && h>=c && h>=d && h>=e && h>=f && h>=g && h>=i && h>=j)
								{
									printf("El numero mayor es...%d\n",h);
								}
								else
								{
									if(i>=a && i>=b && i>=c && i>=d && i>=e && i>=f && i>=g && i>=h && i>=j)
									{
										printf("El numero mayor es...%d\n",i);
									}
									else
									{
										if(j>=a && j>=b && j>=c && j>=d && j>=e && j>=f && j>=g && j>=h && j>=i)
										{
											printf("El numero mayor es...%d\n",j);
										}
										else
										{
											if (a<=a && a<=b && a<=c && a<=d && a<=e && a<=f && a<=g && a<=h && a<=i && a<=j)
											{
												printf("El numero menor es...%d\n",a);
											}
											else
											{
												if(b<=a && b<=c && b<=d && b<=e && b<=f && b<=g && b<=h && b<=i && b<=j)
												{
													printf("El numero menor es...%d\n",b);
												}
												else
												{
													if(c<=a && c<=b && c<=d && c<=e && c<=f && c<=g && c<=h && c<=i && c<=j)
													{
														printf("El numero menor es...%d\n",c);
													}
													else
													{
														if(d<=a && d<=b && d<=c && d<=e && d<=f && d<=g && d<=h && d<=i && d<=j)
														{
															printf("El numero menor es...%d\n",d);
														}
														else
														{
															if(e<=a && e<=b && e<=c && e<=d && e<=f && e<=g && e<=h && e<=i && e<=j)
															{
																printf("El numero menor es...%d\n",e);
															}
															else
															{
																if(f<=a && f<=b && f<=c && f<=d && f<=e && f<=g && f<=h && f<=i && f<=j)
																{
																	printf("El numero menor es...%d\n",f);
																}
																else
																{
																	if(g<=a && g<=b && g<=c && g<=d && g<=e && g<=f && g<=h && g<=i && g<=j)
																	{
																		printf("El numero menor es...%d\n",g);
																	}
																	else
																	{
																		if(h<=a && h<=b && h<=c && h<=d && h<=e && h<=f && h<=g && h<=i && h<=j)
																		{
																			printf("El numero menor es...%d\n",h);
																		}
																		else
																		{
																			if(i<=a && i<=b && i<=c && i<=d && i<=e && i<=f && i<=g && i<=h && i<=j)
																			{
																				printf("El numero menor es...%d\n",i);
																			}
																			else
																			{
																				if(j<=a && j<=b && j<=c && j<=d && j<=e && j<=f && j<=g && j<=h && j<=i && j<=j)
																				{
																					printf("El numero menor es...%d\n",j);
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
}
