while True :
    selector = -1
    word = raw_input()
    if word == "Tomek":
        selector = 1
    elif word == "exit":
        break
    elif word == "Iza":
        selector = 2
    elif word == "Kasia":
        selector = 3;

    if selector == 1:
        print  "Nice to meet you Tomek"
    elif selector == 2 :
        print "Congratulations! You have a daugther"
    elif selector == 3 :
        print "You are the best !"
    else :
        print "Not defined, try something different"


