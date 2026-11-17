// Namespace: Dino.BusSand.App.Meta
public class WeeklyCupModel // TypeDefIndex: 4038
{
	// Fields
	public const int UnlockLevelPassed = 39;
	public const int BotCount = 29;
	public const int StrongBots = 4;
	public readonly WeeklyCupData Data; // 0x10
	public int LevelPassed; // 0x18

	// Properties
	public long WeekEndMs { get; }

	// Methods

	// RVA: 0x2230008 Offset: 0x222C008 VA: 0x2230008
	public void .ctor(WeeklyCupData data) { }

	// RVA: 0x2230134 Offset: 0x222C134 VA: 0x2230134
	public static bool IsUnlocked(int levelPassed) { }

	// RVA: 0x2230FFC Offset: 0x222CFFC VA: 0x2230FFC
	public bool IsUnlocked() { }

	// RVA: 0x223100C Offset: 0x222D00C VA: 0x223100C
	public static int PointsFor(int levelType) { }

	// RVA: 0x2231020 Offset: 0x222D020 VA: 0x2231020
	public long get_WeekEndMs() { }

	// RVA: 0x2230570 Offset: 0x222C570 VA: 0x2230570
	public long RemainingMs(long nowMs) { }

	// RVA: 0x22304EC Offset: 0x222C4EC VA: 0x22304EC
	public bool Ended(long nowMs) { }

	// RVA: 0x2231044 Offset: 0x222D044 VA: 0x2231044
	public void Join(long nowMs, int playerSeed) { }

	// RVA: 0x223036C Offset: 0x222C36C VA: 0x223036C
	public bool AddWin(int levelType, long nowMs) { }

	// RVA: 0x2231154 Offset: 0x222D154 VA: 0x2231154
	public static List<CupBot> BuildBots(long weekIndex, int playerSeed) { }

	// RVA: 0x22313EC Offset: 0x222D3EC VA: 0x22313EC
	public int BotScore(CupBot bot, long nowMs) { }

	// RVA: 0x223062C Offset: 0x222C62C VA: 0x223062C
	public List<CupEntry> Board(long nowMs) { }

	// RVA: 0x2230C7C Offset: 0x222CC7C VA: 0x2230C7C
	public int PlayerRank(long nowMs) { }

	// RVA: 0x223150C Offset: 0x222D50C VA: 0x223150C
	public static List<int[]> RewardForRank(int rank) { }

	// RVA: 0x2230DF4 Offset: 0x222CDF4 VA: 0x2230DF4
	public List<int[]> ClaimResult(long nowMs) { }
}

