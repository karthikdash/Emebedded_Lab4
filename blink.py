import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
GPIO.setup(26, GPIO.OUT)
pwm = 99
p = GPIO.PWM(26, pwm)
p.start(pwm)
time.sleep(2)
p.stop()
GPIO.cleanup()
