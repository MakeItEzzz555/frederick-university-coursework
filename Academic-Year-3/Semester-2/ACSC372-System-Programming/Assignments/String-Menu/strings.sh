#!/bin/bash

usage() {
    echo "Usage: $0"
    echo "Prompts for a string, then lets you extract a substring, get its length, enter a new string, or quit."
}

show_menu() {
    echo
    echo "1) Extract a substring"
    echo "2) Find the length of the string"
    echo "3) Enter a new string"
    echo "4) Quit"
}

read_choice() {
    read -r -p "Enter your choice: " choice
}

read_string() {
    read -r -p "Enter a string: " text
}

if [ "$#" -eq 1 ] && { [ "$1" = "-h" ] || [ "$1" = "--help" ]; }; then
    usage
    exit 0
fi

if [ "$#" -ne 0 ]; then
    echo "Error: this script does not accept command-line parameters." >&2
    usage >&2
    exit 1
fi

read_string

while true; do
    show_menu
    read_choice

    case "$choice" in
        1)
            read -r -p "Start position A (1-${#text}): " start
            read -r -p "End position B (1-${#text}): " end

            if ! [[ "$start" =~ ^[0-9]+$ && "$end" =~ ^[0-9]+$ ]]; then
                echo "Error: positions must be positive numbers."
            elif [ "$start" -lt 1 ] || [ "$end" -lt "$start" ] || [ "$end" -gt "${#text}" ]; then
                echo "Error: use positions where 1 <= A <= B <= ${#text}."
            else
                echo "Substring: ${text:$((start - 1)):$((end - start + 1))}"
            fi
            ;;
        2)
            echo "Length: ${#text}"
            ;;
        3)
            read_string
            ;;
        4)
            echo "Goodbye."
            exit 0
            ;;
        *)
            echo "Error: choose a number from 1 to 4."
            ;;
    esac
done
