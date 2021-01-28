

void setup()
  
{
  Serial.begin(9600);
   //Veiculos
  pinMode (8, OUTPUT); // red 1
  pinMode (9, OUTPUT); // yellow
  pinMode (10, OUTPUT); // green 1
  //Pedestres
    pinMode (11, OUTPUT); // red 2
    pinMode (12, OUTPUT); // green 2
 
  //Estado inicial 
  
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  
}

void loop()
{
 digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(3000);
  
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(3000);
  
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  delay(2000);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(5000);
  
  digitalWrite(12,LOW);
  for (int x=0; x<=7; x++)
  {
    
    digitalWrite(11,HIGH);
    delay(300);
    digitalWrite(11,LOW);
    delay(300);
  }
  
    digitalWrite(8,LOW);
    
    
    
    
    
    
    
    
    
    
    
}