# Write a Python script to process 5 room booking details
# Display total booking amount and total GST

# Individual room details
def get_room_details():
    bookings = {}

    for i in range(5):
        print("\nEnter details for booking", i + 1)

        room_no = int(input("Enter the number of Room:"))
        customer_name = input("Enter the customer name:")
        contactno = input("Enter the contact number:")
        booking_amount = int(input("Enter the booking amount:"))
        date = input("Enter the date of booking:")

        gst = booking_amount * (18 / 100)

        bookings[i] = {
            "Room No": room_no,
            "Customer name": customer_name,
            "Contact NO": contactno,
            "Booking Amount": booking_amount,
            "Date": date,
            "GST": gst
        }

    return bookings


# To display main dictionary
def display_booking(booking_info):
    print(booking_info)


# To get total room price
def get_total_room_price(bookings):
    total_room_price = 0

    for booking in bookings.values():
        total_room_price += booking["Booking Amount"]

    return total_room_price


# To get total GST price
def get_total_gst(bookings):
    total_gst = 0

    for booking in bookings.values():
        total_gst += booking["GST"]

    return total_gst


# Main program
booking_info = get_room_details()

display_booking(booking_info)

total_room_price = get_total_room_price(booking_info)
total_gst = get_total_gst(booking_info)

print(f"Total Room Price: {total_room_price}")
print(f"Total GST Price: {total_gst:.2f}")