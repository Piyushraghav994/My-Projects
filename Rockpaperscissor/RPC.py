import random 
l=["rock","scissor","paper"]

# Rock vs paper ----> paper wins
# Rock vs Scissor ----> Rock wins
# Rock vs Scissor ----> Rock wins

while True:
    uc=int(input('''--You are going into the game--
    Press 1 for Start the game 
    Press 2 for Exit  wsws
                  
    '''));

    if (uc==1):
        for i in range (1,6):
            userinput=int(input(''' Select the option 
            1. Rock
            2. Scissor
            3. Paper
               '''));

            if(userinput==1):
                userchoice="Rock"
            
            elif (userinput==2):
                userchoice="Scissor"
              
            elif (userinput==3):
                userchoice="Paper"

            Cchoice=random.choice(l)
            # print(userchoice)
            # print(Cchoice)

            if (Cchoice==userchoice):        
                print("computer choice is :- ",Cchoice)
                
                print("User choice is :- ",userchoice)

                print("Game draw")
                userchoice=userchoice+1
                Cchoice=Cchoice+1

            elif (userchoice=="rock" and Cchoice=="scissor") or ( userchoice =="paper" and Cchoice=="rock") or (userchoice=="scissor" and Cchoice=="paper"):

                print("--you win match--")
                


            
                


            





    else:
        break


