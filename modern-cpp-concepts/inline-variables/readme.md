# inline variables

`inline variables` allows variables to be defined in header files without violating the
One Definition Rule (ODR).

## Considerations

* To avoid name collisions, inline variables are often placed inside namespaces

## Read about

* Translation Units
* One Definition Rule
* `#pragma once`