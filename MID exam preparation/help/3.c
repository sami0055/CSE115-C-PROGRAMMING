
int main()
{
    int I =0 , balance = 0;
while (I < 60 && balance < 120 ){
 I = I + 5;
 if (I % 10 != 0)
 continue;
 balance = (balance + 2 * I);
}
printf("I = %d, Balance = %d", I, balance);

}



