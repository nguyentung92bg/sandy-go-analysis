// Namespace: Dino.BusSand.App.Meta
public static class BattleRoyaleTrack // TypeDefIndex: 4000
{
	// Methods

	// RVA: 0x22250C0 Offset: 0x22210C0 VA: 0x22250C0
	public static void StageAdvance(int roundNo, int changeType, int fromStage, int toStage, int before, int after, int roundTimes, int remain, bool isFinal) { }

	// RVA: 0x2222B8C Offset: 0x221EB8C VA: 0x2222B8C
	public static void Start(int roundNo, int total, int remain) { }

	// RVA: 0x2223C9C Offset: 0x221FC9C VA: 0x2223C9C
	public static void Win(int roundNo, int from, int to, int totalStages, int before, int after, int remain) { }

	// RVA: 0x2224068 Offset: 0x2220068 VA: 0x2224068
	public static void Lose(int roundNo, int from, int before, int after, int remain) { }

	// RVA: 0x2223CD4 Offset: 0x221FCD4 VA: 0x2223CD4
	public static void Reward(int roundNo, int winnerCnt, List<KeyValuePair<int, long>> reward) { }

	// RVA: 0x2225764 Offset: 0x2221764 VA: 0x2225764
	public static List<object> RewardItems(List<KeyValuePair<int, long>> reward) { }
}

