#!/bin/bash
menu() {
    echo "Temperature Conversion Menu"
    echo "1) Celsius to Fahrenheit"
    echo "2) Fahrenheit to Celsius"
    echo "3) Exit"
}
c_to_f() {
    fahrenheit=$(echo "scale=2; ($1 * 9/5) + 32" | bc)
    echo "$1 °C is equal to $fahrenheit °F"
}

f_to_c() {
    celsius=$(echo "scale=2; ($1 - 32) * 5/9" | bc)
    echo "$1 °F is equal to $celsius °C"
}
while true; do
    menu
    read -p "Please select an option (1-3): " choice
    case $choice in
        1)
           read -p "Enter temperature in Celsius: " celsius
           if ! [[ "$celsius" =~ ^-?[0-9]+(\.[0-9]+)?$ ]]; then
               echo "Invalid input. Please enter a valid number."
               continue
           fi
           c_to_f $celsius;
           ;;
        2)

            read -p "Enter temperature in Fahrenheit: " fahrenheit
            if ! [[ "$fahrenheit" =~ ^-?[0-9]+(\.[0-9]+)?$ ]]; then
                echo "Invalid input. Please enter a valid number."
                continue
            fi
           f_to_c $fahrenheit;
            ;;
        3)
            echo "Exiting the program. Goodbye!"
            exit 0
            ;;
        *)
            echo "Invalid option. Please try again."
            ;;
    esac
    echo ""
done

