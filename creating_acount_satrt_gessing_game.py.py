
name=input('Name'.ljust(23,'>') ).strip()
pswrd=input('Pasword'.ljust(23,'>')).strip()
hashed=hash(pswrd)
l1={}
l1[name]=hashed
print('your ancount has been created')
while True:
    print("\n\n\n\n\n\n\n          login          ")
    validation1=input('Name'.ljust(23,'>') ).strip()
    validation2=input('Pasword'.ljust(23,'>')).strip()
    validation3=hash(validation2)
    if name==validation1 and validation3==l1[name]:
        print('login succesfull ')
        for x in list(range(1,20)):
            print(':) succes'.rjust(x,'.'))
        print('!!!!!!!!Lest start our game!!!!!!!!')   
        score=50
        l1=list(range(1,10))
        x=8
        y=0
        clue=['this number is between 1 and 100',
'this number is between 1 and 20 ',
'this number can be devised by 4 ',
'the number  is on of the result of 2 expo','the expo is 3 , ']
        print(f'''\nHello {name} welcome to 'Guest the number'.
The rules is simple we hide a number x and we will give you a clue and in every wrong unswer wa will give you another clue,
and we will substract from your score 10
!!NB:your start score is 50''')
        print('\nx is an even number')

        while True:
            try:
                z=int(input())
                if z != x :
                    print(f'\nOo Oo wrong unswer ')
                    score-=10
                    print(f'\nyour score is {score}')
                    print(f'''\nTry again
        Their is another clue :{clue[y]}''')
                    y+=1
                    if score ==0:
                        print('\nyour score is watch this add to get +25 points')
                        break
                else:
                    score+=10
                    print(f'\ncorrect answer your score is {score}')
                    break    
            except ValueError:
                print('\nchoose an integer')
    else:
        print('\nlogin denied \n''Try again')