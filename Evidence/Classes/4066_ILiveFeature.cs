// Namespace: Dino.BusSand.App.Meta
public interface ILiveFeature // TypeDefIndex: 4066
{
	// Properties
	public abstract string Key { get; }
	public abstract int Order { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract string get_Key();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract int get_Order();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void OnBoot();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void OnLevelStart(int level);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void OnLevelWin(LevelType type, int clearedLevel);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void OnFinalFail();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void OnQuit();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void OnEconomyChanged();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void CollectHallCommands(HallQueue q, bool fromGame);
}

