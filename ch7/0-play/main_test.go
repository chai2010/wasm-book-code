package main

import (
	"testing"
)

func TestAdd(t *testing.T) {
	if x := Add(1, 2); x != 3 {
		t.Fatalf("expect = %v, got = %v", 3, x)
	}
}

func BenchmarkAdd(b *testing.B) {
	for i := 0; i < b.N; i++ {
		Add(1, 1)
	}
}
