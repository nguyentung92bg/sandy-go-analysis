// Namespace: Dino.BusSand.App.Meta
[Serializable]
public class ClimbTowerData // TypeDefIndex: 4023
{
	// Fields
	public int cur; // 0x10
	public int last; // 0x14
	public int max; // 0x18
	public int activityId; // 0x1C
	public long startMs; // 0x20
	public long endMs; // 0x28
	public bool isGuide; // 0x30
	public bool isForceClose; // 0x31
	public bool isPeriodEnd; // 0x32
	public int alreadyWinLevelCount; // 0x34
	public List<int> claimed; // 0x38
	public List<int> declineRecords; // 0x40
	public List<int> riseRecords; // 0x48
	public int period; // 0x50
	public int periodLevelCount; // 0x54
	public List<long> historyStart; // 0x58
	public List<long> historyEnd; // 0x60

	// Methods

	// RVA: 0x2228C54 Offset: 0x2224C54 VA: 0x2228C54
	public void .ctor() { }
}

