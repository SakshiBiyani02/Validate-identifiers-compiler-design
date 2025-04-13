# Identifier Validation Criteria
When classifying an identifier as valid or invalid, the following rules must be adhered to ensure 
consistency and correctness: 
1. Starting Character:                                                                                                                      
The first character of the identifier must be an underscore (_), an uppercase letter (A-Z), 
or a lowercase letter (a-z). 
2. Subsequent Characters:                                                                                                                         
After the first character, the identifier may contain uppercase letters (A-Z), lowercase 
letters (a-z), digits (0-9), but must not include any whitespace or special characters. 
3. No Repeating Underscores:                                                                                                             
The identifier must not contain consecutive underscore characters. This ensures clarity 
and avoids potential confusion. 
4. Reserved Keywords:                                                                                                                          
The identifier must not be a reserved keyword in the language. Reserved keywords have 
predefined meanings and uses, which could lead to conflicts if used as identifiers. 
5. Case Sensitivity:                                                                                                                      
Identifiers are case-sensitive. For example, Variable and variable would be treated as 
distinct identifiers. 
6. Unique from Function and Class Names:                                                                                  
The identifier must not be the same as any existing function or class name. This helps 
avoid naming conflicts within the codebase. 
7. English Characters Only:                                                                                                              
The identifier must exclusively contain English alphabet characters and cannot include 
characters from other languages. This promotes consistency and compatibility. 
8. No Numeric Hyphenation:                                                                                                 
Numeric characters should not be immediately followed by hyphens (-) or underscores 
(_). This avoids confusion and ensures readability. 
9. Length Constraints:                                                                                                                    
The identifier must be at least 1 character long and no longer than 20 characters. This 
ensures that identifiers are neither too short to be meaningful nor too long to be 
cumbersome.
## Examples 
### Valid Identifiers: 
1. userAge (valid) 
2. _tempValue (valid) 
3. itemCount2023 (valid) 
4. average_score (valid) 
### Invalid Identifiers: 
1. 9thElement (starts with digit) 
2. my__var (repeating underscores) 
3. if (reserved keyword) 
4. sqrt (existing function name) 
5. data%value (invalid character %) 
6. var#name (invalid character #) 
7. thisIdentifierIsWayTooLong (exceeds length limit) 
8. 变量 (contains non-English characters)
## Output 
1. int is an invalid identifier because it is a reserved keyword in C++. 
2. Abc is a valid identifier because it satisfies all the rules.
3. for is an invalid identifier because it is a reserved keyword in C++.
4. _abc is a valid identifier because it starts with an underscore, contains no invalid characters, and doesn't violate 
any rules. 
5. sakshi__121 is an invalid identifier because it contains consecutive underscores (__), which are not 
allowed. 
6. ?sakshi is an invalid identifier because the first character is ?, which is not a letter or underscore. 
7. _bus_ starts with an underscore, which is valid.  It has no repeating underscores or invalid numeric combinations. It is not a reserved keyword or predefined name. It contains only valid characters. 
8. sak__ passes the length and first character checks. It fails because it contains consecutive underscores (__), which are invalid according to the rules.
## Conclusion 
The program provides detailed feedback for each step of the validation process, making it easier for users 
to understand why an identifier is valid or invalid. It ensures compliance with common C++ identifier rules and includes checks for both syntax and 
semantics. This makes the program a practical tool for beginners learning programming concepts or for developers 
wanting to ensure identifier validity in their code. 
By combining step-by-step validation with clear output messages, the program serves as an educational and 
functional tool for working with identifiers in C++.
