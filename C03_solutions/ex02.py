check_size = 10**6

for digit in range(check_size):
    print digit
    for i in range(2,digit/2+1):
        if digit % i == 0:
            print "break"
            break
        else:
            if i == digit/2:
                print "%s is PRIME!!!" % digit
