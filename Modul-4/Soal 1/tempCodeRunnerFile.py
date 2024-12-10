

    output = []
    for i in range(1, 51):
        if i % kelipatan == 0:
            output.append(simbol) 
        else:
            output.append(str(i)) 

    
    print(" ".join(output))