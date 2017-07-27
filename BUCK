cxx_library(
  name = 'alpha',
  header_namespace = 'alpha',
  exported_headers = subdir_glob([
    ('alpha', '**/*.hpp'),
  ]),
  srcs = glob([
    'alpha/**/*.cpp'
  ]),
)

cxx_library(
  name = 'bravo',
  header_namespace = 'bravo',
  exported_headers = subdir_glob([
    ('bravo', '**/*.hpp'),
  ]),
  srcs = glob([
    'bravo/**/*.cpp'
  ]),
)

# Standard setup, seems to work
cxx_binary(
  name = 'main1',
  srcs = [
    'main.cpp'
  ],
  deps = [
    ':alpha',
    ':bravo',
  ],
)

# Fails because bravo requires alpha at link-time
cxx_binary(
  name = 'main2',
  srcs = [
    'main.cpp'
  ],
  deps = [
    # ':alpha',
    ':bravo',
  ],
)

# Succeeds. Does order actually matter?
cxx_binary(
  name = 'main3',
  srcs = [
    'main.cpp'
  ],
  deps = [
    ':bravo',
    ':alpha',
  ],
)
