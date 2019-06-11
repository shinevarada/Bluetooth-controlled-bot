int LM1=2;
int LM2=3;
int RM1=4;
int RM2=5;
int EN1=10;
int EN2=11;
char input;
void setup()
{	Serial.begin(9600);
	pinMode(LM1,OUTPUT);
	pinMode(LM2,OUTPUT);
	pinMode(RM1,OUTPUT);
	pinMode(RM2,OUTPUT);
	digitalWrite(EN1,HIGH);
	digitalWrite(EN2,HIGH);
	Serial.println(">>START<<");
}
void loop()
{	if(Serial.available()>0)
		{   input=Serial.read();
		      Serial.print(input);
		}
	if (input=='S')
		{   Serial.println("STOP");   //bot stops
		     digitalWrite(LM1,LOW);
		     digitalWrite(LM2,LOW);
		     digitalWrite(RM1,LOW);
		     digitalWrite(RM2,LOW);
   		}
else if (input=='F')
		{   Serial.println("FORWARD");    //bot moves forward
		     digitalWrite(LM1,HIGH);
		     digitalWrite(LM2,LOW);
		     digitalWrite(RM1,HIGH);
		     digitalWrite(RM2,LOW);
   		}
else if (input=='R')
		{   Serial.println("RIGHTWARD");    //bot moves right
		     digitalWrite(LM1,HIGH);
		     digitalWrite(LM2,LOW);
		     digitalWrite(RM1,LOW);
		     digitalWrite(RM2,LOW);
   		}
else if (input=='L')
		{   Serial.println("LEFTWARD");    //bot moves left
		     digitalWrite(LM1,LOW);
		     digitalWrite(LM2,LOW);
		     digitalWrite(RM1,HIGH);
		     digitalWrite(RM2,LOW);
   		}
else if (input=='B')
		{   Serial.println("BACKWARD"); //	bot moves backward
		     digitalWrite(LM1,LOW);
		     digitalWrite(LM2,HIGH);
		     digitalWrite(RM1,LOW);
		     digitalWrite(RM2,HIGH);
   		}
}






