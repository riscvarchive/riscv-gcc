class date:
  day = 0
  month = 0
  year = 0

  def __init__ (self, x, y, z):
    self.day = x
    self.month = y
    self.year = z

  def print_date (self):
    print self.day, self.month, self.year

x = date (1, 2, 3)
x.print_date ()
x.day = 10
x.print_date ()
