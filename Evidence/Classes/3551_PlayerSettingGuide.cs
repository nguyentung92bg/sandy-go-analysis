// Namespace: Dino.BusSand.App.UI
public class PlayerSettingGuide : LiveFeature<PlayerSettingGuide.GuideData> // TypeDefIndex: 3551
{
	// Fields
	private static bool s_hooked; // 0x0

	// Properties
	public override string Key { get; }
	public override int Order { get; }
	public static PlayerSettingGuide I { get; }
	public bool NeedShowGuide { get; }

	// Methods

	// RVA: 0x22FF968 Offset: 0x22FB968 VA: 0x22FF968 Slot: 13
	public override string get_Key() { }

	// RVA: 0x22FF9A8 Offset: 0x22FB9A8 VA: 0x22FF9A8 Slot: 14
	public override int get_Order() { }

	// RVA: 0x22FF9B0 Offset: 0x22FB9B0 VA: 0x22FF9B0
	public static PlayerSettingGuide get_I() { }

	// RVA: 0x22FFA14 Offset: 0x22FBA14 VA: 0x22FFA14 Slot: 15
	public override void OnBoot() { }

	// RVA: 0x22FFAC0 Offset: 0x22FBAC0 VA: 0x22FFAC0
	public void Evaluate() { }

	// RVA: 0x22FFBA4 Offset: 0x22FBBA4 VA: 0x22FFBA4
	public bool get_NeedShowGuide() { }

	// RVA: 0x22FFC04 Offset: 0x22FBC04 VA: 0x22FFC04
	private static void OnPanelClosed(UIPanel p) { }

	// RVA: 0x22FFD60 Offset: 0x22FBD60 VA: 0x22FFD60
	public void RunGuide(Action done) { }

	// RVA: 0x2300098 Offset: 0x22FC098 VA: 0x2300098
	public void .ctor() { }
}

