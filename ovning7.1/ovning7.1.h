double nfak(int n){
   double i,r=1;

   //For-satsen utg�r ifr�n att 1*2=2, n�sta steg 2*3=6, 6*4=
   for(i=2;i<=n;i++)
   r=r*i;
   return r;
   }
   //Exempel om n=5 ((((1*2)*3)*4)*5)=120
