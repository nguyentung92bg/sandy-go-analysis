// Namespace: Dino.GameCommon
public interface ILivesService : IGlobalService<ILivesService> // TypeDefIndex: 13367
{
	// Properties
	public abstract bool IsReady { get; }
	public abstract int Current { get; }
	public abstract int Capacity { get; }
	public abstract ELivesState State { get; }
	public abstract bool HasEnough { get; }
	public abstract TimeSpan TimeUntilNextLife { get; }
	public abstract TimeSpan InfiniteTimeRemaining { get; }
	public abstract bool IsInfiniteIndefinite { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_IsReady();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract int get_Current();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract int get_Capacity();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract ELivesState get_State();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool get_HasEnough();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract TimeSpan get_TimeUntilNextLife();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract TimeSpan get_InfiniteTimeRemaining();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract bool get_IsInfiniteIndefinite();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract bool TryConsume(int amount = 1);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void Grant(int amount);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void Refill();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void GrantInfinite(TimeSpan duration);

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void GrantInfiniteIndefinite();

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void RevokeInfinite();

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 14
	public abstract void add_Changed(Action value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 15
	public abstract void remove_Changed(Action value);
}

