class A:
    def methA(self):
        print("A");

class B(A):
    def methB(self):
        print("B");

class C(A):
    def methC(self):
        print("C");


objb = B();
objc = C();

objb.methA();
objb.methB();

objc.methA();
objc.methC();

