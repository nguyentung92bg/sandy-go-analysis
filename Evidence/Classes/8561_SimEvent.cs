// Namespace: Dino.BusSand.Core
[IsReadOnly]
public struct SimEvent // TypeDefIndex: 8561
{
	// Fields
	public readonly SimEventType Type; // 0x0
	public readonly int A; // 0x4
	public readonly int B; // 0x8
	public readonly GrainPoint[] Samples; // 0x10

	// Methods

	// RVA: 0x241DC50 Offset: 0x2419C50 VA: 0x241DC50
	public void .ctor(SimEventType type, int a = 0, int b = 0, GrainPoint[] samples) { }

	// RVA: 0x241DC64 Offset: 0x2419C64 VA: 0x241DC64 Slot: 3
	public override string ToString() { }
}

