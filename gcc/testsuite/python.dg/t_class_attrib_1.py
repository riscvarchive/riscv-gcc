class foobar:
    somevar = 5
    print somevar
    def __init__ (self):
        self.x = 1
x = foobar ()
print x.x

x.x = 5

print x.x
