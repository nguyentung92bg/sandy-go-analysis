// Namespace: Dino.BusSand.App.Meta
[Serializable]
public class YachtRacingData // TypeDefIndex: 4119
{
	// Fields
	public List<YachtRacingHistory> History; // 0x10
	public List<YachtRacingBot> StageBots; // 0x18
	public long StageStartTimeStamp; // 0x20
	public int StageAlreadyPlayLevelCount; // 0x28
	public YachtRacingState ActivityState; // 0x2C
	public int StageRoundCount; // 0x30
	public int NewPeriodAlreadyPlayLevelCount; // 0x34
	public int NewRoundAlreadyPlayLevelCount; // 0x38
	public long FaildCoolTimeStamp; // 0x40
	public int FaildCoolLevelCount; // 0x48
	public int FailedCount; // 0x4C
	public int LifeCycleMaxStage; // 0x50
	public string Guid; // 0x58
	public int ActivityId; // 0x60
	public long StartTimeStamp; // 0x68
	public long EndTimeStamp; // 0x70
	public int CurrentStage; // 0x78
	public int LastStage; // 0x7C
	public bool IsPopupStart; // 0x80
	public bool IsClaimReward; // 0x81
	public int ActivityPeriod; // 0x84
	public int ActivityPeriodLevelCount; // 0x88
	public int PeriodCurrentStage1Count; // 0x8C
	public int PeriodCurrentStage2Count; // 0x90
	public int PeriodCurrentStage3Count; // 0x94
	public bool IsGuideShown; // 0x98
	public RacingRobotSave Robot; // 0xA0
	public string PlayerName; // 0xA8

	// Properties
	public YachtRacingBot PlayerBot { get; }
	public int CurrentWinCount { get; set; }
	public int LastWinCount { get; set; }
	public int PlayerRanking { get; }
	public bool HaveData { get; }
	public int PeriodCurrentStageCount { get; }

	// Methods

	// RVA: 0x22544CC Offset: 0x22504CC VA: 0x22544CC
	public void EnsureLists() { }

	// RVA: 0x2256468 Offset: 0x2252468 VA: 0x2256468
	public YachtRacingBot get_PlayerBot() { }

	// RVA: 0x2255490 Offset: 0x2251490 VA: 0x2255490
	public int get_CurrentWinCount() { }

	// RVA: 0x2259154 Offset: 0x2255154 VA: 0x2259154
	public void set_CurrentWinCount(int value) { }

	// RVA: 0x2259170 Offset: 0x2255170 VA: 0x2259170
	public int get_LastWinCount() { }

	// RVA: 0x2258F54 Offset: 0x2254F54 VA: 0x2258F54
	public void set_LastWinCount(int value) { }

	// RVA: 0x22554D4 Offset: 0x22514D4 VA: 0x22554D4
	public int get_PlayerRanking() { }

	// RVA: 0x22547A8 Offset: 0x22507A8 VA: 0x22547A8
	public bool get_HaveData() { }

	// RVA: 0x2255404 Offset: 0x2251404 VA: 0x2255404
	public bool IsValid(long now) { }

	// RVA: 0x2258634 Offset: 0x2254634 VA: 0x2258634
	public bool NewWindowIsValid(long start, long end) { }

	// RVA: 0x2258F8C Offset: 0x2254F8C VA: 0x2258F8C
	public int get_PeriodCurrentStageCount() { }

	// RVA: 0x2258FDC Offset: 0x2254FDC VA: 0x2258FDC
	public int RemainSeconds(long now) { }

	// RVA: 0x2258F70 Offset: 0x2254F70 VA: 0x2258F70
	public int GetActivityPeriod() { }

	// RVA: 0x22587A0 Offset: 0x22547A0 VA: 0x22587A0
	public void Clear() { }

	// RVA: 0x2258878 Offset: 0x2254878 VA: 0x2258878
	public void Init(int activityId, long start, long end) { }

	// RVA: 0x2257D04 Offset: 0x2253D04 VA: 0x2257D04
	public void EnterNewStage(List<YachtRacingBot> bots, long now) { }

	// RVA: 0x225436C Offset: 0x225036C VA: 0x225436C
	public void .ctor() { }
}

