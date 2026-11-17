// Namespace: Dino.GameCommon
public interface IUserLevelPersistentDataService : IGlobalService<IUserLevelPersistentDataService> // TypeDefIndex: 13345
{
	// Properties
	public abstract int CurrentLevel { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract int get_CurrentLevel();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void IncreaseLevel();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void SetLevel(int level);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void RegisterOnLevelChanged(Action<int> action);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void UnRegisterOnLevelChanged(Action<int> action);
}

