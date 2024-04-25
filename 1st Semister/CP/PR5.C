/*
Experiment No - 05
Title - Write a program to list prime numbers from
1 to 500 using nested for loop.
Name of the programmer : Pratik Ghute.
*/

void main()
   {
      int i,j,flag;
      clrscr();
      printf("Prime numbers from 1 to 500\n");
      for(i=2;i<=500;i++)
	{
	  flag=1;
	  for(j=2;j<i/2;j++)
	    {
	      if(i % j == 0)
		{
		  flag=0;
		  break;
		}
	    }
	  if(flag == 1)
	    {
	      printf("%d ",i);
	    }
	}
      getch();
   }




_____________________________________________________________

Input set : No input.
Output : We will get prime numbers form 1 to 500 on the screen.

Prime numbers from 1 to 500
2 3 4 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103
 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 211
 223 227 229 233 239 241 251 257 263 269 271 277 281 283 293 307 311 313 317 331
 337 347 349 353 359 367 373 379 383 389 397 401 409 419 421 431 433 439 443 449
 457 461 463 467 479 487 491 499