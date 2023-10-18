import random

alpha=['a','b','c','d','e','f','g']
num=[1,2,3,4,5,6,7,8,9,10]

lf=[]
i=0
while i <5:
    s=random.choice(alpha)
    f=random.choice(num)
    lf.append(str(s))
    lf.append(str(f))
    i+=1
print('Their is you new pasword it contain 10 caracteres:')    
result=''.join(lf)
print('\nGenerated Pasword ==>',result)
pasword=hash(result)

answer=input('\nwant you to try it Y/N :')
while True:   
    if answer.lower()=='y':
        print('|pasword|'.center(15),'')
        test=input()
        if hash(test) ==pasword:
            print('\ncorrecte password save it !!')
            break        
        else:
            print('\nsucces denided')
            print('try again')
        continue 
    else:
        print('\n!!Save this code !!'.center(12),'')
        exit()