// Namespace: Dino.BusSand.App.Meta
public class WeeklyCupFeature : LiveFeature<WeeklyCupData> // TypeDefIndex: 4033
{
	// Fields
	private WeeklyCupModel _m; // 0x18

	// Properties
	public override string Key { get; }
	public override int Order { get; }
	public static WeeklyCupFeature I { get; }
	public WeeklyCupModel Model { get; }
	public bool Unlocked { get; }
	public bool Joined { get; }
	public bool ResultDue { get; }
	public long SecondsLeft { get; }
	public List<CupEntry> Board { get; }
	public int Rank { get; }

	// Methods

	// RVA: 0x222FE14 Offset: 0x222BE14 VA: 0x222FE14 Slot: 13
	public override string get_Key() { }

	// RVA: 0x222FE54 Offset: 0x222BE54 VA: 0x222FE54 Slot: 14
	public override int get_Order() { }

	// RVA: 0x222FE5C Offset: 0x222BE5C VA: 0x222FE5C
	public static WeeklyCupFeature get_I() { }

	// RVA: 0x222FEC0 Offset: 0x222BEC0 VA: 0x222FEC0
	public WeeklyCupModel get_Model() { }

	// RVA: 0x2230080 Offset: 0x222C080 VA: 0x2230080
	public bool get_Unlocked() { }

	// RVA: 0x2230140 Offset: 0x222C140 VA: 0x2230140 Slot: 17
	public override void OnLevelWin(LevelType type, int clearedLevel) { }

	// RVA: 0x2230210 Offset: 0x222C210 VA: 0x2230210
	private static int Seed() { }

	// RVA: 0x22303F4 Offset: 0x222C3F4 VA: 0x22303F4
	public bool get_Joined() { }

	// RVA: 0x223044C Offset: 0x222C44C VA: 0x223044C
	public bool get_ResultDue() { }

	// RVA: 0x2230528 Offset: 0x222C528 VA: 0x2230528
	public long get_SecondsLeft() { }

	// RVA: 0x2230604 Offset: 0x222C604 VA: 0x2230604
	public List<CupEntry> get_Board() { }

	// RVA: 0x2230C54 Offset: 0x222CC54 VA: 0x2230C54
	public int get_Rank() { }

	// RVA: 0x2230D28 Offset: 0x222CD28 VA: 0x2230D28
	public List<KeyValuePair<int, long>> ClaimResult() { }

	// RVA: 0x2230F1C Offset: 0x222CF1C VA: 0x2230F1C
	public void .ctor() { }
}

