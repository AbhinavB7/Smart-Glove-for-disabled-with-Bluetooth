int flexPin1 = A0;
int value1;
int flexPin2 = A1;
int value2;
int flexPin3 = A2;
int value3;
int flexPin4 = A3;
int value4;
int flexPin5 = A4;
int value5;
void setup() 
{
 //setup code
 Serial.begin(9600);
 delay(200);
}
void loop() 
{
 //thumb finger
 value1 = analogRead(flexPin1);
 value1 = map(value1, 990, 1017, 0, 255);
 
 //index finger
 value2 = analogRead(flexPin2);
 value2 = map(value2, 990, 1017, 0, 255);
 
 //middle finger
 value3 = analogRead(flexPin3);
 value3 = map(value3, 990, 1017, 0, 255);
 
 //ring finger
 value4 = analogRead(flexPin4);
 value4 = map(value4, 990, 1017, 0, 255);
 
 //pinky finger
 value5 = analogRead(flexPin5);
 value5 = map(value5, 990, 1017, 0, 255);
 
 //home
 if(value1 < 80 && value2 < 80 && value3 < 80 && value4 < 80 && value5 < 80 )
 {
 Serial.println(" ");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 
 //1 - I need - Thumb
 if(value1 > 80 && value2 < 80 && value3 < 80 && value4 < 80 && value5 < 80 )
 {
 Serial.println("I Need");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //2 - water - index
 if(value2 > 80 && value1 < 80 && value3 < 80 && value4 < 80 && value5 < 80)
 {
 Serial.println("Water");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //3 - food - middle
 if(value3 > 80 && value1 < 80 && value2 < 80 && value4 < 80 && value5 < 80)
 {
 Serial.println("Food");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 
 //4 - ok
 if(value4 > 80 && value1 < 80 && value2 < 80 && value3 < 80 && value5 < 80)
 {
 Serial.println("OK");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //5 - hii
 if(value5 > 80 && value1 < 80 && value2 < 80 && value3 < 80 && value4 < 80)
 {
 Serial.println("Hii");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //12 - Nice
 if(value1 > 80 && value2 > 80 && value3 < 80 && value4 < 80 && value5 < 80)
 {
 Serial.println("Nice");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 
 //13 - Uneasy
 if(value1 > 80 && value3 > 80 && value2 < 80 && value4 < 80 && value5 < 80)
 {
 Serial.println("Uneasy");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 
 //14 - sad
 if(value1 > 80 && value4 > 80 && value2 < 80 && value3 < 80 && value5 < 80)
 {
 Serial.println("Sad");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //15 - Happy
 if(value1 > 80 && value2 < 80 && value3 < 80 && value4 < 80 && value5 > 80)
 {
 Serial.println("Happy");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //23 - Angry
 if(value1 < 80 && value2 > 80 && value3 > 80 && value4 < 80 && value5 < 80)
 {
 Serial.println("Angry");
 digitalWrite(6, HIGH);
 delay(500);
 }
 //24 - Hungry
 if(value2 > 80 && value4 > 80 && value3 < 80 && value1 < 80 && value5 < 80)
 {
 Serial.println("Hungry");
 digitalWrite(6, HIGH);
 delay(1000);
 }

//25 - How Much??
 if(value2 > 80 && value5 > 80 && value1 < 80 && value3 < 80 && value4 < 80)
 {
 Serial.println("How Much??");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //34 - Please
 if(value3 > 80 && value4 > 80 && value1 < 80 && value2 < 80 && value5 < 80)
 {
 Serial.println("Please");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //35 - How are you??
 if(value3 > 80 && value5 > 80 && value1 < 80 && value2 < 80 && value4 < 80)
 {
 Serial.println("How are you??");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //45 - Medicine
 if(value4 > 80 && value5 > 80 && value3 < 80 && value2 < 80 && value1 < 80)
 {
 Serial.println("Medicine");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //123 - Noo
 if(value1 > 80 && value2 > 80 && value3 > 80 && value4 < 80 && value5 < 80)
 {
 Serial.println("Noo");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //124 - fine
 if(value1 > 80 && value2 > 80 && value4 > 80 && value3 < 80 && value5 < 80)
 {
 Serial.println("fine");
 digitalWrite(6, HIGH);
 delay(1000);
 }

//125 - See you later
 if(value1 > 80 && value2 > 80 && value5 > 80 && value3 < 80 && value4 < 80)
 {
 Serial.println("See you later");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //134 - Good one
 if(value1 > 80 && value3 > 80 && value4 > 80 && value2 < 80 && value5 < 80)
 {
 Serial.println("Good one");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //135 - I appreciate
 if(value1 > 80 && value3 > 80 && value5 > 80 && value2 < 80 && value4 < 80)
 {
 Serial.println("I appreciate");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //145 - Yess 
 if(value1 > 80 && value4 > 80 && value5 > 80 && value2 < 80 && value3 < 80)
 {
 Serial.println("Yess");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //234 - OK
 if(value2 > 80 && value3 > 80 && value4 > 80 && value1 < 80 && value5 < 80)
 {
 Serial.println("OK");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //235 - Where??
 if(value2 > 80 && value3 > 80 && value5 > 80 && value1 < 80 && value4 < 80)
 {
 Serial.println("Where??");
 digitalWrite(6, HIGH);
 delay(1000);
 }

 //245 - When??
 if(value2 > 80 && value4 > 80 && value5 > 80 && value1 < 80 && value3 < 80)
 {
 Serial.println("When??");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //345 - Help
 if(value3 > 80 && value4 > 80 && value5 > 80 && value1 < 80 && value2 < 80)
 {
 Serial.println("Help");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //1234 - washroom
 if(value1 > 80 && value2 > 80 && value3 > 80 && value4 > 80 && value5 < 80)
 {
 Serial.println("washroom");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //1235 - SOS
 if(value1 > 80 && value2 > 80 && value3 > 80 && value5 > 80 && value4 < 80)
 {
 Serial.println("SOS");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //1345 - you
 if(value1 > 80 && value3 > 80 && value4 > 80 && value5 > 80 && value2 < 80)
 {
 Serial.println("you");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 //1245 - f off
 if(value5 > 80 && value4 > 80 && value2 > 80 && value1 > 80 && value3 < 80)
 {
 Serial.println("oh shit!!");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 
 //2345 - thanks
 if(value5 > 80 && value4 > 80 && value3 > 80 && value2 > 80 && value1 < 80)
 {
 Serial.println("thanks");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 
 //12345 - Bye
 if(value1 > 80 && value2 > 80 && value3 > 80 && value4 > 80 && value5 > 80)
 {
 Serial.println("Bye");
 digitalWrite(6, HIGH);
 delay(1000);
 }
 
}
