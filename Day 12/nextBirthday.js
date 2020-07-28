year = prompt('What year do you be born?')
month = prompt('In what month? (Please type the number)')
day = prompt('And the day?')

birthday = new Date(year, month-1, day)

today = Date.now()

days = Math.floor( ( today - birthday )/(1000*3600*24) )

console.log(`You were born ${days} days ago`)

