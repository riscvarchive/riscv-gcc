#!/usr/bin/env python

class numberThing:
  def __init__(self):
    #make a dict to hold data
    self.users = dict()
    '''define some variable'''
    self.looping = True
    #what is the file?
    self.list_file = "thelist"
    #map some function with a dict
    self.functions = {"q":self.quit,
                      "?":self.print_help,
                      "h":self.print_help,
                      "i":self.insert_user,
                      "l":self.list_users,
                      "s":self.save}
    #what is the help string?
    self.help_string='''
--Usage--
=========
?: this help message
h: this help message
i: insert a user
l: list users
s: save
q: quit
    '''
    #read the list file
    self.read_list()
    #start the shitty loop
    while self.looping:
      #get some input from the user
      user_input = raw_input("what do you want to do (? or h for help):")  
      function = self.functions.get(user_input)
      if function:
        function()
      else:
        #there was no mapped function 
        self.print_help()
        
  def quit(self):
    print "quit"
    self.looping=False
    
  def read_list(self):
    try:
      f = open(self.list_file)
      for line in f:
        strippedline = line.strip()
        if strippedline!='':
          (name,number) = strippedline.split("::")
          self.users[name]=number
      f.close()
      print "file has been read"
    except Exception as e:
      print "there is no file"

  def insert_user(self):
    name = self.get_string_from_user("Enter the Name")
    number = self.get_string_from_user("What is %s's number" % (name) )
    self.users[name]=number
    
  def list_users(self):
    print "Users"
    for user in self.users:
      print "%s: %s" % (user, self.users[user])
    
  
  def get_string_from_user(self,string):
    valid_string = False
    while not valid_string:
      user_input = raw_input("%s:" % (string)).strip()
      if len(string)>0:
        valid_string = True
    return user_input
  
  def print_help(self):
    #print the help
    print self.help_string
    
  def save(self):
    f = open(self.list_file, 'w')
    for user in self.users:
      f.write("%s::%s\n" % (user, self.users[user]))
    f.close()
    
if __name__=="__main__":
  p = numberThing()
    
