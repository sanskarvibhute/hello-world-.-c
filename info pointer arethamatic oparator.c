/* Let me explain the key format specifiers you mentioned:

1. `%d` (Decimal Integer)
- Used for printing or scanning signed decimal integers
- Example:
```c
int num = 42;
printf("%d", num);  // Output: 42
int negative = -123;
printf("%d", negative);  // Output: -123
```

2. `%p` (Pointer Address)
- Used specifically for printing memory addresses/pointers
- Typically displays address in hexadecimal format
- Implementation-defined format (may vary across systems)
- Best practice is to cast pointers to (void*) when using %p
- Example:
```c
int x = 10;
int *ptr = &x;
printf("%p", (void*)ptr);  // Output: 0x7fff5fbff8ac (example address)
```

3. `%x` or `%X` (Hexadecimal)
- Used for printing integers in hexadecimal format
- %x prints in lowercase (a-f)
- %X prints in uppercase (A-F)
- Example:
```c
int num = 255;
printf("%x", num);  // Output: ff
printf("%X", num);  // Output: FF
```

Key differences:
1. `%d` vs `%x`:
   - Same value, different representations
   ```c
   int num = 16;
   printf("%d", num);   // Output: 16 (decimal)
   printf("%x", num);   // Output: 10 (hexadecimal)
   ```

2. `%p` vs `%x` for pointers:
   - %p is specifically designed for pointers and is portable
   - %x might not show the full address on all systems
   ```c
   int *ptr = &num;
   printf("%p", (void*)ptr);   // Correct: 0x7fff5fbff8ac
   printf("%x", ptr);          // Not recommended: might show truncated address
   ```

Best Practices:
- Use `%d` for regular integer values
- Use `%p` for pointer addresses (with void* cast)
- Use `%x/%X` when you specifically need hexadecimal representation of integers
- Don't use `%x` for printing pointer addresses

Width Specification:
```c
printf("%5d", 42);    // Output: "   42" (right-aligned, 5 spaces)
printf("%05d", 42);   // Output: "00042" (zero-padded)
printf("%8x", 255);   // Output: "      ff" (right-aligned hex)
``` */