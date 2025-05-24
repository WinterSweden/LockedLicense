license_key = 8080.00  # the correct license key
tries = 0              # how many tries the user has taken
locked = False         # is the user locked out?
correct = False        # is the key correct?

while not locked and not correct:
    tried_license = float(input("Enter your license key: "))  # get user input and convert to float

    if tried_license != license_key:
        tries += 1
        print("Incorrect key. Try again.")
    else:
        correct = True
        print("License key accepted. Access granted.")

    if tries == 3:
        locked = True
        print("Too many failed attempts. You are locked out.")
