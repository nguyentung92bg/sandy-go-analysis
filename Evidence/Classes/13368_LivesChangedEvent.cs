// Namespace: Dino.GameCommon
public struct LivesChangedEvent : IEvent // TypeDefIndex: 13368
{
	// Fields
	public readonly int Current; // 0x0
	public readonly int Capacity; // 0x4
	public readonly ELivesState State; // 0x8

	// Methods

	// RVA: 0x2460228 Offset: 0x245C228 VA: 0x2460228
	public void .ctor(int current, int capacity, ELivesState state) { }
}

