 #include<stdio.h>
   int main(){
   
   int lower = 0, upper = 300, step = 20;
   float fahr, celsius;
   celsius = lower;
   
   printf("\nCelsius-Fahrenheit table\n");
   
   while(celsius <= upper){
    fahr  = ((9.0/5.0) * (celsius)) +  32.0;
    printf("%6.1f %6.1f\n",celsius,fahr);
    celsius = celsius + step;
  }

  return 0;
 }
            
