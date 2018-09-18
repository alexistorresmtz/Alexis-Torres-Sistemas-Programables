
const int verde = 13;       
const int amarillo = 12;       
const int rojo = 11;        

const int p_Verde = 9;       
const int p_Rojo = 8;        

const int boton = 7; 
       
const int pot=A0;           
int espera=0;               

void setup() {                      
  pinMode(boton, INPUT);           
  pinMode(p_Verde, OUTPUT);         
  pinMode(p_Rojo, OUTPUT);          
  pinMode(rojo, OUTPUT);         
  pinMode(amarillo, OUTPUT);       
  pinMode(verde, OUTPUT);          
  
  digitalWrite(verde, HIGH);       
  digitalWrite(p_Rojo, HIGH);       
  Serial.begin(9600);              

}

void loop() {
  int val=0;                              
  int valor=0;                            
 val=digitalRead(boton);               
 valor=(analogRead(pot)*10);              

 
  if (val == HIGH && espera==0) {          
      espera==1;                           
      digitalWrite(verde, LOW);             
      digitalWrite(amarillo, HIGH);       
     delay(valor);                        

      digitalWrite(amarillo, LOW);          
      digitalWrite(rojo, HIGH);            
      digitalWrite(p_Rojo, LOW);            
      digitalWrite(p_Verde, HIGH);         
      delay(valor);                        
      }
 
      digitalWrite(p_Verde, LOW);        
      digitalWrite(p_Rojo, HIGH);         
      digitalWrite(rojo, LOW);          
      digitalWrite(verde, HIGH);        
      delay(valor);                
          
      espera=0;                          
  }
