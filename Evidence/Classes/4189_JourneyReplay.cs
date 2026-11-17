// Namespace: Dino.BusSand.App.Meta.Journey
public static class JourneyReplay // TypeDefIndex: 4189
{
	// Methods

	// RVA: 0x2297FF0 Offset: 0x2293FF0 VA: 0x2297FF0
	public static int Outcome(List<SimEvent> evts, out int waitReason) { }

	// RVA: 0x2298250 Offset: 0x2294250 VA: 0x2298250
	public static int FailCode(FailReason r) { }

	// RVA: 0x2298270 Offset: 0x2294270 VA: 0x2298270
	public static JourneyReplay.Result Run(LevelData level, JourneyDecoder.LevelStream j) { }

	// RVA: 0x229937C Offset: 0x229537C VA: 0x229937C
	private static JourneyReplay.Result Fail(JourneyReplay.Result r, StageEngine e, JourneyDecoder.LevelOp op, string what) { }

	// RVA: 0x22995B8 Offset: 0x22955B8 VA: 0x22995B8
	private static JourneyReplay.Result Snap(JourneyReplay.Result r, StageEngine e) { }

	// RVA: 0x229952C Offset: 0x229552C VA: 0x229952C
	private static string OpName(int op) { }
}

