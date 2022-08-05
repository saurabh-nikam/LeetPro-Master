var MyCalendar = function() {
  this.val = [];
};

MyCalendar.prototype.book = function(start, end) {
  for (let book of this.val) {
    if (end > book[0] && start < book[1]) return false;
  }
  this.val.push([start, end]);
  return true;
};

/** 
 * Your MyCalendar object will be instantiated and called as such:
 * var obj = new MyCalendar()
 * var param_1 = obj.book(start,end)
 */