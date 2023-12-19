package main

import (
	"container/heap"
	"fmt"
)

func lastStoneWeight(stones []int) int{
	h := IntHeap([]int{})
	for _, val := range(stones){
		heap.Push(&h, val)
	}
	for len(h) > 1{
		x := heap.Pop(&h).(int)
		y := heap.Pop(&h).(int)
		print()
		
		if x != y {
			heap.Push(&h, (x - y))
		}
	}
	fmt.Println(h)
	if len(h) == 0{
		return 0
	} else{
		return heap.Pop(&h).(int)
	}
}

type IntHeap []int
func (h IntHeap) Len() int {return len(h)}
func (h IntHeap) Less(i, j int) bool {return h[i] > h[j]}//< min heap. > max heap
func (h IntHeap) Swap(i, j int) {h[j], h[i] = h[i], h[j]}
func (h *IntHeap) Push(x interface{}) {*h = append(*h, x.(int))}
func (h *IntHeap) Pop() interface{} {
	old := *h
	n := len(old)
	x := old[n - 1]
	*h = old[0 : n - 1 ]
	return x
}

func main(){
	fmt.Println("My first Go")
	var l = []int{6, 2, 6, 7}
	
	lastStoneWeight(l)
	
}