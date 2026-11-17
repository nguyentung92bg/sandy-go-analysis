// Namespace: Dino.BusSand.App.Meta
public class BattleRoyaleConfig // TypeDefIndex: 4006
{
	// Fields
	public int ID; // 0x10
	public int MaxRewardTimes; // 0x14
	public int PersonNum; // 0x18
	public int TotalStageNum; // 0x1C
	public int LoseStreak; // 0x20
	public int ColdTime; // 0x24
	public int PersonaGroup; // 0x28
	public int HideCD; // 0x2C
	public int WinHideCD; // 0x30
	public int WinColdTime; // 0x34
	public readonly List<KeyValuePair<int, long>> Reward; // 0x38

	// Methods

	// RVA: 0x2225AE8 Offset: 0x2221AE8 VA: 0x2225AE8
	public static BattleRoyaleConfig FromRow(Dictionary<string, object> r) { }

	// RVA: 0x2220700 Offset: 0x221C700 VA: 0x2220700
	public static BattleRoyaleConfig Load(int id) { }

	// RVA: 0x2225FD4 Offset: 0x2221FD4 VA: 0x2225FD4
	public void .ctor() { }
}

