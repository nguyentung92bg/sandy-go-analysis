// Namespace: Dino.BusSand.App.Meta
[Serializable]
public class GoldenGiftState // TypeDefIndex: 4049
{
	// Fields
	public int passLevelCount; // 0x10
	public long activateTime; // 0x18
	public long duration; // 0x20
	public bool hasPurchased; // 0x28
	public List<int> claimedStageIds; // 0x30
	public int baseLevelOnStart; // 0x38
	public int lastViewedPassLevelCount; // 0x3C
	public bool hasSeenFirstActivation; // 0x40
	public bool pendingUnlockAnimation; // 0x41
	public int firstUnlockStage; // 0x44
	public bool forcePoppedAllStages; // 0x48

	// Methods

	// RVA: 0x223380C Offset: 0x222F80C VA: 0x223380C
	public void ResetForNewRound(int currentLevel, long startTime, long activeDuration) { }

	// RVA: 0x22338E4 Offset: 0x222F8E4 VA: 0x22338E4
	public void SetFirstUnlockStage(int stage) { }

	// RVA: 0x2233904 Offset: 0x222F904 VA: 0x2233904
	public void SyncPassLevelCount(int currentLevel) { }

	// RVA: 0x2233984 Offset: 0x222F984 VA: 0x2233984
	public void .ctor() { }
}

