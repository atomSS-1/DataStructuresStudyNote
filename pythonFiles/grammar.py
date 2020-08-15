

# 여러가지 파이썬 자료형  
    
    
# python list
this_is_list = [1,2,3]
print(this_is_list)

# test if mutable or immutable
this_is_list = ['a','b','c']

#list is mutable
print(this_is_list)

# allocate tuple type
this_is_tuple = (1,2,3);
print(this_is_tuple)

# test if mutable or immutable
this_is_tuple = ('a','b','c')

# tuple is mutable
print(this_is_tuple)

#print from last tree items
print(this_is_tuple[-3: ])

this_is_set = {1,2,3}

#print all sets

print(this_is_set)

#check 3 is present

print((3 in this_is_set))

# add items

this_is_set.add(4)

print(this_is_set) # {1,2,3,4}

thisisdict = {"name":"me", "age":12, "키":200}

#print name 
print(thisisdict["name"]) # me


#looping array

this_is_array = ["a","b", 21]


for element in this_is_array:
    print(element)

#add array

this_is_array.append('apple')

print(this_is_array)



#create class

class MyClass:
    x = 6

c1 = MyClass()

print(c1.x)# 6

# add __init__

class Person:
    def __init__(self, name, age):
        self.name = name;
        self.age = age;


p1 = Person("me", 12)

print(p1.age) # 12


#inheritance



class Me(Person):
    def __init__(self, myName):

    
        self.myName = myName



me = Me("myname")


print(me.myName)

iter_list = iter(this_is_list)

print(iter_list) # returns object

print(next(iter_list)) # a
