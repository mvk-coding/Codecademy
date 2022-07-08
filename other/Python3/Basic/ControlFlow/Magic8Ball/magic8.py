import random

# Simple promgram to emulate a Magic 8 ball

# Variables used
name = "Manon"
question = "Will I finish this project?"
answer = ""

# Get a random number for the answer
random_number = random.randint(1,11)
# print(random_number) # used for testing

# Determine the answer based on the random number
if(random_number == 1):
  answer = "Yes - definitely."
elif(random_number == 2):
  answer = "It is decidedly so."
elif(random_number == 3):
  answer = "Without a doubt."
elif(random_number == 4):
  answer = "Reply hazy, try again."
elif(random_number == 5):
  answer = "Ask again later."
elif(random_number == 6):
  answer = "Better not tell you now."
elif(random_number == 7):
  answer = "My sources say no."
elif(random_number == 8 ):
  answer = "Outlook not so good."
elif(random_number == 9):
  answer = "Very doubtful."
elif(random_number == 10):
  answer = "There is a chance."
elif(random_number == 11):
  answer = "Definitely no."
else:
  answer = "Error"

# Check whether question is not left empty
if(question == None or len(question) == 0):
  print("Please ask a question.")
else:
  # Check whether name is empty
  if (name == None or len(name) == 0):
    print("Question: " + question)
  else:
    print(name + " asks: " + question)
  print("Magic 8-Ball's answer: " + answer)
