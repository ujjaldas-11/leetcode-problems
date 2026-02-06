class ListNode:
  def __init__(self, val = 0, next = None):
    self.val = val
    self.next = next


class Solution:
  def addTwoNumbers(self, l1, l2):
    dummy = ListNode()
    curr = dummy
    carry = 0
    

    while l1 or l2 or carry:
      v1 = l1.val if l1 else 0
      v2 = l2.val if l2 else 0
      
      val = v1 + v2 + carry

      carry = val // 10 
      val = val % 10

      curr.next = ListNode(val)
      curr = curr.next

      l1 = l1.next if l1 else None
      l2 = l2.next if l2 else None

    return dummy.next


  
def create_Linkedlist(arr):
  if not arr:
    return None

  head = ListNode(arr[0])
  current = head

  for val in arr[1:]:
    current.next = ListNode(val)
    current = current.next

  return head

def printList(node):
  elements = []
  while node:
    elements.append(str(node.val))
    node = node.next
  
  print("-> ".join(elements) if elements else "Empty List")
  

sol = Solution()

l1 = create_Linkedlist([2,4,3])
l2 = create_Linkedlist([5,6,4])

res = sol.addTwoNumbers(l1, l2)

print("answer: ")
printList(res)
