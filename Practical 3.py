def main():
    # Input values for different components
    external_inputs = int(input("Enter the number of External Inputs: "))
    external_outputs = int(input("Enter the number of External Outputs: "))
    external_inquiries = int(input("Enter the number of External Inquiries: "))
    internal_files = int(input("Enter the number of Internal Logical Files: "))
    external_interface_files = int(input("Enter the number of External Interface Files: "))

    # Weight matrix for complexity values
    weights = [
        [3, 4, 6],
        [4, 5, 7],
        [3, 4, 6],
        [7, 10, 15],
        [5, 7, 10]
    ]

    # Calculate Unadjusted Function Points (UFP)
    ufp = (external_inputs * weights[0][0] + external_outputs * weights[1][0] +
           external_inquiries * weights[2][0] + internal_files * weights[3][0] +
           external_interface_files * weights[4][0])

    # Calculate Total Degree of Influence (TDI)
    tdi = sum(int(input(f"Enter the degree of influence for characteristic {i + 1} (0-5): ")) for i in range(14))

    # Calculate Value Adjustment Factor (VAF) and Function Point Count (FPC)
    vaf = (tdi * 0.01) + 0.65
    fpc = ufp * vaf

    # Output the results
    print(f"Unadjusted Function Points (UFP): {ufp}")
    print(f"Total Degree of Influence (TDI): {tdi}")
    print(f"Value Adjustment Factor (VAF): {vaf}")
    print(f"Function Point Count (FPC): {fpc}")

if __name__ == "__main__":
    main()
