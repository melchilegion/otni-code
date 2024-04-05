// PRogram to display the largest number
function largest_num(large){
    let lnum = large[0];
     for (let i = 0; i < large.length; i++){
         if (large[i] > lnum){
             lnum = large[i];
         }
     }
     return lnum;
}
const arr = [3,1,6,9,4,11,5,22];
const output = largest_num(arr);
console.log("The largest number is: " +output);