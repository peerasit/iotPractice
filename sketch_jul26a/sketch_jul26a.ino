void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int val = 20;
  val = map(val,0,100,0,50);
  Serial.println(val);

}
