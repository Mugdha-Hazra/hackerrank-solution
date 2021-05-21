def is_leap(y):
    if(y%4==0 and y%100!=0):
        return True
    elif(y%400==0):
        return True
    elif(y%100==0):
        return False
    else:
        return False

year = int(input())
print(is_leap(year))
