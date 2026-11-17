// Namespace: Dino.GameCommon
public sealed class LivesServiceNull : ILivesService, IGlobalService<ILivesService> // TypeDefIndex: 13369
{
	// Properties
	public bool IsReady { get; }
	public int Current { get; }
	public int Capacity { get; }
	public ELivesState State { get; }
	public bool HasEnough { get; }
	public TimeSpan TimeUntilNextLife { get; }
	public TimeSpan InfiniteTimeRemaining { get; }
	public bool IsInfiniteIndefinite { get; }

	// Methods

	// RVA: 0x2460234 Offset: 0x245C234 VA: 0x2460234 Slot: 4
	public bool get_IsReady() { }

	// RVA: 0x246023C Offset: 0x245C23C VA: 0x246023C Slot: 5
	public int get_Current() { }

	// RVA: 0x2460244 Offset: 0x245C244 VA: 0x2460244 Slot: 6
	public int get_Capacity() { }

	// RVA: 0x246024C Offset: 0x245C24C VA: 0x246024C Slot: 7
	public ELivesState get_State() { }

	// RVA: 0x2460254 Offset: 0x245C254 VA: 0x2460254 Slot: 8
	public bool get_HasEnough() { }

	// RVA: 0x246025C Offset: 0x245C25C VA: 0x246025C Slot: 9
	public TimeSpan get_TimeUntilNextLife() { }

	// RVA: 0x24602B4 Offset: 0x245C2B4 VA: 0x24602B4 Slot: 10
	public TimeSpan get_InfiniteTimeRemaining() { }

	// RVA: 0x246030C Offset: 0x245C30C VA: 0x246030C Slot: 11
	public bool get_IsInfiniteIndefinite() { }

	// RVA: 0x2460314 Offset: 0x245C314 VA: 0x2460314 Slot: 12
	public bool TryConsume(int amount = 1) { }

	// RVA: 0x246031C Offset: 0x245C31C VA: 0x246031C Slot: 13
	public void Grant(int amount) { }

	// RVA: 0x2460320 Offset: 0x245C320 VA: 0x2460320 Slot: 14
	public void Refill() { }

	// RVA: 0x2460324 Offset: 0x245C324 VA: 0x2460324 Slot: 15
	public void GrantInfinite(TimeSpan duration) { }

	// RVA: 0x2460328 Offset: 0x245C328 VA: 0x2460328 Slot: 16
	public void GrantInfiniteIndefinite() { }

	// RVA: 0x246032C Offset: 0x245C32C VA: 0x246032C Slot: 17
	public void RevokeInfinite() { }

	// RVA: 0x2460330 Offset: 0x245C330 VA: 0x2460330 Slot: 18
	public void add_Changed(Action value) { }

	// RVA: 0x2460334 Offset: 0x245C334 VA: 0x2460334 Slot: 19
	public void remove_Changed(Action value) { }

	// RVA: 0x2460338 Offset: 0x245C338 VA: 0x2460338
	public void .ctor() { }
}

