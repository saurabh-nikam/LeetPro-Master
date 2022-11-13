/**
 * @param {string} s
 * @return {string}
 */
const reverseWords = inputString => {
    return inputString.split(' ').reverse().filter(word => word !== '').join(' ');  
};