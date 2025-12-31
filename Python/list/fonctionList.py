#insert()

test = list(range(1,11))
print(test[1])
print(test)

test.insert(0, 0)

print(test)
print(test[1])

test.insert(11,"Achraf")
print(test)

#extend()

testtow = ["othman" ,"benyhay" , "Ali" , "hassni"]
test.extend(testtow)
print(test)


#remove()

test.remove("othman")
print(test)

#pop()

a = test.pop(2)
print(test)
print(a)

#clear()

testtow.clear()
print(testtow)

#del 

del test[0:11]
print("del \n")
print(test)

#len()

a = len(test)
print(a) 

#sum()
#max()
#min()

print(max(test))
print(min(test))

#count()

test.insert(0,"othman")
n = test.count("othman")

print(n)

#reverse()

test.reverse()
print(test)

#sort

testtow = list(range(1,9))
print(testtow)

testtow.sort(reverse=True)
print(testtow)
#upper
#lower
#rcherche 
#index
#copy
