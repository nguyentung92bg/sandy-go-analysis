// Namespace: 
public interface CrashContext.ISink // TypeDefIndex: 3312
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Key(string key, string value);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Log(string line);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void NonFatal(string message);
}

