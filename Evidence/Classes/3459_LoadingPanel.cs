// Namespace: Dino.BusSand.App.UI
public class LoadingPanel : UIPanel, IKitPanel // TypeDefIndex: 3459
{
	// Fields
	private const float TextY = 1812;
	private const float BarY = 1952;
	private const float BarW = 796;
	private const float BarH = 154;
	private const float FillIn = 16;
	private const float FillH = 122;
	private const float FillUp = 4;
	public const float MinShow = 2.5;
	private RectTransform _fill; // 0x38
	private TextMeshProUGUI _text; // 0x40
	private string _label; // 0x48
	private float _shown; // 0x50
	private float _t; // 0x54
	private float _work; // 0x58
	private float _workTo; // 0x5C
	private float _stepAt; // 0x60

	// Methods

	// RVA: 0x22BBCB4 Offset: 0x22B7CB4 VA: 0x22BBCB4
	public void Progress(float done, float upTo) { }

	// RVA: 0x22BBD88 Offset: 0x22B7D88 VA: 0x22BBD88 Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x22BC290 Offset: 0x22B8290 VA: 0x22BC290
	private void SetProgress(float k) { }

	// RVA: 0x22BC35C Offset: 0x22B835C VA: 0x22BC35C
	private void Update() { }

	// RVA: 0x22BC6A4 Offset: 0x22B86A4 VA: 0x22BC6A4 Slot: 6
	public override void OnClose() { }

	// RVA: 0x22BC6AC Offset: 0x22B86AC VA: 0x22BC6AC
	public void .ctor() { }
}

