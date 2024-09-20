function sortString(s,lengths){
    s = s.split('');
    for(let i=0;i<lengths;i++){
        for(let j=0;j<lengths;j++){
            if(s[i] < s[j]){
                let temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    return s.join('');
}
function swapChars(s, i,j){
    let arr = s.split('');

    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] =  temp;
    return arr.join('');
}
function solve(){
    let n, counts =0;
    let s;
    const prompt = require('prompt-sync')();

    s = prompt();
    let lengths = s.length;
    s = sortString(s,lengths);
    if(lengths >1){
        console.log(lengths * (lengths-1));
        n = lengths;
        for(let i=0;i<n;i++){
            for(let j=0;j<n-1;j++){
                
                console.log(s);
            }
        }
    }
    
}

solve()