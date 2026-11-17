// Namespace: Dino.BusSand.App.Meta
[Serializable]
public class BattleRoyaleData // TypeDefIndex: 4005
{
	// Fields
	public BattleRoyaleCommand commond; // 0x10
	public int loseStreakTimes; // 0x14
	public long coldTimeStamp; // 0x18
	public int currentStage; // 0x20
	public int configId; // 0x24
	public long startTimeStamp; // 0x28
	public long endTimeStamp; // 0x30
	public int getRewardTimes; // 0x38
	public long dayId; // 0x40
	public BattleRoyaleState state; // 0x48
	public int hideCD; // 0x4C
	public int playerWorth; // 0x50
	public int stagePlayerWorth; // 0x54
	public int perStagePlayerWorth; // 0x58
	public int totalHistoryCost; // 0x5C
	public int startGameNum; // 0x60
	public int personaConfigId; // 0x64
	public List<int> decorationTypes; // 0x68
	public long configEndTime; // 0x70
	public bool isNewDay; // 0x78
	public int roundNo; // 0x7C
	public bool hasGroup; // 0x80
	public int totalCount; // 0x84
	public List<BattleRoyalePerson> personals; // 0x88
	public List<int> deadPersonIds; // 0x90
	public int deadStage; // 0x98
	public List<int> curStageDeadPersonIds; // 0xA0
	public bool lastLoseNoStep; // 0xA8

	// Methods

	// RVA: 0x221F420 Offset: 0x221B420 VA: 0x221F420
	public void EnsureLists() { }

	// RVA: 0x221F2F4 Offset: 0x221B2F4 VA: 0x221F2F4
	public void .ctor() { }
}

