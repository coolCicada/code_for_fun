function Solution() {
  let t = 0;
  const n = Number(lines[t++]);

  const res = [];
  for (let i = 0; i < n; i++) {
    const arr = lines[t++].split(' ').map((item) => Number(item));
    let count = 0;
    for (let z = 0; z < arr.length; z++) {
      if (arr[z] > arr[0]) count += 1;
    }
    res[i] = count;
  }
  
  return res.join('\n');
}

const readline = require('readline')
 
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})
const lines = []
rl.on('line', (input) => {
  lines.push(input);
})
rl.on('close', () => {
  console.log(Solution());
});