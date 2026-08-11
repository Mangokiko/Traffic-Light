void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //green road 1
  pinMode(12, OUTPUT); //yellow road 1
  pinMode(11, OUTPUT); //red road 1

  pinMode(10, OUTPUT); //green road 2
  pinMode(9, OUTPUT); //yellow road 2
  pinMode(8, OUTPUT); //red road 2

  pinMode(7, OUTPUT); //green road 3
  pinMode(6, OUTPUT); //yellow road 3
  pinMode(5, OUTPUT); //red road 3

  pinMode(4, OUTPUT); //green road 4
  pinMode(3, OUTPUT); //yellow road 4
  pinMode(2, OUTPUT); //red road 4
}

void loop() {

  //road 1 North
  digitalWrite(13, 1);  //green road 1
  digitalWrite(12, 0);
  digitalWrite(11, 0);

  //road 2 East
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 1);  //red road 2

  //road 3 South
  digitalWrite(7, 1);  //green road 3
  digitalWrite(6, 0);
  digitalWrite(5, 0);

  //road 4 West
  digitalWrite(4, 0);  
  digitalWrite(3, 0);
  digitalWrite(2, 1);  //red road 4
  delay(3000);

/////////////////////
  //road 1 North
  digitalWrite(13, 0); 
  digitalWrite(12, 1); //yellow road 1
  digitalWrite(11, 0);

  //road 2 East
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 1);  //red road 2

  //road 3 South
  digitalWrite(7, 0);  
  digitalWrite(6, 1); //yellow road 3
  digitalWrite(5, 0);

  //road 4 West
  digitalWrite(4, 0);  
  digitalWrite(3, 0);
  digitalWrite(2, 1);  //red road 4
  delay(3000);

/////////////////////
  //road 1 North
  digitalWrite(13, 0); 
  digitalWrite(12, 0);
  digitalWrite(11, 1); //red road 1

  //road 2 East
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 1);  //red road 2

  //road 3 South
  digitalWrite(7, 0);  
  digitalWrite(6, 0); 
  digitalWrite(5, 1); //red road 3

  //road 4 West
  digitalWrite(4, 0);  
  digitalWrite(3, 0);
  digitalWrite(2, 1);  //red road 4
  delay(1500);

/////////////////////
  //road 1 North
  digitalWrite(13, 0); 
  digitalWrite(12, 0);
  digitalWrite(11, 1); //red road 1

  //road 2 East
  digitalWrite(10, 1); //green road 2
  digitalWrite(9, 0);
  digitalWrite(8, 0);  

  //road 3 South
  digitalWrite(7, 0); 
  digitalWrite(6, 0); 
  digitalWrite(5, 1); //red road 3

  //road 4 West
  digitalWrite(4, 1);  //green road 4
  digitalWrite(3, 0);
  digitalWrite(2, 0);
  delay(3000);

/////////////////////
  //road 1 North
  digitalWrite(13, 0); 
  digitalWrite(12, 0);
  digitalWrite(11, 1); //red road 1

  //road 2 East
  digitalWrite(10, 0); 
  digitalWrite(9, 1); //yellow road 2
  digitalWrite(8, 0);  

  //road 3 South
  digitalWrite(7, 0); 
  digitalWrite(6, 0); 
  digitalWrite(5, 1); //red road 3

  //road 4 West
  digitalWrite(4, 0);  
  digitalWrite(3, 1); //yellow road 4
  digitalWrite(2, 0);
  delay(3000);

/////////////////////
  //road 1 North
  digitalWrite(13, 0); 
  digitalWrite(12, 0);
  digitalWrite(11, 1); //red road 1

  //road 2 East
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 1);  //red road 2

  //road 3 South
  digitalWrite(7, 0);  
  digitalWrite(6, 0); 
  digitalWrite(5, 1); //red road 3

  //road 4 West
  digitalWrite(4, 0);  
  digitalWrite(3, 0);
  digitalWrite(2, 1);  //red road 4
  delay(1500);

/////////////////////
}
