// Namespace: Dino.BusSand.App.UI
public class FailPanel : UIPanel, IKitPanel, IKeepOnOutsideTap // TypeDefIndex: 3588
{
	// Fields
	private bool _busy; // 0x38
	private bool _waiting; // 0x39
	private const float OfferTop = 331.5;
	private const float BtnH = 242;
	private const float PairLW = 366;
	private const float PairLX = -223.5;
	private const float PairRW = 434;
	private const float PairRX = 192.5;
	private const float HoldMinY = 320;
	private const float OfferHoldMinY = 187;
	private const float HoldGap = 120;
	private const float OfferHoldGap = 109;
	private const float HoldGapMin = 70;
	private const float WindowRoof = 300;

	// Methods

	// RVA: 0x2315C5C Offset: 0x2311C5C VA: 0x2315C5C Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x231780C Offset: 0x231380C VA: 0x231780C Slot: 6
	public override void OnClose() { }

	// RVA: 0x2317864 Offset: 0x2313864 VA: 0x2317864
	private void OnOffer() { }

	// RVA: 0x2317A7C Offset: 0x2313A7C VA: 0x2317A7C
	private void OfferDone(int id, bool ok, bool timeout) { }

	// RVA: 0x2317C48 Offset: 0x2313C48 VA: 0x2317C48 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x231719C Offset: 0x231319C VA: 0x231719C
	private void BuildPeek(KitWindow w, float fromWindowTop, bool follow) { }

	// RVA: 0x2317CF8 Offset: 0x2313CF8 VA: 0x2317CF8
	internal static void NopeButton(RectTransform b) { }

	// RVA: 0x2317DF8 Offset: 0x2313DF8 VA: 0x2317DF8
	public void .ctor() { }
}

