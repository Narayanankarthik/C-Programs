 
   #include<conio.h>
   #include<stdio.h>

        void main() 
        {

            int n;
            String ans="";
            for(n=1;n<=100;n++)
            {
             if(n%2==1)
             {
                ans = "Weird";
                System.out.println(ans);
            
            }
             else if(n%2==0 && n<=5)
             {
               ans="Not weird"; //Complete the code
               System.out.println(ans);
                
             }
                 else if(n%2==0 && n<=20)
             {
               ans="weird"; //Complete the code
               System.out.println(ans);
                
             }
             else
             {
               ans="Not weird"; //Complete the code
               System.out.println(ans);
                
             }
           }
        }
    }
