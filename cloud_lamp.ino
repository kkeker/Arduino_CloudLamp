int R;
int G;
int B;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
}
 
void loop()
{
  setColor(1, 0, 0, 255);
  delay(50);
  setColor(1, 0, 0, 0);
  delay(500);

  setColor(2, 0, 0, 255);
  delay(50);
  setColor(2, 0, 0, 0);
  delay(1000);
  
  setColor(3, 0, 255, 255);
  delay(100);
  setColor(3, 0, 0, 0);
  delay(1000);
  
  setColor(4, 0, 0, 250);
  delay(50);
  setColor(4, 0, 0, 0);
  delay(50);
  
  setColor(5, 0, 255, 0);
  delay(50);
  setColor(5, 0, 0, 0);
  delay(1000);

  setColor(1, 0, 0, 255); 
  setColor(2, 0, 0, 255); 
  setColor(3, 0, 0, 255); 
  setColor(4, 0, 0, 255); 
  setColor(5, 0, 0, 255);
  delay(100);

  setColor(1, 255, 0, 0);
  setColor(2, 255, 0, 0);
  setColor(3, 255, 0, 0);
  setColor(4, 255, 0, 0);
  setColor(5, 255, 0, 0);
  delay(100);

  setColor(1, 0, 0, 255); 
  setColor(2, 0, 0, 255); 
  setColor(3, 0, 0, 255); 
  setColor(4, 0, 0, 255); 
  setColor(5, 0, 0, 255);
  delay(100);
  setColor(1, 0, 0, 0);
  setColor(2, 0, 0, 0);
  setColor(3, 0, 0, 0);
  setColor(4, 0, 0, 0);
  setColor(5, 0, 0, 0);
  delay(500);

  setColor(1, 0, 0, 255);
  delay(30); 
  setColor(2, 0, 0, 255);
  delay(30); 
  setColor(3, 0, 255, 0);
  delay(30); 
  setColor(4, 0, 255, 255);
  delay(30); 
  setColor(5, 0, 255, 255);
  delay(100);
  setColor(1, 0, 0, 0);
  setColor(2, 0, 0, 0);
  setColor(3, 0, 0, 0);
  setColor(4, 0, 0, 0);
  setColor(5, 0, 0, 0);
  delay(5000);

  setColor(3, 0, 255, 255);
  delay(100);
  setColor(4, 255, 0, 0);
  delay(50);
  setColor(3, 0, 0, 0); 
  setColor(4, 0, 0, 0); 
  delay(7000);

}

void setColor(int ledNum, int colorR, int colorG, int colorB)
{
  #ifdef COMMON_ANODE
    red = 255, 0, 0
    green = 0, 255, 0
    blue = 0, 0, 255
    aqua = 0, 255, 255
    off = 0, 0, 0
  #endif
  
  switch(ledNum){
    case 1:
      R = 2;
      G = 3;
      B = 4;
      break;
    case 2:
      R = 5;
      G = 6;
      B = 7;
      break;
    case 3:
      R = 8;
      G = 9;
      B = 10;
      break;
    case 4:
      R = 11;
      G = 12;
      B = 13;
      break;
    case 5:
      R = 14;
      G = 15;
      B = 16;
      break;
  }
  
  analogWrite(R, colorR);
  analogWrite(G, colorG);
  analogWrite(B, colorB);
  
}
