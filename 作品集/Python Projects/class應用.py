class Employee:    # Java ver.: public class Employee extends Object
    
    def __init__(self, id, name):
        self.id = id
        self.name = name
        
    def display(self):
        print('My name is', self.name, ', my id is', self.id)
        
emp1 = Employee('A0001', 'John')
# Java ver.: emp1 = new Employee("A0001", "John");
emp2 = Employee('A0002', 'Mary')
emp3 = Employee('A0003', 'Tom')
emp1.display()    # 等同於 Employee.display(emp1)
emp2.display()
Employee.display(emp3)