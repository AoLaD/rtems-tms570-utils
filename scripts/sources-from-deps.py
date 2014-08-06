#!/usr/bin/python

import fnmatch, os, sys, string, re, shutil, string

class source_deps(object):
  def __init__(self, start_dir = None):
    if start_dir is None:
      start_dir = os.getcwd()
    self.top_level_dir = start_dir;
    self.source_files = []

  def process_dep_file(self, dep_file, base_dir):
    for line in open(dep_file, 'r'):
      if len(line) == 0:
        continue
      if line[0] == '#':
        continue
      tgt = string.find(line, ':')
      if tgt >= 0:
        line = line[tgt+1:]
      line = line.strip(' \t\n\r\\')
      if len(line) == 0:
        continue
      for f in line.split():
        if len(f) == 0:
          continue
        if f[0] == '#':
          continue
        f = os.path.join(base_dir, f)
        f = os.path.abspath(f)
        if not os.path.exists(f):
	  sys.stderr.write("path %s does not exist\n"%(f))
          continue
        if os.path.isdir(f):
	  sys.stderr.write("path %s is directory\n"%(f))
          continue
        if f not in self.source_files:
          self.source_files.append(f)

  def find_from_deps_recurse(self, scan_dir, base_dir):
    if os.path.exists(os.path.join(scan_dir,'Makefile')):
      base_dir = scan_dir
    for entry_name in os.listdir(scan_dir):
      full_name = os.path.join(scan_dir, entry_name)
      if os.path.isdir(full_name):
        if entry_name != '.deps':
          self.find_from_deps_recurse(full_name, base_dir)
        else:
          for dep_file in os.listdir(full_name):
            dep_file = os.path.join(full_name, dep_file)
            if not os.path.isdir(dep_file):
              self.process_dep_file(dep_file, base_dir)

  def find_from_deps(self, start_dir = None):
    if start_dir is None:
      start_dir = self.top_level_dir
    start_dir = os.path.abspath(start_dir)
    self.find_from_deps_recurse(start_dir, start_dir)

  def write_deps(self, out_file, base_dir = None):
    self.source_files.sort()
    for f in self.source_files:
      if not f.startswith('/usr/') and not f.startswith('/opt/'):
        if base_dir is None:
          f = os.path.relpath(f)
        else:
          f = os.path.relpath(f, base_dir)
      out_file.write(f + '\n')

sd = source_deps()
sd.find_from_deps()
sd.write_deps(sys.stdout)
