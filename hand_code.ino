#define x A0
#define y A1
#define z A2

int x_val;
int y_val;
int z_val;
void setup() {
  // put your setup code here, to run once:
  pinMode(x,INPUT);
  pinMode(y,INPUT);
  pinMode(z,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  x_val=analogRead(x);
  y_val=analogRead(y);
  z_val=analogRead(z);
  Serial.print("x: ");
  Serial.println(x_val);
  Serial.print("y: ");
  Serial.println(y_val);
  Serial.print("z: ");
  Serial.println(z_val);
  Serial.println();
  Serial.println("---------------------------------");
  Serial.println();
  delay(5000);
  
}
