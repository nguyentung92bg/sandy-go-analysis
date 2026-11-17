// Namespace: Dino.BusSand.App
public interface IAdProvider // TypeDefIndex: 3322
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool RewardedReady(string slot);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void ShowRewarded(string slot, Action<bool, string> done);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void ShowInterstitial(string slot, Action<bool> done);
}

