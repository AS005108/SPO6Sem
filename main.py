from gpio import *
from time import *

def main():
	while True:
		if((analogRead(3)*200/1023-100)<21):
			digitalWrite(1, HIGH);
			delay(1)
			digitalWrite(2, LOW);
		if((analogRead(3)*200/1023-100)>24):
			digitalWrite(2, HIGH);
			digitalWrite(1, LOW);
if __name__ == "__main__":
	main()
