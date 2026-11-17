// Namespace: Dino.BusSand.App.Meta
public interface IStakeActivity // TypeDefIndex: 4067
{
	// Properties
	public abstract int ActivityId { get; }
	public abstract string ContinuePanel { get; }
	public abstract string QuitItemPrefab { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract int get_ActivityId();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool AtStake();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_ContinuePanel();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract string get_QuitItemPrefab();
}

