/**
 * @param {string} s
 * @return {string}
 */
const reverseWords = s => {
    return s.split(' ').reverse().filter(word => word !== '').join(' ');  
};