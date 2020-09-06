import random
import string

# def requestNumber(digits):
#     try:
#         user_input =  input(f'Type a {digits} digits number: ') 
#         if len(user_input) != digits:
#             print('Invalid input')
#             requestNumber(digits)
#         else:
#             number = int( user_input )
#             return user_input

#     except ValueError as e:
#         print('Invalid input')
#         requestNumber(digits)

#     print(user_input)
def requestNumber(digits):

        user_input =  input(f'Type a {digits} digits number: ') 

        while len(user_input) != digits or user_input.isdigit() == False:
            print('Invalid input')
            user_input =  input(f'Type a {digits} digits number: ') 

        return user_input
        
    


def generateNumber(digits):

    number = str( random.randint(0, int(digits*'9')) )
    
    pc_number = ( digits - len(number) )  * '0' + number

    # print(f'The number generated is {pc_number}')

    return pc_number



def cows_bulls():
    cows = 0
    bulls = 0

    while cows < 10:

        thisLapCows = 0
        plural = 's'
        
        pc_number = generateNumber(4)
        user_number = requestNumber(4)

        for i in range(4):
            print(pc_number[i], user_number[i])
            if pc_number[i] == user_number[i]:
                cows += 1
                thisLapCows += 1
            
        if thisLapCows == 0:
            bulls += 1
        elif thisLapCows == 1:
            plural = ''

        print(f'You have guessed {thisLapCows} digit{plural}!')
        print(f'cows = {cows}, bulls = {bulls}')



def run():
    cows_bulls()


if __name__ == '__main__':
    run()