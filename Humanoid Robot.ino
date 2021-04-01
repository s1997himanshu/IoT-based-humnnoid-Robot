int M11 = 2;
int M12 = 3;
int M21 = 4;
int M22 = 5;
int M31 = 6;
int M32 = 7;
int M41 = 8;
int M42 = 9;

char a,b,c;

void setup() 
{
  pinMode(M11, OUTPUT);
  pinMode(M12, OUTPUT);
   pinMode(M21, OUTPUT);
  pinMode(M22, OUTPUT);
   pinMode(M31, OUTPUT);
  pinMode(M32, OUTPUT);
   pinMode(M41, OUTPUT);
  pinMode(M42, OUTPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop()
{
  if(Serial.available()>0)
  {
    a = (char)Serial.read();
  // b = ("1234");
 //c = ("4562");
    if(a == 'A')
    {
       digitalWrite(M11, HIGH);
       digitalWrite(M12, LOW);
       digitalWrite(M21, HIGH);
       digitalWrite(M22, LOW);
       digitalWrite(M31, HIGH);
       digitalWrite(M32, LOW);
       digitalWrite(M41, HIGH);
       digitalWrite(M42, LOW);
    }
    if(a == 'B')
  {
       digitalWrite(M11, HIGH);
       digitalWrite(M12, LOW);
       digitalWrite(M21, LOW);
       digitalWrite(M22, LOW);
       digitalWrite(M31, HIGH);
       digitalWrite(M32, LOW);
       digitalWrite(M41, LOW);
       digitalWrite(M42, LOW);
  }
  if(a == 'C')
  {
      digitalWrite(M11, LOW);
       digitalWrite(M12, HIGH);
       digitalWrite(M21, LOW);
       digitalWrite(M22, HIGH);
       digitalWrite(M31, LOW);
       digitalWrite(M32, HIGH);
       digitalWrite(M41, LOW);
       digitalWrite(M42, HIGH);
  }
   if(a == 'D')
  {
      digitalWrite(M11, LOW);
       digitalWrite(M12, LOW);
       digitalWrite(M21, HIGH);
       digitalWrite(M22, LOW);
       digitalWrite(M31, LOW);
       digitalWrite(M32, LOW);
       digitalWrite(M41, HIGH);
       digitalWrite(M42, LOW);
  }
   if(a == 'S')
  {
      digitalWrite(M11, LOW);
       digitalWrite(M12, LOW);
       digitalWrite(M21, LOW);
       digitalWrite(M22, LOW);
       digitalWrite(M31, LOW);
       digitalWrite(M32, LOW);
       digitalWrite(M41, LOW);
       digitalWrite(M42, LOW);
  }
  Serial.print(a);
  //Serial.print(b);
    }
  // put your main code here, to run repeatedly:

}
