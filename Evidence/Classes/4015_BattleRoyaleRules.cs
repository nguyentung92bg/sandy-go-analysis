// Namespace: Dino.BusSand.App.Meta
public static class BattleRoyaleRules // TypeDefIndex: 4015
{
	// Methods

	// RVA: 0x2223290 Offset: 0x221F290 VA: 0x2223290
	public static int ComputeEliminations(BattleRoyaleStageInfo info) { }

	// RVA: 0x2223534 Offset: 0x221F534 VA: 0x2223534
	public static int ApplyFinalStageRule(int eliminations, int currentPlayerCount, BattleRoyaleFinalStage fsp, Random rng) { }

	// RVA: 0x22215B8 Offset: 0x221D5B8 VA: 0x22215B8
	public static BattleRoyaleFinalStage FinalStageFor(int playerWorth, List<BattleRoyaleFinalStage> rows) { }

	// RVA: 0x2227320 Offset: 0x2223320 VA: 0x2227320
	public static int FinalPersonNum(BattleRoyaleFinalStage f) { }

	// RVA: 0x222325C Offset: 0x221F25C VA: 0x222325C
	public static float FinalPersonNumFloat(BattleRoyaleFinalStage f) { }

	// RVA: 0x2221860 Offset: 0x221D860 VA: 0x2221860
	public static List<KeyValuePair<int, long>> SplitReward(List<KeyValuePair<int, long>> pool, int aliveBots) { }

	// RVA: 0x2222908 Offset: 0x221E908 VA: 0x2222908
	public static int PickPersona(List<BattleRoyalePersona> rows, int groupId, Random rng) { }

	// RVA: 0x22217A8 Offset: 0x221D7A8 VA: 0x22217A8
	public static BattleRoyalePersonalType StrategyFor(BattleRoyalePersona persona, int stage) { }

	// RVA: 0x222257C Offset: 0x221E57C VA: 0x222257C
	public static void CreateGroup(BattleRoyaleData d, int maxCount, int minHaveHead, int maxHaveHead, List<int> headIds, Random rng) { }

	// RVA: 0x22235FC Offset: 0x221F5FC VA: 0x22235FC
	public static List<int> SelectPersonToDead(BattleRoyaleData d, int count, int stage, Random rng) { }

	// RVA: 0x22224C4 Offset: 0x221E4C4 VA: 0x22224C4
	public static void ClearGroup(BattleRoyaleData d) { }

	// RVA: 0x22212E4 Offset: 0x221D2E4 VA: 0x22212E4
	public static int LiveBots(BattleRoyaleData d) { }

	// RVA: -1 Offset: -1
	public static void Shuffle<T>(List<T> list, Random rng) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26EC074 Offset: 0x26E8074 VA: 0x26EC074
	|-BattleRoyaleRules.Shuffle<int>
	|
	|-RVA: 0x26EC150 Offset: 0x26E8150 VA: 0x26EC150
	|-BattleRoyaleRules.Shuffle<object>
	|
	|-RVA: 0x26EC22C Offset: 0x26E822C VA: 0x26EC22C
	|-BattleRoyaleRules.Shuffle<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x2226E10 Offset: 0x2222E10 VA: 0x2226E10
	public static long WorthOf(int itemId, long num) { }

	// RVA: 0x2227238 Offset: 0x2223238 VA: 0x2227238
	private static int CeilToInt(float f) { }

	// RVA: 0x22272AC Offset: 0x22232AC VA: 0x22272AC
	private static int FloorToInt(float f) { }
}

