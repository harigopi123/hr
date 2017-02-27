 #include<stdio.h>
  int main(){
                 int numb,rem,sum=0,entr,nr,i,m=1,digits=0;
                 int initial,final;
                 clrscr();
                 printf("\n Enter the Initial range :");
                 scanf("%d",&initial);
                 printf("\n Enter the Final range   : ");
                 scanf("%d",&final);
                 printf("\n Armstrong numbers between the given range are: \n");
                 for(numb=initial; numb<=final; numb++){
                 entr = numb;
                 nr=numb;
                 while(nr>0){
                 nr = nr / 10;
                digits +=1;
                }
                nr=numb;
                while(nr!=0){
                rem = nr % 10;
                nr = nr / 10;
               for(i=1;i<=digits;i++){
               m = m*rem;
               }
               sum +=m;
               m=1;
               }
               if(sum == entr)
               printf("%d ",sum);
               sum=0;
               digits=0;
               }
               return 0;
    }