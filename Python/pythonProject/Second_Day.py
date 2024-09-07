#......................Tuples............................
#can have duplicate values, immutable, created using '()'
#homogenious
#heterogenious i.e. tuple with mix datatypes
# tuple can be created without parenthesis
# test = "bonds", "mutual funds", 200, 54100
# print(type(test))
# # using index to slice tuple
# stock_price = (23, 24, 25, 27, 28, 32, 24, 43, 54, 72)
# print(stock_price[0:5])
# print(stock_price[6:])
# print(stock_price[-7:-3])

#concatenate tuples
# tupl1 = (23, 78, 54, 52)
# tupl2 = (49, 20,36 ,59)
# combine = tupl1 + tupl2
# print(combine)

#tuple with in the tuple
# cust1 = ("jack", 25)
# cust2 = ("tom", 24)
# cust3 = ("jerry", 25)
#
# customers = (cust1, cust2, cust3)
#
# print(customers)

#Check element as before using 'in' and 'not in'

#....loop in tuple........
# cust1 = ("jack", 25)
# for i in cust1:
#     print(i)

#..........QUESTION 1 ..........
# extract (54, 78, 77)
# extract 77
# stock_prices = (45, 16, (54, 78, 77), 44, 78)
# print(stock_prices[-3])
# print(stock_prices[-3][-1])

#..............................BUILT-IN FUNCTIONS........................
'''
#len()
stock_prices = (23, 24, 27, 29)
print(len(stock_prices))
print(max(stock_prices))
print(min(stock_prices))
sorted(stock_prices) #in descending order
stocks = ("ULVR", "BMW", "apple", "AAPL", "ulvr", "bmw")
del stocks #will delete the list
'''
import os

#........................................................................

#..................CONVERTING THE TUPLE TO LIST TO MANIPULATE..................
'''
x = ("apple", "banana", "Cherry")
print(x)
y = list(x)
y[1] = "melon" # also we can use y.append("melon")
x = tuple(y)
print(y)
'''
#.............adding tuple to tuple
# remember to add a comma(,) when creating a tuple with one element
#plus kardo aapas mai

#...............del keyword................

#..............QUESTION 2 ....................
# stock_prices = (45,16,54,78,54)
# if 45 is removed then 16 index will become 0
#................................................

#..................SET.....................
#unordered, unchangeable, unindexed., duplicates will be ignored
#will treat TRUE and 1 as same and FALSE and 0
# { } used to create the set
# new_set = {"apple", "banana", "cherry"}
# print(new_set)
#if dont want to use curly brackets we can use the set constructor
#new_set = set(("dadsas", "sadads"))
#new_set.add("jdjdjdjd")
# set_two = {"ffshdfsdh", "fehjfjhfj", "sfahf"}
# new_set.update(set_two) # copy one set to another

#...........REMOVING ELEMENTS.............
#pop will remove random element
# delete only element
# clear() will clear the elements
# delete will remove the set
#union()........add all elements together
# set3 = set1.union(set2)
#update will do the same too
#intersecion () , will keep only same element
# z=x.intersection(y)
# symmetric_difference_update() # will keep only elements which are not present in both set

#.......................DICTIONARIES........................
#3.6 tk unorderd thi ab ordered hai
#data is stored in key-value pair
'''
thisdict = {
    "brand":"Ford",
    "model":"Mustand",
    "year":1964
}
print(thisdict["brand"])
print(len(thisdict)) #key-value will be counted as 1
x = thisdict.keys()
print(x)

thisdict['Color'] = "Red" #add  new values to the dictionary

y = thisdict.items()
print(y) #will print all keu-value pairs
if "Model" in thisdict:
    print("Present")
thisdict["Year"] = 2022
thisdict.update({"year":2024}) #will also update the dictionary
#removing items
pop()
thisdict.pop("Brand")
thisdict,pop_item() # will delete last added item

del thisdict # will delete the dictionary
thisdict.clear() # to clear the dictionary

for x in thisdict.values(): #key, values, items(use x,y) can be used
    print(x)

#how to copy the dictionary
mydict = thisdict.copy()
'''
'''
#child dictionaries
child1 = {
    "name":"Emil",
    "year":2004
}
child2 = {
"name":"Tobias",
    "year":2007
}
child3 = {
"name":"Linus",
    "year":2011
}
myfamily = {
    "child1":child1,
    "child2":child2,
    "child3":child3
}
print(myfamily)
print(myfamily["child2"]["name"])
'''
#......................FILE HANDLING...............................

# a = open("budhu.txt", "a+")
#f = open("C:\Users\Mohit Kumar\Desktop\Codes\Python\pythonProject\budhu.txt", "r")
# print(a.read())
# print(f.read())
# a.write("Budhu!!")
# print(a.readline())
# a.close()
# f = open("budhu.txt", "a")
# f.write("Now file has more content")
# f.close()
# f = open("budhu.txt", "r")
# print(f.read())
# f.close()
# f = open("budhu.txt", "x")
'''
import os
if os.path.exists("C:\Users\Mohit Kumar\Desktop\Codes\Python\pythonProject"):
    os.remove("C:\Users\Mohit Kumar\Desktop\Codes\Python\pythonProject")
else:
    print("File does not exist")
'''

os.rmdir("any_folder_name")
