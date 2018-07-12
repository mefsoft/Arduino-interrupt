/*Powered By MEFSOFT*/
/*You can use you can use this program, but the publishing rights are reserved by MEFSOFT*/
/*Unauthorized publishing and sale of the program is prohibited.*/
/* V-1.1*/

int timer=0;
void setup() {
  //interrupt ayarlama
  pinMode(2,INPUT);

  attachInterrupt(digitalPinToInterrupt(2), kesme, RISING);
  Serial.begin(9600);
}

 void loop(){
  delay(1000);
 timer+=1;
 }
//interrupt fonksiyonu
void kesme()
{
  Serial.println(timer);
}
