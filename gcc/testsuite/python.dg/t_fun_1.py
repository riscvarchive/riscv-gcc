#!/usr/bin/python

#########################
#                       #       
#  Twelve days of xmas  #       
#       Recursive       #       
#       in Python       #       
#                       #       
#       by x1101        #       
#     x1101@gmx.com     #       
#########################

DAYS = [
        ["First","A partridge in a pear tree"],
        ["Second","Two turtle doves \nand"],
        ["Third","Three French hens"],
        ["Fourth","Four calling birds"],
        ["Fifth","FIVE GOLDEN RINGS"],
        ["Sixth","Six geese a-laying"],
        ["Seventh","Seven swans a-swimming"],
        ["Eighth","Eight maids a-milking"],
        ["Ninth","Nine ladies dancing"],
        ["Tenth","Ten lords a-leaping"],
        ["Eleventh","Eleven pipers piping"],
        ["Tewlveth","Twelve drummers drumming"]
        ]
NumDay=0

def give(NumDay, gift, day):
        gift += DAYS[NumDay][1]
        gift += "\n"
        if(NumDay==0):
                print "On the",day,"Day of Christmas my ture love gave to me: \n",gift
                print ""
        else:
                give(NumDay-1,gift,day)

while (NumDay <12):
        day = DAYS[NumDay][0]
        give(NumDay,"",day)
        NumDay += 1

