// Namespace: Dino.BusSand.App.Meta
[Serializable]
public class PassportData // TypeDefIndex: 4088
{
	// Fields
	public const int StateNotStart = 0;
	public const int StateInProgress = 1;
	public const int StateFinished = 2;
	public const int CommandNone = 0;
	public const int CommandStartPassport = 1;
	public int command; // 0x10
	public int state; // 0x14
	public int configId; // 0x18
	public bool isPassPurchased; // 0x1C
	public int currentKeys; // 0x20
	public int pendingKeys; // 0x24
	public bool pendingKeysCommitDirty; // 0x28
	public int currentStageIndex; // 0x2C
	public List<int> claimedFree; // 0x30
	public List<int> claimedPass; // 0x38
	public int bonusBankUsedTimes; // 0x40
	public int cachedLinkedGiftPackId; // 0x44
	public string cachedLastActivePeriodKey; // 0x48
	public long cachedRoundStartTime; // 0x50
	public long cachedRoundEndTime; // 0x58
	public bool cachedGiftPackIsActive; // 0x60
	public bool cachedRoundPurchased; // 0x61
	public bool isGivenPurchaseReward; // 0x62
	public bool isGivenPurchaseRewardDisplayed; // 0x63
	public bool needShowUnlockEffect; // 0x64
	public long cheatTimeStamp; // 0x68
	public bool forceCloseOpen; // 0x70
	public int roundNo; // 0x74
	public bool showRed; // 0x78
	public List<int> privileges; // 0x80
	public bool btnShowAnimPlayed; // 0x88

	// Methods

	// RVA: 0x22440E0 Offset: 0x22400E0 VA: 0x22440E0
	public void .ctor() { }
}

