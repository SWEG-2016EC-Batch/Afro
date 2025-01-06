```mermaid 
graph TD
    A[Start: Welcome to Sales Tracker System] --> B[Display Main Menu]
    B --> C{User Choice?}
    
    C -->|1: Record Sales Slip| D[Input Date and Product Prices]
    D --> E[Record Sales Data for Salespersons]
    E --> B
    
    C -->|2: Generate End of Day Report| F[Input Date for Report]
    F --> G[Display Sales Data Table for the Day]
    G --> B
    
    C -->|3: Search Salesperson Record| H[Input Salesperson Number]
    H --> I[Display Salesperson Details and Sales Record]
    I --> B
    
    C -->|4: Search Product Record| J[Input Product Number]
    J --> K[Display Product Sales Details]
    K --> B
    
    C -->|5: View Top/Least Selling Salesperson| L[Calculate and Display Rankings]
    L --> B
    
    C -->|6: Generate Monthly Report| M[Input Month for Report]
    M --> N[Display Sales Data for the Month]
    N --> B
    
    C -->|7: Add Salesperson| O[Input New Salesperson Details]
    O --> P[Confirm Addition]
    P --> B
    
    C -->|8: Add Product| Q[Input New Product Details]
    Q --> R[Confirm Addition]
    R --> B
    
    C -->|9: Modify Salesperson| S[Input Salesperson Number]
    S --> T[Modify and Save New Details]
    T --> B
    
    C -->|10: Exit System| U[Display Exit Message]
    U --> V[End]
    
    C -->|Invalid Choice| W[Display Error Message]
    W --> B
