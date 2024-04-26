class MyClass:
    def __init__(self, list_items, target):
        self.list_items = list_items
        self.target = target
        
    def TwoSum(self):
        res = []
        FinalRes = []
        for num in self.list_items:
            checker = self.target - num
            if checker in res:
                FinalRes.append([checker, num])
            res.append(num) 
        return FinalRes
        

list_items = [1, 4, 2, 6, 7]
target = 8
obj = MyClass(list_items, target)
print(obj.TwoSum())

# output:
# [[2, 6], [1, 7]]

            
