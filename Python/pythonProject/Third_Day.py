#...............ITERATOR..................
# iter() #list, tuple, dictionaries
'''
city = ["New Delhi", "Jaipur", "Agra", "Meerut"]
city = iter(city)
print(next(city))
print(next(city))
print(next(city))

#..........IF WANT TO PRINT SEPERATE CHARACTER..................
city = ["New Delhi", "Jaipur", "Agra", "Meerut"]
single = iter(city)
print(next(single))
print(next(single))
'''
#.......................................

#................FIBONACCI SERIES.........................
def fibbo(n):
    if n==0:
        return 0
    elif n==1 or n==2:
        return 1
    else:
        return fibbo(n-1)+fibbo(n-2)

#...........GENAERATOR FUNCTION...............
# more efficient than return does not store value in the memory
'''
def fibo(n):
    a,b = 0, 1
    while a<n:
        yield a
        a, b = b, a+b
fib = fibo(10)
for num in fib:
    print(num)
'''
#difference between return and yield is that we get value lazily in yield and
# the process starts when the variable is yielded, rather then creating the whole list

#.............Decorator...................
'''
def my_decorator(func):
    def wrapper():
        print("Before the function is called.")
        func()
        print("After the function is called.")
    return wrapper
@my_decorator
def say_hello():
    print("Hello!")
say_hello()
'''
#..............Factorial...............
'''
def fact(n):
    if n == 0:
        return 1
    else:
        return (n)*fact(n-1)
'''

#.....................SENDING MAIL USING SMTP...................
'''
import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

sender_email = "reconkancha@gmail.com"
reciever_email = "mohitkr0401@gmail.com"
password = "recon@0401"
subject = "Test Email"
body = "This is a test email sent from python."

message = MIMEMultipart()
message["From"] = sender_email
message["To"] = reciever_email
message["Subject"] = subject

message.attach((MIMEText(body, "plain")))

smtp_server = "smtp.gmail.com"
port = 465

try:
    server = smtplib.SMTP(smtp_server, port)
    server.starttls()

    server.login(sender_email, password)

    server.sendmail(sender_email, reciever_email, message.as_string())

    print("Email sent Succesfully")

except Exception as e:
    print(f"Error: (e)")
finally:
    server.quit()

'''

#.................GUI PROGRAMMING...........................
