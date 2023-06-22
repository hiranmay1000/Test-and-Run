class A:
    def methA(self):
        print("A");

class B(A):
    def methB(self):
        print("B");

class C(B):
    def methC(self):
        print("C");


obj = C();

obj.methA();
obj.methB();
obj.methC();