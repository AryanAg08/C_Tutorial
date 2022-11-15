var input = prompt("Enter the input? ");
var p = prompt("Enter the position: ");
var d = prompt("Mention the direction: ");
var i;

var array = [];
console.log(input);

for (i=1; i <6; i++) {
    var k = input++;
    array.push(k);
}

console.log(p);
console.log(d);


let dire;

if (d === 0) {
    dire = "Left";
    array = array.concat(array.splice(0,p - 1 ));
}
else if (d === 1) {
    dire = "Right";

    array = array.unshift.apply(array, array.splice(d,d - 5));
}
else return console.log(d);


  
console.log(`Input Array: ` + array);