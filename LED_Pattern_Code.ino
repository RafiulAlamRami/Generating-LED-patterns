int Rounds = 5;
int Pattern1_Delay = 80;
int Pattern8_Delay = 50;

void setup()
{
   for(int i=3; i<=12; i++)
   {
    pinMode(i,OUTPUT); //Set Pin as a OUTPUT
   }
}
void loop()
{
   for(int i=0; i<=Rounds; i++) 
   { 
    Pattern1();
   }
   for(int i=0; i<=Rounds; i++)
   { 
    Pattern2();
   }
   for(int i=0; i<=Rounds; i++) 
   {
    Pattern3();
   }
   for(int i=0; i<=Rounds; i++) 
   {
    Pattern4();
   }
   for(int i=0; i<=Rounds; i++)
   {
    Pattern5();
   }
   for(int i=0; i<=Rounds; i++) 
   {
    Pattern6();
   }
   for(int i=0; i<=Rounds; i++) 
   {
    Pattern7();
   }
   for(int i=0; i<=Rounds; i++) 
   {
    Pattern8();
   }
   for(int i=0; i<=Rounds; i++) 
   {
    Pattern9();
   }
}
void Pattern1()
{ 
    for(int i=3; i<=12; i++) 
    {
      digitalWrite(i,HIGH);
      delay(Pattern1_Delay);
      digitalWrite(i,LOW);
    }
    for(int i=11; i>=4; i--) 
    {
      digitalWrite(i,HIGH);
      delay(Pattern1_Delay);
      digitalWrite(i,LOW);
    }
}   
void Pattern2()
{
     for(int i=3; i<=12; i++) 
     {
      digitalWrite(i,HIGH);
      digitalWrite(i-1,HIGH);
      digitalWrite(i+1,HIGH);
      delay(100);
      digitalWrite(i,LOW);
      digitalWrite(i-1,LOW);
      digitalWrite(i+1,LOW);
    }
    for(int i=11; i>=4; i--) 
    {
      digitalWrite(i,HIGH);
      digitalWrite(i-1,HIGH);
      digitalWrite(i+1,HIGH);
      delay(100);
      digitalWrite(i,LOW);
      digitalWrite(i-1,LOW);
      digitalWrite(i+1,LOW);
    }
}
void Pattern3()
{
  for(int i=3; i<=12; i=i+2) 
  {
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
  }
  for(int i=12; i>=3; i=i-2) 
  {
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
  }       
}
void Pattern4()
{   
  for(int i=3; i<=12; i++) 
  {
    digitalWrite(i,HIGH);
    delay(100);
  }
  for(int i=12; i>=2; i--) 
  {
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
  }
}
void Pattern5()
{
  for(int i=3; i<=12; i++) 
  {
    digitalWrite(i,HIGH);
  }
  delay(100);
  for(int i=3; i<=12; i++) 
  {
    digitalWrite(i,LOW);
  }
  delay(100);  
}
void Pattern6()
{
  for(int i=3; i<=8; i++) 
  {
    digitalWrite(i,HIGH);
  }
  for(int i=8; i<=12; i++) 
  {
    digitalWrite(i,LOW);
  }
  delay(200);
  for(int i=3; i<=8; i++) 
  {
    digitalWrite(i,LOW);
  }
  for(int i=8; i<=12; i++) 
  {
    digitalWrite(i,HIGH);
  }
  delay(200);
}
void Pattern7()
{
  for(int i=3; i<=12; i=i+2) 
  {
    digitalWrite(i,HIGH);
  }
  for(int i=4; i<=12; i=i+2) 
  {
    digitalWrite(i,LOW);
  }
  delay(200);
  for(int i=3; i<=12; i=i+2) 
  {
    digitalWrite(i,LOW);
  }
  for(int i=4; i<=12; i=i+2) 
  {
    digitalWrite(i,HIGH);
  }
  delay(200);
}
void Pattern8()
{
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(Pattern8_Delay);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    delay(Pattern8_Delay);
    digitalWrite(6,HIGH);
    digitalWrite(9,HIGH);
    delay(Pattern8_Delay);
    digitalWrite(6,LOW);
    digitalWrite(9,LOW);
    delay(Pattern8_Delay);
    digitalWrite(5,HIGH);
    digitalWrite(10,HIGH);
    delay(Pattern8_Delay);
    digitalWrite(5,LOW);
    digitalWrite(10,LOW);
    delay(Pattern8_Delay);
    digitalWrite(4,HIGH);
    digitalWrite(11,HIGH);
    delay(Pattern8_Delay);
    digitalWrite(4,LOW);
    digitalWrite(11,LOW);
    delay(Pattern8_Delay);
    digitalWrite(3,HIGH);
    digitalWrite(12,HIGH);
    delay(Pattern8_Delay);
    digitalWrite(3,LOW);
    digitalWrite(12,LOW);
    delay(Pattern8_Delay);
    digitalWrite(4,HIGH);
    digitalWrite(11,HIGH);
    delay(Pattern8_Delay);
    digitalWrite(4,LOW);
    digitalWrite(11,LOW);
    delay(Pattern8_Delay);
    digitalWrite(5,HIGH);
    digitalWrite(10,HIGH);
    delay(Pattern8_Delay);
    digitalWrite(5,LOW);
    digitalWrite(10,LOW);
    delay(Pattern8_Delay);
    digitalWrite(6,HIGH);
    digitalWrite(9,HIGH);
    delay(Pattern8_Delay);
    digitalWrite(6,LOW);
    digitalWrite(9,LOW);
    delay(Pattern8_Delay);     
}    
void Pattern9()
{ 
    for(int i=3; i<=12; i++) 
    {
      digitalWrite(i,HIGH);
    }
    for(int i=3; i<=12; i++) 
    {
      digitalWrite(i,LOW);
      delay(100);
      digitalWrite(i,HIGH);
    }
    for(int i=11; i>=4; i--) 
    {
      digitalWrite(i,LOW);
      delay(100);
      digitalWrite(i,HIGH);
    }
}
