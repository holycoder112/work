pn1 = int(input())   #The number of students in A div
list1 = []
for i in range (0,n1):
    _list = []
    _list.append(int(input()))     #Roll no
    _list.append(int(input()))     #Date
    _list.append(int(input()))     #Month
    list1.append(_list)

#taking input of B div

n2 = int(input())
list2 = []
for i in range (0,n2):
    _list = []
    _list.append(int(input()))     #Roll no
    _list.append(int(input()))     #Date
    _list.append(int(input()))     #month
    list2.append(_list)

list = []
i = j = 0
while i < n1 and j < n2:
    if(list1[i][2] < list2[j][2]):
        list.append(list1[i])
        i+=1
    elif list1[i][2] > list2[j][2]:
        list.append(list2[j])
        j+=1
    else:
        if list1[i][1] < list2[j][1]:
            list.append(list1[i])
            i+=1
        else:
            list.append(list2[j])
            j+=1
while i < n1:
    list.append(list1[i])
    i+=1
while j < n2:
    list.append(list2[j])
    j+=1

print(list)                  #Final required output