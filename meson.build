project('ModernCD', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

# executor dependency (executor.c, which needs executor.h)
executor_dep = declare_dependency(
    sources: ['executor.c'],
    include_directories: include_directories('.')
)

exe = executable('ModernCD', 'moderncd.c',
  install : true, dependencies : [executor_dep])

test('basic', exe)
