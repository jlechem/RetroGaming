# RetroGaming
Retro gaming is a repository for old school retro C++ console style games. These will range from trivial to more complex and could/should be used as programming tutorials. You should see basic inheritence, use of the standard libraries, looping, logic trees, etc. etc. All of this code is under the Apache 2.0 license.

## Getting
This uses the [stduuid proposal](https://github.com/mariusbancila/stduuid) as a submodule. When cloning ensure you use the command 
```
git clone --recursive https://github.com/jlechem/RetroGaming
```

## Building
```
make RetroGamingApp
```

## Static Analysis
This requires cppcheck.
```
make analyse
```

## Linting
This requires clang-format
```
make lint 
```
