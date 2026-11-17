// Namespace: Dino.GameCommon
public interface IBoosterPersistentDataService // TypeDefIndex: 13342
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void UseBooster(IGameBooster booster, string placement = "", int amount = 1);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void AddBooster(IGameBooster booster, string placement = "", int amount = 1);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract int GetBoosterAmount(IGameBooster booster);
}

