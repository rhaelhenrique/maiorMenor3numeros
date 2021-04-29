int main () {
int a, b, c, x, y;
scanf("%d %d %d", &a, &b, &c);
if (a>b){
if(a>c)
y = a;
else
y = c;
}
else {
if(b>c)
y = b;
else
y = c;
}
if(a<b){
if(a<c)
x = a;
else
x = c;
}
else {
if(b<c)
x = b;
else
x = c;
}
printf("Menor %d \nMaior %d \n", x, y);
}