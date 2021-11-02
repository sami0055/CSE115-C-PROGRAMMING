
void callMe(int n) {
if( n == 0) return;
printf("%d", n);
callMe(n-1);
printf("%d\n", n);
}
main(){
callMe(3);
}
