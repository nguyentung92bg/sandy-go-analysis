// Namespace: Dino.BusSand.App.Meta
[Serializable]
public class GiftPackData // TypeDefIndex: 4050
{
	// Fields
	public List<GiftPackState> packs; // 0x10
	public List<GiftPendingRec> pending; // 0x18
	public int consecutiveFailCount; // 0x20
	public int dailyLevelCount; // 0x24
	public long lastDailyResetTime; // 0x28
	public long lastRecordedTime; // 0x30
	public long lastPurchaseTime; // 0x38
	public long lastLoginTime; // 0x40
	public long currentRoundStartTime; // 0x48
	public int globalSessionPopupCount; // 0x50
	public int globalRoundPopupCount; // 0x54
	public List<GiftTimedAmount> coinSpends; // 0x58
	public List<GiftTimedAmount> itemSpends; // 0x60
	public List<GiftTimedAmount> iapPaid; // 0x68
	public GoldenGiftState golden; // 0x70

	// Methods

	// RVA: 0x2233A0C Offset: 0x222FA0C VA: 0x2233A0C
	public void .ctor() { }
}

