int R=    9;
int G=    10;
int B=    11

//color selection 
int redValue    =255;
int greenValue  =0;
int blueValue   =255;

void setup() {
  // put your setup code here, to run once:
  pinMode (R,OUTPUT);
  pinMode (G,OUTPUT);
  pinMode (B,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  setColor(redValue,greenValue,blueValue);
  
}

void setColor(int red, int green, int blue){
  analogWrite(R, red);
  analogWrite(G, green);
  analogWrite(B, blue);
}
