// Arduino code for rgb controller

// Global settings
// Set arduino outputs on color chanel
int R=    9;
int G=    10;
int B=    11

//color selection 
int redValue    =255;
int greenValue  =0;
int blueValue   =255;

void setup() {
  // pinMode setting
  pinMode (R,OUTPUT);
  pinMode (G,OUTPUT);
  pinMode (B,OUTPUT);
}

void loop() {
  //implementar selección de color desde html
  setColor(redValue,greenValue,blueValue);
  
}

void setColor(int red, int green, int blue){
  analogWrite(R, red);
  analogWrite(G, green);
  analogWrite(B, blue);
}
