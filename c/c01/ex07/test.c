#include <unistd.h>


void    ft_putnbr(int nb)   
{                           
        int     digit;         
                            
        digit = nb % 10 + 48; 
        if (nb > 9)           
        {                      
                ft_putnbr(nb / 10);
        }                      
        if ( nb < 0)           
        {                      
                nb = nb * (-1);
                write(1, "-", 1); 
                ft_putnbr(nb);
        }                      
        write(1, &digit, 1);                                                                        
} 

int	main()
{
	int	num;

	num = 48;

	ft_putnbr(num);
}
