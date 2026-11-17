// Namespace: Dino.GameCommon
public interface ICoinPersistentDataService : IGlobalService<ICoinPersistentDataService> // TypeDefIndex: 13347
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract int GetCoin();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetCoin(int value);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void ChangeCoinAmount(int amount, string placement);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void RegisterOnCoinChange(Action<int, int> onCoinChange);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void UnregisterOnCoinChange(Action<int, int> onCoinChange);
}

