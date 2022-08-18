function Solution() {
  let t = 0;
  const n = Number(lines[t++]);
  const res = [];
  
  for (let i = 0; i < n; i++) {
    t++;

    const board = [];
    for (let j = 0; j < 8; j++) {
      board.push(lines[t++].split(''));
    }

    for (let z = 1; z < 7; z++) {
      for (let y = 1; y < 7; y++) {
        if (board[z][y] === '#') {
          const a = [[-1, -1], [1, 1], [-1, 1], [1, -1]];
          let flag = true;
          for (let x = 0; x < a.length; x++) {
            if (board[z + a[x][0]][y + a[x][1]] !== '#') {
              flag = false;
              break;
            }
          }
          if (flag) {
            res.push(`${z + 1} ${y + 1}`);
            break;
          }
        }
      }
    }
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