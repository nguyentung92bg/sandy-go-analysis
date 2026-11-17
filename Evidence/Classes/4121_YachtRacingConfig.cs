// Namespace: Dino.BusSand.App.Meta
public class YachtRacingConfig // TypeDefIndex: 4121
{
	// Fields
	public int Id; // 0x10
	public int ActivityId; // 0x14
	public int FirstParticipationReward; // 0x18
	public int RoundCount; // 0x1C
	public int NewRoundNeedLevelTimes; // 0x20
	public int MatchBotRefreshTime; // 0x24
	public int MatchBotRefreshLevels; // 0x28
	public readonly List<YachtRacingConfig.Stage> Stages; // 0x30

	// Methods

	// RVA: 0x2255030 Offset: 0x2251030 VA: 0x2255030
	public YachtRacingConfig.Stage StageInfo(int stage) { }

	// RVA: 0x22547E4 Offset: 0x22507E4 VA: 0x22547E4
	public static YachtRacingConfig ForActivity(int activityId) { }

	// RVA: 0x2259188 Offset: 0x2255188 VA: 0x2259188
	public void .ctor() { }
}

