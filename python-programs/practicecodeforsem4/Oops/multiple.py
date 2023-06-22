class A:
    def methA(self):
        print("A");

class B:
    def methB(self):
        print("B");

class C(A, B):
    def methC(self):
        print("C");


obj = C();

obj.methA();
obj.methB();
obj.methC();
